#include <stdio.h>

int main()

{



    int dog[2] = {-90, 8};

    int max = dog[0];

    if (max > dog[1])
        printf("the max is %d\n", max);

    else
    {
        printf("the max is %d\n", dog[1]);
    }
}