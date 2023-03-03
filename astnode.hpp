// OTUS C++ basic course homework.
// ASTNode

#pragma once

#include <cctype>
#include <iostream>
#include <string>


#include "vector"



class ASTNode {

  public:
    explicit ASTNode(const std::string &repr);

    ASTNode(const std::string &repr, ASTNode *lhs, ASTNode *rhs);

    ASTNode(const ASTNode &other) = delete;

    ASTNode &operator=(const ASTNode &other) = delete;

    ~ASTNode();

    std::string repr() const { return repr_; }

    void print(std::ostream &out) const;
    void closeProgram() {clean_all_objects();}
    void addRootToVect(ASTNode *root) { vect.push_back(root); }

  private:
    void inner_print(std::ostream &out, size_t indent) const;

    void clean_all_objects();

    std::vector <ASTNode *> vect;
    std::string repr_;
    ASTNode *lhs_;
    ASTNode *rhs_;

 };

