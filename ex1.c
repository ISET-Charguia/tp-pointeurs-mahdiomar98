#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int *p,*q;
    puts("Donner un entier : ");
    scanf("%d",&p);
    q=p+1;
    printf("p= %d \n",&p);
    printf("q= %d \n",&q);
    printf("int= %d \n",sizeof(int));

	printf("\n******************************************\n\n");

    double *p1,*q1;
    p1=malloc(sizeof(*p1));
    puts("Donner un reel : ");
    scanf("%lf",&p);
    q1=p1+1;
    printf("p1= %d \n",&p1);
    printf("q1= %d \n",&q1);
    printf("double= %d \n",sizeof(double));

	printf("\n******************************************\n\n");

    char *p2,*q2;
    p2=malloc(sizeof(*p2));
    puts("Donner une chaine : ");
    scanf("%s",&p2);
    q2=p2+1;
    printf("p2= %d \n",&p2);
    printf("q2= %d \n",&q2);
    printf("int= %d \n",sizeof(char));


}
