#include <stdio.h> 
#include <stdlib.h>

float celsius(float);//propótipo ou declaração da função
int main()
{
    float c, f;
    printf("Digite a temperatura em graus Fahrenheit:");
    scanf("%f", &f);
    c= celsius(f); // chamada a função
    printf(""Celsius= %.2f/n", c);
    system("PAUSE");
    return 0;
}


    float celsius( float fahr)
    {
        float c;
        c= (fahr- 32.0)* 5.0/9.0;
        return c;
    }





