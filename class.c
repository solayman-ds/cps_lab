#include<stdio.h>
/*
write a C program that computes the product of two integers (provided by the user)
 by calling a function mult.
*/

int mult( int a, int b)
    {

        return a*b;
    }
/*
void swap( int a, int b)
    {
        int c = a;
            a = b;
            b = c;
     printf("3. swap function prints: a= %d, b=%d \n", a, b);   
    }
*/
void swap( int *x, int *y)

    {

         int t;
     t   = *x;
    *x   = *y;
    *y   =  t;

     //printf("3. USING POINTERS swap function prints: a= %d, b=%d \n", *ptr2a, *ptr2b);   
    }
int main()
{
    
    int cat1=1 ;
    int *ptr2cat1=&cat1; //* stands for a dereferencing operator it is a unary operator.
    
    //ptr2cat1 = &cat1; //another way of initializing not declaring though.
    printf("1.value of ptr2cat1 = %d \n", *ptr2cat1);
    
    int cat2 = 2;
    int *ptr2cat2 =&cat2;
    printf("2.value of ptr2cat2 = %d \n", *ptr2cat2);


    swap(&cat1, &cat2);


    // printf("1. enter two integers: \n");
    // scanf("%d  %d", &cat1, &cat2 );   //intro to &=ampersand=address/location
    printf("2. Values of the integers before swap: %d and %d \n", cat1, cat2);
    // swap(cat1 , cat2);
    printf("4. Values of the integers after swap: %d and %d \n", cat1, cat2);

    return 0;
}