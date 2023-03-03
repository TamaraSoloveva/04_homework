#ifndef DIV_HPP
#define DIV_HPP

#include "astnode.hpp"

class Div : public ASTNode {
  public:
    //конструктор
    Div(std::string val, ASTNode* ln, ASTNode* lr) ;
    //деструктор
    ~Div( );
    //конструктор копирования
    Div( const ASTNode & ast_ ) = delete;
    //оператор присваивания
    ASTNode & operator=(const ASTNode & other );
};

#endif // DIV_HPP
