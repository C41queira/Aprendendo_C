#include <stdio.h>
#include <math.h> 

int main(){

    printf("Exercicio 1 - "); 
    //A = pi * r^2 
    const double pi = 3.1415;
    double raio = 5; 

    double area = pi * pow(raio, 2); 
    printf("Resultado da area = %.2f\n", area);

    
    printf("Exercicio 2 - ");
    //Pitágoras = h^2 = C.A^2 + C.O^2
    int c_A = 3; 
    int c_O = 4; 

    int h = sqrt(pow(c_A, 2) + pow(c_O, 2));
    printf("h = %d", h); 
    return 0;  
}