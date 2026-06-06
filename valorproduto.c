#include <stdio.h>

int main() {

    char produtoA[30] = "produto A";
    char produtoB[30] = "produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    
    float valorA = 10.50; 
    float valorB = 20.40; 

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;

    
    printf("produto %s tem estoque %u e o valor unitario eh %.2f\n", produtoA, estoqueA, valorA);
    printf("produto %s tem estoque %u e o valor unitario eh %.2f\n", produtoB, estoqueB, valorB);
 
    return 0;
}