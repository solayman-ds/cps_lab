#include <stdio.h>


/*

Write a C program that computes the product of tow integers (provided by the user)
by calling a functon mult

*/



int mult (int a, int b)

{

    return a*b;
}

void swap(int a, int b){

    int temp;

    temp = a;

    a=b;
    
    b = temp;



    printf("swap function prints: a=%d, b=%d\n", a, b);
}

int main()

{
    int cat1, cat2;


    int cat1 = 1;

    int *ptrcat1;
    printf("value of ptrcat1=%d\n", *ptrcat1);
    ptrcat1 = cat1;

    printf("Enter tow integer:\n");

    scanf("%d %d", &cat1, &cat2);

    //printf("Prod is %d\n", mult(cat1, cat2));

    printf("Value of the interger before swap: %d and %d\n", cat1, cat2);

    swap(cat1, cat2);

    printf("Value of the interger after swap: %d and %d\n", cat1, cat2);

    return 0;



}