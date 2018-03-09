#include <stdio.h>

int main(void)
{
	char ch[50]; 
	/*int i,j;*/
	int palin;
	char *p1,*p2;
	/*printf("Version 1 : \n");
	puts("Donner une chaine");
	gets(ch);

	j=strlen(ch)-1;
	palin=1;
	for (i=0;palin && i<j;i++,j--)
		if (ch[i] != ch[j])
			palin=0;
 

	if (palin)
		printf("La chaine est une palindrome.\n");
	else
		printf("La chaine n'est pas une palindrome.\n");

	*/

	printf("Version 2 : \n");

	puts("Donner une chaine");
	scanf("%s",ch);
	int n;
	n=strlen(ch);
	p2=ch+n-1;
	palin=1;
	for(p1=ch;palin && p1<p2;p1++,p2--)
		if (*p1 != *p2) 
			palin=0;

	if (palin)
		printf("La chaine est une palindrome.\n");
	else
		printf("La chaine n'est pas une palindrome.\n");
 
	return 0;
}
