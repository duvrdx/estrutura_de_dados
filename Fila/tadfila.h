#ifndef TADPILHA_H_
#define TADPILHA_H_

// Importando a lista
#include "tadlista.h"


/****************************************
 * 
 * ESTRUTURAS DE DADOS DO TAD FILA
 * 
 ****************************************/

typedef lista fila;


/*************************************************
 * 
 * INTERFACE DO TAD FILA
 * 
 *************************************************/

fila cria_fila();
tdado enfileira(fila fl, tdado dado);
tdado desenfileira(fila fl);
tdado cabeca_fila(fila fl);
tdado cauda_fila(fila fl);
int tam_fila(fila fl);
int vazia_fila(fila fl);
lista fila2lista(fila fl);


#endif