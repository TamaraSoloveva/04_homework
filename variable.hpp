#ifndef VARIABLE_HPP
#define VARIABLE_HPP

#include "astnode.hpp"

class Variable : public ASTNode {
  public:
    Variable(std::string val)  : ASTNode(val), varName_(val) {}

    std::string getVarName() const { return varName_; }

  private:
    std::string varName_;
};

#endif // VARIABLE_HPP
