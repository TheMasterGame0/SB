#include <string>

using namespace std;
class instrucao{
  public:
    string nome; 
    int  opcode;
    int numeroArgumentos;

    instrucao(string nome, int opcode, int nArgumento){
      this->nome = nome;
      this->opcode = opcode;
      this->numeroArgumentos = nArgumento;
    };

};