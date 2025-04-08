#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

#define MAX_MATRICULA 10
#define MAX_MODELOS 50
#define MAX_MARCAS 50

typedef struct {
    char matricula[MAX_MATRICULA];
    char modelo[MAX_MODELOS];
    char marca[MAX_MARCAS];
    int ano;
    int donoNIF;
    int codVeiculo;
    int kmTotal;
} Carro;

typedef struct nodoCarro {
    Carro carro;
    struct nodoCarro* seguinte;
} NodoCarro;

// Funções
NodoCarro* carregarCarros(const char* nomeFicheiro);
NodoCarro* adicionarCarro(NodoCarro* lista, Carro novo);
void listarCarros(NodoCarro* lista);
void libertarCarros(NodoCarro* lista);

#endif // CARRO_H_INCLUDED
