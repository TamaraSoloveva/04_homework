#ifndef MUL_HPP
#define MUL_HPP

#include "astnode.hpp"

class Mul : public ASTNode {
  public:
    //конструктор
    Mul(std::string val, ASTNode* ln, ASTNode* lr);
    //деструктор
    ~Mul( );
    //конструктор копирования
    Mul( const ASTNode & ast_ ) = delete;
    //оператор присваивания
    ASTNode & operator=(const ASTNode & other );
};

#endif // MUL_HPP
