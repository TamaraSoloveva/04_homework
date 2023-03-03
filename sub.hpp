#ifndef SUB_HPP
#define SUB_HPP
#include "astnode.hpp"

class Sub : public ASTNode {
  public:
    //конструктор
    Sub(std::string val, ASTNode* ln, ASTNode* lr);
    //деструктор
    ~Sub( );
    //конструктор копирования
    Sub( const ASTNode & ast_ ) = delete;
    //оператор присваивания
    ASTNode & operator=(const ASTNode & other );
};

#endif // SUB_HPP
