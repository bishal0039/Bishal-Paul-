//Program Name- String Compare
//program date=27/09/2024
#include<stdio.h>
#include<string.h>
main()
{
		char f_name[25],c_name[25];
		int x;
		printf("Enter first string:\n");
		scanf("%s",f_name);
		printf("Enter second string:\n");
		scanf("%s",c_name);	
		x=strcmp(f_name,c_name);
		if(x==0)
		printf("Strings are same");
		else
		printf("Strings are not same");
		
}
