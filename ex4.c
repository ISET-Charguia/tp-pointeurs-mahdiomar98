#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i,AIDE,N;
	int *A;
	int *p1, *p2;
 	do
    {	
		puts("Donner N");
		scanf("%d",&N);
    }while (N<1);

	A=malloc(N*sizeof(*A));

	for (p1=A;p1<A+N;p1++)
    {
    	puts("A = Donner un entier");
    	scanf("%d",p1);
    }
	p2=A;
	p1=A+N-1;
	for (i=0;i<(N/2);i++)
	{
		AIDE=*(p2+i);
        *(p2+i)=*(p1-i);
        *(p1-i)=AIDE;
	}

	printf("Tableau inversee A :\n");
	for (p2=A;p2<A+N;p2++)
    {
    	printf("%d ",*p2);
    }
	printf("\n");
 
   
	return 0;
}
