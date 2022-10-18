#include"Assignment2.h"
#include<cstdio>

int main(void)
{
int r,p;

	printf("Enter the first Ammount in rupees and paise:\n");
	scanf("%d%d",&r,&p);
        Money a(r,p);

	printf("Enter the Second Amount in rupees and paise:\n");
	scanf("%d%d",&r,&p);
	Money b(r,p);
         
	Money m(a);

	Money c=a+b;   //a.operator+(b)
	Money d=a-b;  //a.operator-(b)
      
	c.print();
	d.prints();
}

