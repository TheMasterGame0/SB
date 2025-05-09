#include "Instrucao.h"

Instrucao::Instrucao(std::string nome, int opcode, int nArgumento) {
    this->nome = nome;
    this->opcode = opcode;
    this->numeroDeArgumentos = nArgumento;
}
