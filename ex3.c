#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int N,M,i;
	int *A,*B;
	int *p,*q;

	do
    {
		puts("Donner N");
		scanf("%d",&N);
		puts("Donner M");
		scanf("%d",&M);
    }while (N<1 || M<1);

	A=malloc((M+N)*sizeof(*A));
	B=malloc(M*sizeof(*B));

	for (p=A;p<A+N;p++)
    {
    	puts("A = Donner un entier");
    	scanf("%d",p);
    }

	for (q=B;q<B+M;q++)
    {
    	puts("B = Donner un entier");
    	scanf("%d",q);
    }

	q=B;

	for(i=0;i<M;i++)
	{
		*(p+i)=*q;
		q++;
	}
	N=N+M;
	printf("\n");

	for (p=A;p<A+N;p++)
    {
    	printf("%d ",*p);
    }
	printf("\n");

	return 0;
}
