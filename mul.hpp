#ifndef MUL_HPP
#define MUL_HPP

#include "astnode.hpp"

class Mul : public ASTNode {
  public:

    Mul(std::string val, ASTNode* ln, ASTNode* lr);

    ~Mul( )=default;

    Mul( const ASTNode & ast_ ) = delete;

    ASTNode & operator=(const ASTNode & other ) = delete;
};

#endif // MUL_HPP
