//Program Name- String length
//program date=27/09/2024
#include<stdio.h>
#include<string.h>
main()
{
	char f_name[20];
	int x;
	printf("Enter the string:\n");
	scanf("%s",f_name);
	x=strlen(f_name);
	printf("String length is %d",x);
}
