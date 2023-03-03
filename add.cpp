#include "add.hpp"


Add::Add(std::string val, ASTNode* ln, ASTNode* lr) : ASTNode( val, ln, lr){
    std::cout << "add() constr" << std::endl;
}


Add::~Add() {
    std::cout << "add() destr" << std::endl;
}


ASTNode & Add::operator =(const ASTNode &other ) {
    if ( this == & other)
        return *this;

    return *this;
 }
