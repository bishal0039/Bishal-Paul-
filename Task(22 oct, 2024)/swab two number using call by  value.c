#include<stdio.h>

 main()
{
int x=4,y=7;

printf("Before swap: %d,%d\n",x,y);
void swap(int x,int y);

printf("After swap :%d,%d",x,y); 
}

void swap(int a,int b)
{
int temp=a;
a=b;
b=temp;

}
