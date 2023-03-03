#include "mul.hpp"


Mul::Mul(std::string val, ASTNode* ln, ASTNode* lr) : ASTNode( val, ln, lr) {
    std::cout << "mul() constr" << std::endl;
}


Mul::~Mul() {
    std::cout << "mul() destr" << std::endl;
}


ASTNode & Mul::operator =(const ASTNode &other ) {
    if ( this == & other)
        return *this;

    return *this;
 }
