#ifndef PMM_HPP_INCLUDED
#define PMM_HPP_INCLUDED


#define MAX_NAVIO 100
#define MAX_BERCO 20

#include <string>

//dados de entrada
int numNavios;
int numBercos;
int matTempoAtd[MAX_BERCO][MAX_NAVIO];
int vetOpenBerco[MAX_BERCO];
int vetCloseBerco[MAX_BERCO];
int vetTempoChegada[MAX_NAVIO];
int vetTempoSaida[MAX_NAVIO];


//MÉTODOS
void lerDados(std::string arq);
void testarDados(char *arq);

#endif /* PMM_HPP_INCLUDED */