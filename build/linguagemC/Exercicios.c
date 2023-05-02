#include <stdio.h>

int main(){
    
   /*Escreva um programa que recebe como argumentos dois valores numéricos que representam nota. 
   Converta para float e então faz o cálculo da médie e apresenta a nota final.*/

    int x, y, z; 

    puts("Valor da primeira nota");
    scanf("%d", &x); 
    float nota1 = (float) x; 

    puts("Valor da segunda nota");
    scanf("%d", &y); 
    float nota2 = (float) y; 

    if (x < 4 || y < 4){
        puts("Sera necessario fazer a AV3");
    
        puts("Valor da terceira nota");
        scanf("%d", &z); 
        float nota3 = (float) z;

        if (nota3 > nota1){
            nota1 = nota3; 
        }

        if (nota3 > nota2){
            nota2 = nota3; 
        }  
    }

    float media = ((nota1+nota2)/2); 

    printf("A média do aluno foi %.2f", media);  

    return 0; 
}