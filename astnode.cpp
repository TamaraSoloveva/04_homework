#include "astnode.hpp"
#include "vector"





ASTNode::ASTNode(const std::string &repr) : repr_(repr), lhs_{nullptr}, rhs_{nullptr} { }

ASTNode::ASTNode(const std::string &repr, ASTNode *lhs, ASTNode *rhs) : repr_(repr), lhs_{lhs}, rhs_{rhs} {

    std::cout << "ast node added, name: " << repr << std::endl;

}

ASTNode::~ASTNode() {
    std::cout << "ast node destr" << std::endl;

 /* delete lhs_;
    delete rhs_;
*/

}

void ASTNode::print(std::ostream &out) const { inner_print(out, 0); }

void ASTNode::clear( ASTNode *node ) { clear_tree(node); }

void ASTNode::inner_print(std::ostream &out, size_t indent) const {
    if (lhs_) {
        lhs_->inner_print(out, indent + 1);
    }
    for (size_t i = 0; i < indent; ++i) {
        out << "    ";
    }
    out << repr_ << '\n';
    if (rhs_) {
        rhs_->inner_print(out, indent + 1);
    }
}

void ASTNode::clear_tree(ASTNode *node) {
        if (node->lhs_) {
            clear_tree(node->lhs_);
        }

        if (node->rhs_) {
            clear_tree(node->rhs_);
        }

        delete node;
}




