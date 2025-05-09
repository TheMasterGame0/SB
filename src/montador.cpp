#include <list>
#include "../cabecalho/Instrucao.h"


using namespace std;


list<Instrucao> carregarOpcodes(){
  int contadorLinhas = 1;     // Contador de linhas do Usuário
  int contadorInstrucoes = 0; // Contador utilizado pelo código

  list<Instrucao> listaInstrucoes;
  listaInstrucoes.push_back(Instrucao("ADD", 1, 2));
  listaInstrucoes.push_back(Instrucao("SUB", 2, 2));
  listaInstrucoes.push_back(Instrucao("MUL", 3, 2));
  listaInstrucoes.push_back(Instrucao("DIV", 4, 2));
  listaInstrucoes.push_back(Instrucao("JMP", 5, 2));
  listaInstrucoes.push_back(Instrucao("JMPN", 6, 2));
  listaInstrucoes.push_back(Instrucao("JMPP", 7, 2));
  listaInstrucoes.push_back(Instrucao("JMPZ", 8, 2));
  listaInstrucoes.push_back(Instrucao("COPY", 9, 3));
  listaInstrucoes.push_back(Instrucao("LOAD", 10, 2));
  listaInstrucoes.push_back(Instrucao("STORE", 11, 2));
  listaInstrucoes.push_back(Instrucao("INPUT", 12, 2));
  listaInstrucoes.push_back(Instrucao("OUTPUT", 13, 2));
  listaInstrucoes.push_back(Instrucao("STOP", 14, 1));
  return listaInstrucoes;
}

int montar() {
  return 0;
}
