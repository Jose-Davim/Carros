#ifndef DONO_H_INCLUDED
#define DONO_H_INCLUDED

#define MAX_NOME 100
#define MAX_COD_POSTAL 10

typedef struct {
    int numContribuinte;
    char nome[MAX_NOME];
    char codPostal[MAX_COD_POSTAL];
} Dono;

typedef struct nodoDono {
    Dono dono;
    struct nodoDono* seguinte;
} NodoDono;

// Funções
NodoDono* carregarDonos(const char* nomeFicheiro);
void guardarDonosCSV(NodoDono* lista, const char* nomeFicheiro);
void listarDonos(NodoDono* lista);
NodoDono* adicionarDono(NodoDono* lista, Dono novo);
void libertarDonos(NodoDono* lista);

#endif // DONO_H_INCLUDED
