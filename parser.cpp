#include "parser.hpp"
#include "number.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "mul.hpp"



using Token = Lexer::Token;

ASTNode *Parser::parse() { return expr(); }

void Parser::next_token() { tok_ = lexer_.next_token(); }

ASTNode *Parser::expr() {

    // parse addition and subsctruction
    ASTNode *root = term();
    for (;;) {
        switch (tok_) {
        case Token::Operator: {
            std::string op = lexer_.get_operator();
            switch (op.front()) {
            case '+':
                root = new Add("+", root, term());
                if (root) root->addRootToVect(root);
                break;
            case '-':
                root = new Sub("-", root, term());
                if (root) root->addRootToVect(root);
                break;
            default:
                return root;

            }
            break;
        }

        default:
            return root;
        }
    }
}

ASTNode *Parser::term() {
    // parse multiplication and division
    ASTNode *root = prim();


    for (;;) {
        switch (tok_) {
        case Token::Operator: {
            std::string op = lexer_.get_operator();
            switch (op.front()) {
            case '*':
                root = new Mul("*", root, prim());
                if (root) root->addRootToVect(root);
                break;
            case '/':
                root = new Div("/", root, prim());
                if (root) root->addRootToVect(root);
                break;
            default:
                return root;
            }
            break;
        }
        default:
            return root;
        }
    }
}


ASTNode *Parser::prim() {
    // parse numbers and names
    ASTNode *node = nullptr;
    next_token();
    switch (tok_) {
    case Token::Number:
        node = new Number(lexer_.get_number());
        if (node) node->addRootToVect(node);
        break;
    case Token::Name:
        node = new Variable(lexer_.get_name());
        if (node) node->addRootToVect(node);
        break;
    case Token::Error:
        std::cout << "Error!" << std::endl;
        break;
    case Token::Lbrace:
        next_token();
        node = new Number(lexer_.get_number());
        if (node) node->addRootToVect(node);
        break;
    default:
        break;
    }
    next_token();
    return node;
}
