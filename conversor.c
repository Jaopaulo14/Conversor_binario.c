#include <stdio.h>
#include "pilha.h"

int  main() {

    Pilha* pilha = stack();

    int num;
    scanf("%d",&num);
    if(num == 0) {
        push(pilha,0);
    }
    while(num != 0){
        push(pilha,num%2);
        num = num/2;
    }
    imprime_pilha(pilha);
    return 0;
}
