//1-2: Write code to reverse a C-Style String. (C-String means that “abcd” is represented as five characters, including the null character.)


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LEN 	1000



void reverse1(char *str){	//solution form book
	char* end = str;
	char tmp;
	if (str){
		while(*end){	/*Find the end of the string*/
			++end;		
		}		
		-- end; /*set one char back, since last char is null*/
		/*swap characters form start of string with the end of the 			  string, until the pointers meet in middle.*/
		while(str < end){
			tmp = *str;
			*str++ = *end;
			*end--=tmp;
		}
	}
}




void reverse(char * string)
{
	int i =0;
	int length = 0;
	//caculate length of the string


	for(i=0;;i++)
		if(string[i] == '\0')
			break;
	length = i;


	printf("length = %d\n", length);

	char string1[LEN];
	for(i=0; i<=length; i++)
		string1[i]=string[length-i];

	string[length]='\0';
	
	printf("\nReverse this String\n");
	for(i=0; i<=length; i++)
		printf("%c", string1[i]);
}

int main(void)
{
	printf("\nReverse a C-Style String\n");
	char string[LEN];
	
	printf("Please enter a string:\n");

	scanf("%s", string);

	reverse1(string);	
	reverse(string); // reverse twice!


	printf("\n");
	return 0;
}
