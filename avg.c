#include <stdio.h>

int main() {

 float fahrenheit;
 double celsius;

 printf("Enter temperature in Fahrenheit: ");

 scanf("%f", &fahrenheit);

 celsius = (fahrenheit - 32) * (5 / 9);

 printf("Temperature in Celsius: %lf\n", celsius);

 return 0;

}