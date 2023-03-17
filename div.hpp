#ifndef DIV_HPP
#define DIV_HPP

#include "astnode.hpp"

class Div : public ASTNode {
  public:
    Div(std::string val, ASTNode* ln, ASTNode* lr) ;

    ~Div( ) = default;

    Div( const ASTNode & ast_ ) = delete;

    ASTNode & operator=(const ASTNode & other ) = delete;
};

#endif // DIV_HPP
