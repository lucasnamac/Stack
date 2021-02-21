#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
    int opcaoNumero,  elem, topo, remover, qtd;
    PilhaNumeros p, p1, p2, p3;;
    p=cria_pilha();
    p1=cria_pilha();
    p2=cria_pilha();
    p3=cria_pilha();

         menuNumero();
         scanf("%d", &opcaoNumero);
         while(opcaoNumero!=7){
            switch(opcaoNumero){
                case(1):
                    printf("Insira o numero\n");
                    scanf("%d", &elem);
                    push(p, elem);
                    break;
                case(2):
                    pop(p, &remover);
                    printf("Removido: %d\n", remover);
                    break;
                case(3):
                    le_topo(p, &topo);
                    printf("topo e: %d\n", topo);
                    break;
                case(4):
                    imprimir(p);
                    break;
                case(5):
                    imprime_reversa(p);
                    break;
                case(6):

                    Pares_Impares(p, &p2, &p3);
                    printf("Pilha de Pares: ");
                    imprimir(p2);
                    printf("\nPilha de Impares: ");
                    imprimir(p3);
                    break;

            };

            menuNumero();
            scanf("%d", &opcaoNumero);
        }
        if(opcaoNumero==7){
            printf("Vc optou por sair.. at� logo!");
            return 0;
        }
    return 0;
}

