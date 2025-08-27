#include "practico.h"


/*Implemente recursivamentelas siguientes operaciones sin que las soluciones retornadas compartan memoria
con los parámetros.*/


// Retorna la lista resultado de tomar los primeros i elementos.
// l no comparte memoria con la lista resultado.
lista Take(int i, lista l){
    lista j=NULL;
    if(i==0){
        return j;
    } else {
        j=new nodo_lista;
        j->dato=l->dato;
        l=l->sig;
        j->sig= Take(i-1, l);
    }
    return j;
}

// Retorna la lista resultado de no tomar los primeros u elementos.
// l no comparte memoria con la lista resultado.
lista Drop(int u, lista l){
    
}

// Genera una lista fruto de intercalar ordenadamente las listas.
// l y p que vienen ordenadas.
// l y p no comparten memoria con la lista resultado.
lista Merge(lista l, lista p);

// Agrega la lista p al final de la lista l.
// l y p no comparten memoria con la lista resultado.
lista Append(lista l, lista p);
