#include <stdio.h> 
#include <math.h>

int main(){

  puts("Exercicios circunferencia"); 

  int raio = 0;
  const float pi = 3.1415; 

  puts("Valor do raio do circulo: "); 
  scanf("%d", &raio); 

  double area = pi*pow(raio, 2);

  printf("O valor da area da circunferencia = %.2f", area);

  
  puts("\n\nExercicios IMC");
    
  float altura = 0.0; 
  float peso = 0.0; 

  puts("Coloque a sua Altura: ");
  scanf("%f", &altura); 
  
  puts("Coloque o seu peso: ");
  scanf("%f", &peso);
  
  float imc = peso/pow(altura, 2); 

  printf("Seu calculo IMC: %.2f", imc);

  return 0; 
}