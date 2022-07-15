// Importando a lista
#include <stdlib.h>
#include "tadlista.h"
#include "tadpilha.h"

/*************************************************
 * 
 * INTERFACE DO TAD FILA
 * 
 *************************************************/

pilha cria_pilha(){
    pilha pl = cria_lista();
    return pl;
}

tdado empilha(pilha pl, tdado dado){
    append_lista(pl, dado);
}

tdado desempilha(pilha pl){
    return remove_lista(pl, tam_pilha(pl)-1);

}

tdado topo_pilha(pilha pl){
    return ult_lista(pl);
}

int tam_pilha(pilha pl){
    return len_lista(pl);
}

int vazia_pilha(pilha pl){
    if(tam_pilha(pl) == 0){
        return 1;
    }
    return 0;
}

lista pilha2lista(pilha pl){
    lista lst = cria_lista();

    if(!vazia_pilha(pl)){
        for(int i = 0; i < tam_pilha(pl); i++){
            append_lista(lst, dado_lista(pl, i));
        }
    }

    return lst;
}