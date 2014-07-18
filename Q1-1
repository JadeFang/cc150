//Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define LEN	100

int unique(char * string)
{
	int j = 0;
	int i = 0;
	int counter =0;
	for(i = 0; ; i++)
	{
		if(string[i]!='\0')
			counter++;
		else
			break;
	}

	for(i = 0; i< counter; i++)
	{
		for(j =0; j <i; j++)
		{
			if(string[i]==string[j])
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}


int main(void)
{
#if 0
	char string[LEN];
	int i = 0;	
	printf("\nPlease enter a string:\n");
	scanf("%s",string);

	printf("\nIs this string has all unique characters?	");
	if( unique(string)==1)
		printf("YES!\n");
	else
		printf("NOT!\n");

	printf("\n");

	return 0;
#endif
	//char * null_address = NULL;
	char unique_str[100] = "abcdefgh;123";
	char non_unique_str[100] = "abcdeefgh1123";
#if 0
	if(unique(null_address))
	printf("null_string: test failed\n");
	else
	printf("null_string: test passed\n");
#endif
	if(unique(unique_str))
	printf("unique_str: test passed\n");
	else
	printf("unique_str: test failed\n");

	if(unique(non_unique_str))
	printf("non_unique_str: test failed\n");
	else
	printf("non_unique_str: test passed\n");

	return 0;
}




