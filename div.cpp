#include "div.hpp"


Div::Div(std::string val, ASTNode* ln, ASTNode* lr) : ASTNode( val, ln, lr){
    std::cout << "div() constr" << std::endl;
}


Div::~Div() {
    std::cout << "div() destr" << std::endl;
}


ASTNode & Div::operator =(const ASTNode &other ) {
    if ( this == & other)
        return *this;

    return *this;
 }
