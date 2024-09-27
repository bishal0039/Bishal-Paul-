//Program Name- String Concatenation
//program date=27/09/2024
#include<stdio.h>
#include<string.h>
main()
{
		char f_name[20],c_name[15];
		printf("Enter first string:\n");
		scanf("%s",f_name);
		printf("Enter second string:\n");
		scanf("%s",c_name);	
		strcat(f_name,c_name);
		printf(" the first name %s\n",f_name);
}
