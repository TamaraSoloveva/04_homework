#ifndef ADD_HPP
#define ADD_HPP

#include "astnode.hpp"

class Add : public ASTNode {
  public:
    //конструктор
    Add(std::string val, ASTNode* ln, ASTNode* lr);
    //деструктор
    ~Add( );
    //конструктор копирования
    Add( const ASTNode & ast_ ) = delete;
    //оператор присваивания
    ASTNode & operator=(const ASTNode & other );
};

#endif // ADD_HPP
