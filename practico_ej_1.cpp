#include <iostream>
#include "practico.h"



/*Implemente iterativamente las siguientes operaciones accediendo directamente a la representación y sin usar
procedimientos liliares (Si considera necesario, puede pasar la lista por referencia agregando &).*/;

// Retorna true si x pertenece a l, false en caso contrario.
bool IsElement(int x, lista l){
    bool bandera=false;
    while(l!=NULL){
        if(l->dato==x){
            bandera=true;
        }
        l=l->sig;
    }
    return bandera;
}


// Retorna la cantidad de elementos de la lista.
int Length(lista l){
    int contador=0;
    while(l!=NULL){
        contador++;
        l=l->sig;
    }
    return contador;
}

// Retorna el último elemento de l.
// Pre: l no es vacía.
int Last(lista l){
    int placeholder;
    lista l, l=l;
    while(l!=NULL){
        l=l;
        l=l->sig;
        }
        placeholder=l->dato;
    return placeholder;
}

// Retorna el máximo elemento de l.
// Pre: l no es vacía.
int Max(lista l){
    int placeholder=l->dato;
    while(l!=NULL){
        if(l->dato>placeholder){
            placeholder=l->dato;
        }
        l=l->sig;
    }
    return placeholder;
}

// Retorna si la lista no es vacía el promedio de sus elementos.
// Pre: l no es vacía.
float Average(lista l){
    int cant=0, suma=0;
    while (l!=NULL){
        suma+=l->dato;
        cant++;
        l=l->sig;
    } 
    return suma/cant;
}

// Inserta ordenadamente el elemento x en la lista ordenada l.
lista Insert(int x, lista l){
    lista ant=l, aux=l, nuevo_nodo=new nodo_lista;
    nuevo_nodo->dato=x;
    while(aux->dato<x && aux!=NULL){
        ant=aux;
        aux=aux->sig;
    }
    aux->sig=nuevo_nodo;
    nuevo_nodo->sig=aux;
}

lista Snoc(int x, lista l);
// Inserta el elemento x al final de la lista l.
lista Remove(int x, lista l);
// Elimina todas las ocurrencias de x en la lista l.
bool Equals(lista l, lista p);
// Verifica si las listas l y p son iguales (mismos elementos en el mismo orden).