#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#define max 20

struct no{
    int vet[max];
    int topo;

};


PilhaNumeros cria_pilha(){
    PilhaNumeros p;
    p=(PilhaNumeros) malloc (sizeof(struct no));
    if(p!=NULL){
        p->topo=-1;
    }
    return p;
}

int pilha_vazia(PilhaNumeros p){

    if(p->topo==-1) return 1;
    else return 0;

}

int pilha_cheia(PilhaNumeros p){

    if(p->topo==max-1) return 1;
    else return 0;

}

int push(PilhaNumeros p, int elem){

    if(p==NULL || pilha_cheia(p)==1) return 0;


    p->topo++;
    p->vet[p->topo]=elem;

    return 1;

}


int pop(PilhaNumeros p, int *elem){

    if(p==NULL || pilha_vazia(p)==1) return 0;

    *elem=p->vet[p->topo];
    p->topo--;

    return 1;

}

int le_topo(PilhaNumeros p, int *elem){

    if(p==NULL || pilha_vazia(p)==1) return 0;

    *elem=p->vet[p->topo];

    return 1;

}


int imprimir(PilhaNumeros p){
    int i;

    for(i=p->topo; i>=0; i--){
        printf("%d  ", p->vet[i]);
    }
    printf("\n");

    return 1;

}


void menuNumero(){
    printf("1- Inserir\n");
    printf("2- Remover\n");
    printf("3- Le topo\n");
    printf("4- Imprimir\n");
    printf("5- Imprime reversa\n");
    printf("6- Pares e Impares\n");
    printf("7- Sair\n");

}


int imprime_reversa(PilhaNumeros p){

    if(pilha_vazia(p)==1) return 0;

    int i;

    for(i=0; i<=p->topo; i++){
        printf("%d ", p->vet[i]);
    }
    printf("\n");
    return 1;
}

int Pares_Impares(PilhaNumeros p, PilhaNumeros *p2, PilhaNumeros *p3){

     if(pilha_vazia(p)==1) return 0;

     int i;
     for(i=0; i<p->topo; i++){
        if(p->vet[i]%2==0){
            (*p2)->topo++;
            (*p2)->vet[(*p2)->topo]= p->vet[i];

        }if(p->vet[i]%2!=0){
            (*p3)->topo++;
            (*p3)->vet[(*p3)->topo]= p->vet[i];

        }
     }
    return 1;
}



