#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void moin_dernier(char ch[])
{
	char *p;
	for(p=&ch[1];*p!='\0';p++);
		*(p-1)='\0';
	free(p);
}


char *moin_dernierf(char ch[])
{
	char *p;
	for(p=&ch[1];*p!='\0';p++);
		*(p-1)='\0';
	free(p);
	
	return ch;
}


int main(void)
{
	char ch[]="",*p;
	puts("Donner une chaine : ");
	scanf("%s",ch);

	moin_dernier(ch);
	printf("Ch=%s\n",ch);
	p=moin_dernierf(ch);
	printf("Ch1=%s\n",p);
		
	return 0;
}
