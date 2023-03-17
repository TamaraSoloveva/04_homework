#include "div.hpp"


Div::Div(std::string val, ASTNode* ln, ASTNode* lr) : ASTNode( val, ln, lr){
    std::cout << "div() constr" << std::endl;
}

