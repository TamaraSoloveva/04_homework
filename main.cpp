#include <iostream>

#include "lexer.hpp"
#include "parser.hpp"

using namespace std;

int main()
{
    Lexer lexer(std::cin);
    Parser parser(lexer);

    ASTNode *ast = parser.parse();
    if (ast) {
         ast->print(std::cout);
         ast->closeProgram();
    }

    return 0;
}
