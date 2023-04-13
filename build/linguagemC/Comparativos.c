#include <stdio.h>

int main(){
    printf("Exercicio 1 - ");
    int x = 10, y = 20, z; 
    
    z=x!=y;
    /*Por mais que pareça uma atribuição, a equação z=x!=y na verdade é um comparativo que pode ser colocado como z = (x!=y),
    se tratando de um comparatipo, onde caso a comparação for TRUE o valor de z = 1 e caso a comparação for FALSE o valor
    de z = 0*/ 

    printf("\nValor x = %d\nValor y = %d\nValor z = %d", x, y, z);
     

    printf("\n\nExercicio 2 -\n");

    int a = 0, b = 0, c = 0, d = 0;
    /*
    a | b | c | d |
    0 | 0 | 0 | 0 |
    0 | 0 | 0 | 1 |
    0 | 0 | 1 | 0 |
    0 | 0 | 1 | 1 |
    0 | 1 | 0 | 0 |
    0 | 1 | 0 | 1 |
    0 | 1 | 1 | 0 |
    0 | 1 | 1 | 1 |
    1 | 0 | 0 | 0 |
    1 | 0 | 0 | 1 |
    1 | 0 | 1 | 0 |
    1 | 0 | 1 | 1 |
    1 | 1 | 0 | 0 |
    1 | 1 | 0 | 1 |
    1 | 1 | 1 | 0 |
    1 | 1 | 1 | 1 |
    */
   printf("Tabela verdade\n a|b|c|d -- | a&&b | -- | c^d | -- |(a&&b)||(c^d)|");

    for (int f = 0; f < 2; f++){
        for (int e = 0; e < 2; e++){
            for (int i = 0; i < 2; i++){
                printf("\n %d|%d|%d|%d -- |  %d  | -- |  %d  | -- |   %d   |", a, b, c, d, a&&b, c^d, (a&&b)||(c^d));
                if (d == 0){
                    d = 1;
                }else{
                    d = 0;
                }
            }
            if (c == 0){
                c = 1;
            }else{
                c = 0;
            }        
        }

        if (b == 0){
            b = 1;
        }else{
            b = 0;
        }        
    }
    


    
    return 0;
}