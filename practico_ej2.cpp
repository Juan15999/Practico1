#include "practico.h"


/*Implemente iterativamentelas siguientes operaciones accediendo directamente a la representación y sin usar
procedimientos auxiliares y sin que las soluciones retornadas compartan memoria con los parámetros*/

// Retorna la lista resultado de tomar los primeros i elementos.
// l no comparte memoria con la lista resultado.
lista Take(int i, lista l){
    lista j, ant, aux;
    j=new nodo_lista;
    j->dato=l->dato;
    aux=j->sig;
    ant =j;
    l=l->sig;
    for(int m=0; m<i; m++){
        aux=new nodo_lista;
        aux->dato= l->dato;
        ant->sig=aux;
        ant=aux;
        aux=aux->sig;
        l=l->sig;
    }
    return j;
}

// Retorna la lista resultado de no tomar los primeros u elementos.
// l no comparte memoria con la lista resultado.
lista Drop(int u, lista l){
    lista j=new nodo_lista, ant, aux;
    ant=j;
    aux=j->sig;
    for(int i=0; i<u; i++){
        l=l->sig;
    }
    if(l!=NULL){
        ant->dato=l->dato;
        l=l->sig;
    }
    while(l!=NULL){
        aux=new nodo_lista;
        aux->dato=l->dato;
        ant->sig=aux;
        l=l->sig;
    }
    return j;
}

// Genera una lista fruto de intercalar ordenadamente las listas.
// l y p que vienen ordenadas.
// l y p no comparten memoria con la lista resultado.
lista Merge(lista l, lista p){
    lista j=NULL, aux=j, ant;

    while(l!=NULL && p!=NULL){
        aux=new nodo_lista;
        ant=aux;
        if(l->dato>=p->dato){
            aux->dato=l->dato;        
        } else {
            aux->dato=p->dato;
        }
        aux=aux->sig;
        ant->sig=aux;
        l=l->sig;
        p=p->sig;
    }
    if(l!=NULL && p==NULL){
        while(l!=NULL){
            aux=new nodo_lista;
            aux->dato=l->dato;
            ant=aux;
            aux=aux->sig;
            ant->sig=aux;
            l=l->sig;

        }
    } else if(p!=NULL && l==NULL){
        while(p!=NULL){
            aux=new nodo_lista;
            aux->dato=p->dato;
            ant=aux;
            aux=aux->sig;
            ant->sig=aux;
            p=p->sig;
        }
    }
    return j;
}


// Agrega la lista p al final de la lista l.
// l y p no comparten memoria con la lista resultado.
lista Append(lista l, lista p){
    lista j, aux, ant;
    j=aux;
    while(l!=NULL){
        aux=new nodo_lista;
        aux->dato=l->dato;
        ant=aux;
        aux=aux->sig;
        ant->sig=aux;
        l=l->sig;
    }
    while(p!=NULL){
        aux=new nodo_lista;
        aux->dato=p->dato;
        ant=aux;
        aux=aux->sig;
        ant->sig=aux;
        p=p->sig;
    }
    return j;
}
