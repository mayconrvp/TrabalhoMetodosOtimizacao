#include "pmm.hpp"

#include <iostream>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    lerDados("i01.txt");
    testarDados("");
    
    return 0;
}

//LEITURA DE DADOS --------------------------------
//-------------------------------------------------
void lerDados(string arq)
{
    FILE *f = fopen(arq.c_str(), "r");
    fscanf(f, "%d %d\n", &numNavios, &numBercos);

    for (int i = 0; i < numBercos; i++)
        for (int j = 0; j < numNavios; j++)
            fscanf(f, "%d", &matTempoAtd[i][j]);

    for (int i = 0; i < numBercos; i++)
        fscanf(f, "%d %d", &vetOpenBerco[i], &vetCloseBerco[i]);

    for (int j = 0; j < numNavios; j++)
        fscanf(f, "%d", &vetTempoChegada[j]);

    for (int j = 0; j < numNavios; j++)
        fscanf(f, "%d", &vetTempoSaida[j]);

    fclose(f);
}

//-------------------------------------------------
void testarDados(char *arq)
{
    FILE *f;
    if (arq == "")
        f = stdout;
    else
        f = fopen(arq, "w");

    fprintf(f, "%d %d\n", numNavios, numBercos);

    for (int i = 0; i < numBercos; i++)
    {
        for (int j = 0; j < numNavios; j++)
            fprintf(f, "%d ", matTempoAtd[i][j]);
        fprintf(f, "\n");
    }

    for (int i = 0; i < numBercos; i++)
        fprintf(f, "%d %d \n", vetOpenBerco[i], vetCloseBerco[i]);

    for (int j = 0; j < numNavios; j++)
        fprintf(f, "%d ", vetTempoChegada[j]);
    fprintf(f, "\n");

    for (int j = 0; j < numNavios; j++)
        fprintf(f, "%d ", vetTempoSaida[j]);
    fprintf(f, "\n");

    if (arq != "")
        fclose(f);
}