#include <stdio.h>


int main (){


    int dog[2] = {-90, 8};

    int *ptr2dog = &dog[0];
    //int *ptr2dog = &dog;

    printf("array[0] = %d, array[1] = %d\n", dog[0], dog[1]);

    for (int i=0; i<2; ++i)
        printf("dog[%d]=%d\n", i, dog[i]);

    
    printf("ptr2dog=%d \t ptr2dog next entry = %d\n", *ptr2dog, *(ptr2dog+1));
    
    return 0;
}