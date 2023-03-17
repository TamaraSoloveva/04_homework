#ifndef SUB_HPP
#define SUB_HPP
#include "astnode.hpp"

class Sub : public ASTNode {
  public:
    Sub(std::string val, ASTNode* ln, ASTNode* lr);

    ~Sub( )=default;

    Sub( const ASTNode & ast_ ) = delete;

    ASTNode & operator=(const ASTNode & other )= delete;
};

#endif // SUB_HPP
