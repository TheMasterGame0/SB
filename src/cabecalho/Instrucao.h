#ifndef INSTRUCAO_H
#define INSTRUCAO_H

#include <string>

class Instrucao {
    public:
    
    Instrucao(std::string nome, int opcode, int nArgumento);
    std::string nome;
    int opcode;
    int numeroDeArgumentos;
};

#endif