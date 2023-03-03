#include "sub.hpp"


Sub::Sub(std::string val, ASTNode* ln, ASTNode* lr) : ASTNode( val, ln, lr) {
    std::cout << "sub() constr" << std::endl;
}


Sub::~Sub() {
    std::cout << "sub() destr" << std::endl;
}


ASTNode & Sub::operator =(const ASTNode &other ) {
    if ( this == & other)
        return *this;

    return *this;
 }
