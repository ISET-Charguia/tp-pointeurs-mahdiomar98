#include<stdio.h>
#include<stdlib.h>


void Lecture_tab(int TAB[],int N)
{
	int *p;   
	p=malloc(N);
	p=TAB;
	if(TAB!=NULL)
	{
		for(p=TAB;p<TAB+N;p++)
		{
			puts("Donner un entier");
	 		scanf("%d",p);
    	}
	}
}

void Permuter(int A,int B)
{
	int aux;
	aux=A;
	A=B;
	B=aux;
}

void Inverser_tab(int Tab[] ,int N)
{
	int *p,*p1;
	for(p=Tab,p1=Tab+N-1;p<Tab+N/2;p++,p1--)
       Permuter(*p,*p1);
}

void Affichage_tab(int Tab[] ,int N)
{
	int *p;
	for(p=Tab;p<Tab+N;p++)
		printf("%d\t",*p);
}

int main(void)
{
	
	int N,Tab[N];
	puts("Donner N");
	scanf("%d",&N);
	Lecture_tab(Tab,N);
	Affichage_tab(Tab,N);
	Inverser_tab(Tab,N);
	Affichage_tab(Tab,N);


	return 0;
}
