//Program Name- String Copy
//program date=27/09/2024
#include<stdio.h>
#include<string.h>
main()
{
		char f_name[20],c_name[15];
		printf("Enter first string:\n");
		scanf("%s",f_name);
		
		strcpy(c_name,f_name);
		printf("the last name is %s",c_name);
}
