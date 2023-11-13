#include <stdio.h>      

int main() {
    int a = 10;
    int b, c; //vai resultar em lixo de memoria, pois não foi declarado

    printf("&a = %p, a = %i\n", &a, a);
    printf("&b = %p, a = %i\n", &b, b);
    printf("&c = %p, a = %i\n \n", &c, c);
    
    b = 20;
    c = a + b;
    
    printf("&a = %p, a = %i\n", &a, a);
    printf("&b = %p, a = %i\n", &b, b);
    printf("&c = %p, a = %i\n \n", &c, c);
    
    return 0;
}

/* precisamos informar o tipo de dado, "%p"  o tipo que mostra a memoria 
O programa a cima imprimi o endereco de memoria e o valor das variaveis*/
