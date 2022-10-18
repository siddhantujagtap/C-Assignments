#include<iostream>

#include<string>
#include<cstdio>
#include"Assignment5.h"

using namespace std;

void showEMI(Loan* obj){
	float emi;
	emi =obj->getEMI();

	//casting
	auto tx = dynamic_cast<Taxable*>(obj);
	if(tx){
		emi = tx->getTax();
	}else{
		auto di = dynamic_cast<Discountable*>(obj);
		emi = di->getDiscount();
	}
	cout<<"EMI for Personal Loan :"<<emi<<endl;
}


int main(void){
	double principle;
	float period,emi;
	int option;

	cout<<"Enter Principle and Period :";
	cin>>principle>>period;

	cout<<"Enter \n 1 - Personal Loan\n 2 - Home Loan "<<endl;
	cin>>option;

	if(option==1){
		PersonalLoan l(principle,period);
		showEMI(&l);

	}else if (option==2){
		HomeLoan l(principle,period);
		showEMI(&l);
	}else{
		cout<<"Invalid Option Selected..."<<endl;
	}
}	
