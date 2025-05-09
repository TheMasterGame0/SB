#ifndef LEITOR_DE_ARQUIVO_H
#define LEITOR_DE_ARQUIVO_H

#include <string>
/*
Classe responsável por ler um arquivo e conseguir fornecer uma dada linha especificada bem como o conteúdo completo do arquivo.
*/
class LeitorDeArquivo {
    public:
        //Construtor
        LeitorDeArquivo(std::string arquivoUrl);
        //Deletor
        ~LeitorDeArquivo();

        std::string recuperarLinha(int i);
        std::string recuperarProximaLinha();
        std::list<std::string> recuperarTodasAsLinhas();

    private:
        int contadorDeLinha;
        std::string arquivoUrl;
};

#endif