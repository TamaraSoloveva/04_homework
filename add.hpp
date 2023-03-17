#ifndef ADD_HPP
#define ADD_HPP

#include "astnode.hpp"

class Add : public ASTNode {
  public:
    Add(std::string val, ASTNode* ln, ASTNode* lr);

    ~Add( ) { std::cout << "destructor" << std::endl; }

    Add( const ASTNode & ast_ ) = delete;

    ASTNode & operator=(const ASTNode & other ) = delete;
};

#endif // ADD_HPP
