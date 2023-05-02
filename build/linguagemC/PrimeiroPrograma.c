#include <stdio.h> 

//define uma informação de maneiraa definitiva
#define PI 3.1415

//Main do programa, escopo onde todo o programa será realizado
int main(){
    //Metodo de saida, podendo abrangir Strings, Ints, Floats, Chars,  
    printf("Hello word\n");

    //para se criar um texto tem que se criar um vetor de char
    const char nome [] = "Caick"; 
    int idade = 20; 

    double altura = 1.84; 
    double peso = 87.0; 
    double imc = peso/(altura*altura);  


    printf("Meu nome é %s e tenho %d anos\n", nome, idade);
    printf("Eu tenho %.2f de altura e peso %.2f e meu IMC é %.2f", altura, peso, imc); 

    //%.2f numero com duas casa depois da virgula 
    //%2.f numero com duas casa antes da virgula 
    printf("Valor de PI: %.4f\n", PI); 

    //transforma uma variavel em algo constante
    const int gravidade = 10;
    printf("Valor da gravidade: %d\n", gravidade);

    //Aceita apenas texto 
    puts("Essa aula não acaba");

    //Aceita textos e veriaveis
    printf("Aceito texto e varia"); 
    
    //Aceita apenas a saida de um caracter
    putchar('a');



    return 0; 
}