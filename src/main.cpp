#include <string>
#include <iostream>

using namespace std;

#include "montador.h"
#include "preProcessador.h"

int main(int argc, char* argv[]) {
    // Verifica se o número de argumentos está correto
    if (argc != 3) {
        cerr << "Uso: ./sb [-p | -o] <arquivo>" << endl;
        return 1;
    }

    string parametro = argv[1];
    string arquivoAlvo = argv[2];

    // Executa de acordo com o parâmetro
    if (parametro == "-p") {
        preProcessar();
    } 
    else if (parametro == "-o") {
        preProcessar();
        montar();
    } 
    else {
        cerr << "Parâmetro inválido. Use -p (pré-processar) ou -o (pré-processar e montar)." << endl;
        return 1;
    }

    return 0;
}
