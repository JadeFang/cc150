/*1.4 Write a method to replace all spaces in a string with'%20'. You may assume that the string has sufficient space at the end of the string to hold the additional characters, and that you are given the "true" length of the string. (Note: if implementing in Java, please use a character array so that you can perform this operation in place.)    
EXAMPLE
Input: "Mr John Smith       "
Output: "Mr%20Dohn%20Smith" */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define LEN 	100

int allspace(char *string)
{
	int i=0;
	int len= 0;
	len= strlen(string);
	int counter = 0;
	for(i=0; i<len;i++){
		if(string[i]==' ')
			counter++;
	}
	if(counter == len)
		return 1;
	else
		return 0;
}

void remove_tail_space(char *string)
{
	int length = 0;
	length = strlen(string);
	int i =0;
	
	//printf("length = %d\n", length);
	if(length !=0){
		
		if(allspace(string) ==1){
			string[0]=' ';
			string[1]='\0';
		}
		else{
			for(i=length-1; i>=0; i--)
			{
				if(string[i]!=' '){
					break;
				}
			}
	
			string[i+1]='\0';
		}
	}

}


void replace_space(char * string)
{

	int length = 0;
	int i =0, j = 0;
	char tmp[LEN*3];
	int counter = 0; //how many space in string?
	remove_tail_space(string);
	if(string == NULL)
		printf("string == NULL");
	else{	
		length = strlen(string);
		if(length ==1){
			tmp[0]='%';
			tmp[1]='2';
			tmp[2]='0';
			tmp[3]='\0';
		}
		else{

			for(i=0,j=0; i<length; i++,j++)
			{
				if(string[i]!=' ') 
					tmp[j]=string[i];
				else
				if(string[i]==' ')
				{
					counter++;
					tmp[j]='%';
					tmp[j+1]='2';
					tmp[j+2]='0';
					j +=2;
				}

			}
			tmp[length + counter*2]='\0'; 	
			//newlen = len + counter *2
		}
		strcpy(string, tmp);
		//printf("result =\n%s\n\n", tmp);

	}
}

int main(void)
{
#if 0
	char string[LEN]= "Mr John Smith   ";

	int length = 0;
	length = (int)strlen(string);
	printf("\n%s\n",string);
	
	replace_space(string);


	//printf("\n%s\n%d\n",string,length);
#endif

 	char example[18] = "Mr John Smith    "; 
	// 17 characters (including spaces)
        // + 1 character for null character
	char small[6] = "a b  ";
	char one_space[4] = "   ";
	char no_space[1] = "";
	char *null_str = NULL;

	replace_space(example);
	replace_space(small);
	replace_space(one_space);
	replace_space(no_space);
	//replace_space(null_str);
	

	if(strcmp(example, "Mr%20John%20Smith") == 0)
	printf("example passed\n");
	else
	printf("example failed\n");

	if(strcmp(small, "a%20b") == 0)
	printf("small passed\n");
	else
	printf("small failed\n");

	if(strcmp(one_space, "%20") == 0)
	printf("one_space passed\n");
	else
	printf("one_space failed\n");

	if(strcmp(no_space, "") == 0)
	printf("no_space passed\n");
	else
	printf("no_space failed\n");

	if(null_str == NULL)
	printf("null_str passed\n");
	else
	printf("null_str failed\n");
	


	return 0;
}
