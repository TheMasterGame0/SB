#include <list>
#include "instrucao.cpp"


using namespace std;

int contadorLinhas = 1;     // Contador de linhas do Usuário
int contadorInstrucoes = 0; // Contador utilizado pelo código

list<instrucao> carregarOpcodes(){
  list<instrucao> listaInstrucoes;
  listaInstrucoes.push_back(instrucao("ADD", 1, 2));
  listaInstrucoes.push_back(instrucao("SUB", 2, 2));
  listaInstrucoes.push_back(instrucao("MUL", 3, 2));
  listaInstrucoes.push_back(instrucao("DIV", 4, 2));
  listaInstrucoes.push_back(instrucao("JMP", 5, 2));
  listaInstrucoes.push_back(instrucao("JMPN", 6, 2));
  listaInstrucoes.push_back(instrucao("JMPP", 7, 2));
  listaInstrucoes.push_back(instrucao("JMPZ", 8, 2));
  listaInstrucoes.push_back(instrucao("COPY", 9, 3));
  listaInstrucoes.push_back(instrucao("LOAD", 10, 2));
  listaInstrucoes.push_back(instrucao("STORE", 11, 2));
  listaInstrucoes.push_back(instrucao("INPUT", 12, 2));
  listaInstrucoes.push_back(instrucao("OUTPUT", 13, 2));
  listaInstrucoes.push_back(instrucao("STOP", 14, 1));
  return listaInstrucoes;
}

int montar() {
  list<instrucao> listaInstrucoes = carregarOpcodes();


}

