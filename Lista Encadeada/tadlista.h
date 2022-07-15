/*******************************
  Fonte: tadlista.h
  versão: 1.0
  S.O.: Ubuntu 20.04
  Ultima alteração: 24/05/2022
  Autor: Ernani
*********************************/ 

#ifndef TADLISTA_H_
#define TADLISTA_H_

/****************************************
 * 
 * ESTRUTURAS DE DADOS DO TAD LISTA
 * 
 ****************************************/
typedef void *tdado;

typedef struct tnoh {
    tdado dado;
    struct tnoh *proximo;
} tnode;

typedef tnode *pnoh;

typedef struct {
    pnoh primeiro;
    pnoh ultimo;
    int tamanho;
} tcabec;

// Lista é um nome (alias) para tcabec *, 
// Lista é um ponteiro para tcabec.
typedef tcabec *lista;

/*************************************************
 * 
 * INTERFACE DO TAD LISTA
 * 
 *************************************************/
lista cria_lista();
lista append_lista(lista lst, tdado dado);
int len_lista(lista lst);
tdado prim_lista(lista lst);
tdado ult_lista(lista lst);
tdado dado_lista(lista lst, int pos);
int index_lista(lista lst, tdado dado);
lista insert_lista(lista lst, int pos, tdado dado);
tdado remove_lista(lista lst, int pos);

#endif /* TADLISTA_H_ */