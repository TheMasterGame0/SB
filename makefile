# Compilador e flags
CC = g++
CFLAGS = -std=c++17 -I./src/cabecalho

# Diretório do executável final
TARGET = ./sb

# Fontes dos arquivos de implementação
SRCS = $(wildcard src/implementacao/*.cpp)

# Outros arquivos fonte específicos
SRCS_2 = src/main.cpp src/montador.cpp src/preProcessador.cpp

# Todos os arquivos fonte combinados
ALL_SRCS = $(SRCS) $(SRCS_2)

# Regra padrão (target principal)
$(TARGET): $(ALL_SRCS)
	$(CC) -o $@ $^ $(CFLAGS)

# Regra para limpar o binário gerado
clean:
	rm -f $(TARGET)
