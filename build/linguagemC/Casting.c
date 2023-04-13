#include <stdio.h>

int main(){
    
    int x = 56; 
    float y = (float) x;
    char c = (char) x; 

    //O char ele implementa os valores as partir da tabela ascii para caracteres
    printf("valor x = %d, Valor de y = %.2f, Valor c = %c", x, y, c);  

    return 0; 
}