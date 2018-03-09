#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	typedef struct
	{
		
		char nom[20];
		char prenom[20];
		char groupe[20];
	}etudiant;
	
void groupe(char *grp,etudiant *T, int N)
{
	etudiant *p;
	for(p=T;p<T+N;p++)
	{
		if(strcmp(grp,T->groupe)==0)
			
	printf("%s\n",T->nom);
	
	}
}
void remplir ( etudiant *T,int N)
{
etudiant *e;
for(e=T;e<T+N;e++)
	{
puts("donner le nom ");
scanf ("%s",e->nom);
puts("donner le prenom ");
scanf ("%s",e->prenom);

puts("donner le groupe");
scanf ("%s",e->groupe);
}


}	
int main (void) 
{
	
	etudiant *T;
	int N;
	char grp[10];
	
	do
	{
		puts("Donner N : ");
		scanf ("%d",&N);
	}while(N<1);
	T=malloc(N*sizeof(*T));
	remplir(T,N);	
	puts("Donner le Groupe : ");
	scanf ("%s",grp);
	groupe(grp,T,N);

	return 0;
}