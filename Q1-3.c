// Given two string, write a method to decide if one is a permutation of the other.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN	100


void sort_string(char* str)
{
	int length = 0;	
	length = strlen(str);
	int i, j;
	char t;
	//bubble sort
	for(i = 0; i<length; i++){
		for(j = 0; j<length-i-1; j++){
			if(str[j]>str[j+1]){
				t = str[j];
				str[j] = str[j+1];
				str[j+1] = t;
			}
		}
	}
}


int is_permutation(char* str1, char* str2)
{
	if(str1 == NULL || str2 == NULL) //****
		return 0;
	sort_string(str1);
	sort_string(str2);
	//printf("\n %s  %s\n", str1, str2);
	//printf("\n %d  %d\n", (int)strflen(str1), (int)strlen(str2));
	if(strlen(str1)!=strlen(str2)){
		return 0;	
	}
	else{
		if(strcmp(str1,str2)==0) // str1 == str2
			return 1;
		else
			return 0;
	}


}


int main(void)
{
#if 0	
	char str1[LEN], str2[LEN];
	char c;

	printf("Please enter string(1) and string(2):\n");
	scanf("%s %s", str1, str2);
	printf("\nstring1 = %s\nstring2= %s\n",str1, str2);
/*
	char tmp1[LEN],tmp2[LEN];
	tmp1 = str1;
	tmp2 = str2;
*/
	printf("\nPermutation?\n");

	if(is_permutation(str1, str2)==1)
		printf("YES!\n\n");
	else
		printf("NOT!\n\n");
#endif

	char str[10] = "abcdefg";
	char str_perm[10] = "bacedgf";
	char str_not_perm[10] = "gffaecd";
	char str_wrong_length[10] = "ab";
	char *str_null = NULL;

	if(is_permutation(str, str))
	printf("str, str passed\n");
	else
	printf("str, str failed\n");

	if(is_permutation(str, str_perm))
	printf("str, str_perm passed\n");
	else
	printf("str, str_perm failed\n");

	if(is_permutation(str, str_not_perm))
	printf("str, str_not_perm failed\n");
	else
	printf("str, str_not_perm passed\n");

	if(is_permutation(str, str_wrong_length))
	printf("str, str_wrong_length failed\n");
	else
	printf("str, str_wrong_length passed\n");

	if(is_permutation(str, str_null))
	printf("str, str_null failed\n");
	else
	printf("str, str_null passed\n");


	return 0;
}
