#include<cstdio>
#include"Assignment1.h"

int main (void){

	double amount;
	int rate;
	int period;
	double interest;
	int getOption;

	printf("Enter the amount and period\n");
	scanf("%lf%d",&amount,&period);

	Investment i(amount,period);

	puts("Press:\n 1-Simple Interest \n 2-Compound Interest\n");
	scanf("%d",&getOption);
	
	if(getOption==1)
	{ 
		interest=i.getInterest(false);
	}
	
	else if(getOption==2)
	{	
		interest=i.getInterest(true);
	}

	printf("when invested amount is: %lf then for period: %d\n the interest is %lf\n", i.getAmount(),i.getPeriod(),interest);

	return 0;

		}	

