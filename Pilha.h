#ifndef PILHA_H
#define PILHA_H

typedef struct No No;
typedef struct Pilha Pilha;

Pilha* stack();

void push(Pilha* pilha,int dado);

void pop(Pilha* pilha);

void imprime_pilha(Pilha* pilha);

int peak(Pilha* pilha);

void isEmpty(Pilha* pilha);

#endif //PILHA_H
