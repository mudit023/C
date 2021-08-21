#include <stdio.h>
#include <stdlib.h>

  int main()
{
  	char s1[30], s2[30];
  	int i;
  	printf("Enter the string: ");
  	gets(s1);

  	for (int i = 0; s1[i]!='\0'; i++)
  	{
  		s2[i] = s1[i];
  	}
  	s2[i] = '\0';

  	printf("\nstring copied into s2 = %s", s2);
}