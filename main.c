// Online C compiler to run C program online
#include <stdio.h>

int main() 
{   int codigo, quanidade;
    float preco, total = 0;
    
    printf("Bem-vindo!");
    printf("digite o código do produto (0 para finalizar): ");
    scanf("%d", &codigo);
    
    while (codigo != 0) {
        printf("digite o preço do produto:");
        scanf("%f", &preco);
        printf("Digite a quantidade de produto");
        scanf("%d", &quantidade);
        
        total += preço * quantidade;
        printf("digite o código do próximo produto (digite 0 para finalizar): ");
        scanf("%d", &codigo);
    }
    printf("Total de comparar: R$%2.f\n", total);
    
    return 0;
}