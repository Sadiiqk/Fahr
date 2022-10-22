/*
_________________________________________________________________________________
_____
Date : 2022-10-10
File : Celcius
Description : Omvadlar celsius till fahrenheit
Author : Sadiiq Kaysa Sadiiqk@gmail.com
_________________________________________________________________________________
_____
*/

#include <stdio.h>
#include <math.h>
float celsiusTofahrenheit(float c); //function calling

void main ()
{   //Variabler och char för funktionen
    char igen;
    float celsius, fahrenheit;
    
   do
   {
    printf("Ange dagstemperatur i Celcius:");
    scanf("%f", &celsius);
    //called function to convert celsius to fahrenheit
    fahrenheit = celsiusTofahrenheit(celsius);
    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);
    //Användaren för möjlighet att köra programet igen med boolean 
    printf("Vill du köra programmet igen? (Y/N)");
    scanf(" %d", &igen);
   }
   while (igen == 'Y'|| igen == 'y');


}

float celsiusTofahrenheit(float c) //funktions defination
{
    return ((c * 9.0 / 5.0) + 32.0);
}