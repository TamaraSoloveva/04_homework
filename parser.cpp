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
                break;
            case '-':
                root = new Sub("-", root, term());
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
                break;
            case '/':
                root = new Div("/", root, prim());
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
        break;
    case Token::Name:
        node = new Variable(lexer_.get_name());
        break;
    case Token::Error:
        std::cout << "Error!" << std::endl;
        break;
    case Token::Lbrace:
        node = expr();
       // next_token();
        break;
    case Token::Rbrace:


        break;
    default:
        break;
    }
    next_token();
    return node;
}
