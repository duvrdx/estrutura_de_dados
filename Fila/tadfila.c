// Importando a lista
#include <stdlib.h>
#include "tadlista.h"
#include "tadfila.h"

/*************************************************
 * 
 * INTERFACE DO TAD FILA
 * 
 *************************************************/

fila cria_fila(){
    fila fl = cria_lista();
    return fl;
}

tdado enfileira(fila fl, tdado dado){
    append_lista(fl, dado);
}

tdado desenfileira(fila fl){
    tdado dado = remove_lista(fl, 0);
    return dado;
}
tdado cabeca_fila(fila fl){
    return prim_lista(fl);
}
tdado cauda_fila(fila fl){
    return ult_lista(fl);
}

int tam_fila(fila fl){
    return len_lista(fl);
}
int vazia_fila(fila fl){
    if(len_lista(fl) == 0){
        return 1;
    } 

    return 0;
}

lista fila2lista(fila fl){
    lista lst = cria_lista();

    if(!vazia_fila(fl)){
        for(int i = 0; i < tam_fila(fl); i++){
            append_lista(lst, dado_lista(fl, i));
        }
    }

    return lst;
}