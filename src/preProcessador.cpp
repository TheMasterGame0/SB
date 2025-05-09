#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int preProcessar(){
  ifstream arquivo("/home/eduardomarciano/Documents/GitHub/SB/tests/preProcessador/00.asm"); // abre o arquivo para leitura
  
  if (!arquivo.is_open()) {
      cerr << "Erro ao abrir o arquivo." << endl;
      return 2;
  }

  string linha;
  // Passar tudo pra maiúsculo
  while (getline(arquivo, linha)) {
    transform(linha.begin(), linha.end(), linha.begin(), ::toupper);
    if(linha.empty()){
      continue;
    }
    cout << linha << endl; // imprime a linha atual
  }

  arquivo.close(); // fecha o arquivo
  return 0;
};
