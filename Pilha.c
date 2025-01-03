#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct No{
    int dado;
    No* proximo;
};

struct Pilha {
    int tam;
    No* topo;
};

Pilha* stack() {
    Pilha* pilha;
    pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->tam= 0;
    pilha->topo = NULL;
    return pilha;
}

void push(Pilha* pilha, int item){
    No* no = (No*) malloc(sizeof(No));
    no->dado = item;
    no->proximo = pilha->topo;
    pilha->tam++;
    pilha->topo = no;
}

void pop(Pilha* pilha) {
    No* atual = pilha->topo;
    if(atual == NULL) {
        puts("Pilha vazia");
        return;
    }
    pilha->topo = atual->proximo;
    free(atual);
    pilha->tam--;
}
void imprime_pilha(Pilha* pilha) {
    No* atual = pilha->topo;
    if(atual == NULL) {
        puts("Pilha vazia");
        return;
    }
    while(atual != NULL) {
        printf("%d",atual->dado);
        atual= atual->proximo;
    }
    putchar('\n');
}

int peak(Pilha* pilha) {
    if(pilha->tam == 0) {
        return -1;
    }
    return pilha->topo->dado;
}

void isEmpty(Pilha* p) {
    if(p->tam == 0) {
        puts("A pilha esta vazia");
        return;
    }
    printf("A pilha contem %d iten(s)\n",p->tam);
}
