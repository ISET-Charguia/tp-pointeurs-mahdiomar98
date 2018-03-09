#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    int A[] = {12,23,34,45,56,67,78,89,90};
    int *p;
    p=A;

    printf("%d\n",*p+2);
    printf("%d\n",*(p+2));
    printf("%d\n",&p+1);
    printf("%d\n",*(&A[4]-3));
    printf("%d\n",*(A+3 ));
    printf("%d\n",&A[7]-p);
    printf("%d\n",p+(*p-10));
    printf("%d\n",*(p+*(p+8)-A[7]));


    return EXIT_SUCCESS;
}
