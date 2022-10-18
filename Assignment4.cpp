#include<iostream>
#include<cstdio>
#include"Assignment4.h"


int main (void)
{
	double principle;
	float rate,emi,period;

	cout<<"Enter the Principle Amount and Rate of Interest:";
	cin>>principle>>period;

	PersonalLoan l1(principle,period);
	l1.setPrinciple(principle);
	l1.setPeriod(period);
	emi= l1.getEMI();
	cout<<"EMI for Personal loan is:"<<emi<<endl;

       HomeLoan l2(principle,period);
       l2.setPrinciple(principle);
       l2. setPeriod(period);
       emi= l2.getEMI();
       cout<<"EMI for Home Loan is:"<<emi<<endl;


}
