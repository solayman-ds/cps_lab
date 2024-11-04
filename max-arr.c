#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()

{



    int dog[] = {-90, 8};
    it *ptr2dog = &dog[0];

    int size = sizeof(dog) / sizeof(dog[0]);



    printf("%d", size);

    int arr[] = {19,25,10,3,1,8,22,17,7,84,9,19,25,10,3,1,
             8,22,17,7,84, 9,19,25,10,3,1,8,22,17,7,84,
             9,19,25,10,3,1,8,22,17,7,84,9,19,25,10,33,
             1,8,22,17,7,84,9,19,25,10,3,1,8,22,17,7,84,
             9,19,25,10,3,1,8,22,17,7,84,9,11,23,45,5,3};

    //using sizeof() operator to get length of array
    //printf(" The length of int array is : %ld ", sizeof(arr) / sizeof(arr[0]));


   

    int max = dog[0];

   /*if (max > dog[1])
        printf("the max is %d\n", max);

    else
    {
        printf("the max is %d\n", dog[1]);
    } */


    for (int i = 0; i <size; ++i){

        if (*ptr2dog > *(ptr2dog+1)){
           max = *ptr2dog;
        }

        else{

        }
    }
}