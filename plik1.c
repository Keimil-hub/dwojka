#include <stdio.h>

#include <string.h>



float Pierwiastek(float a);

float Sin(float a);

float Exp(float a);

float Oblicz(float (*Wskaznik)(float),float a);



int main()

{

    float n = 5;

    printf("Podales %f", n);

    Oblicz(Pierwiastek, n);

    Oblicz(Sin, n);

    Oblicz(Exp, n);

}
