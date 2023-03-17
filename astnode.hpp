// OTUS C++ basic course homework.
// ASTNode

#pragma once

#include <cctype>
#include <iostream>
#include <string>
#include "vector"

#define Dbg



class ASTNode {

  public:
    explicit ASTNode(const std::string &repr);

    ASTNode(const std::string &repr, ASTNode *lhs, ASTNode *rhs);

    ASTNode(const ASTNode &other) = delete;

    ASTNode &operator=(const ASTNode &other) = delete;

    ~ASTNode();

    std::string repr() const { return repr_; }

    void print(std::ostream &out) const;
    void clear(ASTNode *node);



  private:
    void inner_print(std::ostream &out, size_t indent) const;
    void clear_tree( ASTNode *node );
    std::string repr_;
    ASTNode *lhs_;
    ASTNode *rhs_;

 };

