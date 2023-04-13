#include <stdio.h> 

int main(){

    printf("Exercicio 1 - ");
    int soma = 1+2+3+4+5+6+7+8+9+10; 
    printf("Resultaado soma 1 a 10 = %d\n", soma);

    printf("Exercicio 2 - ");
    int prod = 1*2*3*4*5; 
    printf("Valor do produto 1 a 5 = %d\n", prod);

    printf("Exercicio 3 - ");
    //Nota, caso você utilize int em uma equação que de virgula, o resultado dara automaticamente um numero arredondado para baixo
    //Ex: caso int = (4 + 9) / 2 o resultado dara 6 e não 6,5 
    float av1 = 4, av2 = 9; 
    float media = ((av1 + av2)/2); 
    printf("Média no semestre = %.2f\n", media); 

    printf("Exercicio 4 - ");
    int md2 = ((10+20+30)/2); 
    printf("A média acima é %d\n", md2); 

    printf("Exercicio 5 - ");
    int expre = (5+3)*4/2;
    printf("Resultado da expre = %d\n", expre);

    printf("Exercicio 6 - ");
    srand(time(NULL));//Inicializa configurações aleatorias em tempo real
    int numero_aleatorio = rand() % 100; //Cria um numero aleatorio de 1 a 99

    if (numero_aleatorio % 2 == 0){
        printf("O numero %d é par\n", numero_aleatorio); 
    }else{
        printf("O numero %d é impar\n", numero_aleatorio); 
    }

    printf("Exercicio 7 - ");
    int x = 10; 
    x += 5; 
    printf("Resultado 7 = %d\n", x);

    printf("Exercicio 8 - ");
    int y = 20; 
    y-= 10;
    printf("Resultado 8 = %d\n", y);

    printf("Exercicio 9 - ");
    int w = 5; 
    w *= 3; 
    printf("Resultado 9 = %d\n", w);

    printf("Exercicio 10 - ");
    int z = 100; 
    z /= 4; 
    printf("Resultado 10 = %d\n", z);


    return 0; 
}