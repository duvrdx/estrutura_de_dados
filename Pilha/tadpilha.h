#ifndef TADPILHA_H_
#define TADPILHA_H_

// Importando a lista
#include "tadlista.h"


/****************************************
 * 
 * ESTRUTURAS DE DADOS DO TAD FILA
 * 
 ****************************************/

typedef lista pilha;


/*************************************************
 * 
 * INTERFACE DO TAD FILA
 * 
 *************************************************/

pilha cria_pilha();
tdado empilha(pilha pl, tdado dado);
tdado desempilha(pilha pl);
tdado topo_pilha(pilha pl);
int tam_pilha(pilha pl);
int vazia_pilha(pilha pl);
lista pilha2lista(pilha pl);


#endif