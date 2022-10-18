#include<cstdio>
#include<iostream>
#include<string>
#include"Assignment3.h"
using namespace std;

	float getHospitalExp(patient &p){
		float exp;
		exp=p.getBillAmount();
		return exp;
}
	int main (void){
		//Declare Variables
		int id,bedType,days,patientType;
		float bill;
		string name;

		// Get Patient Data
		cout<<"Enter - Patient Id | Patient Name | Bed Type | No Of Days."<<endl;
		cin>>id>>name>>bedType>>days;
                cout<<"Press : \n 1 - Ordinary Patient \n 2 - Hospital Employee"<<endl;
		cin>>patientType;


		//Creating an Object
		if (patientType==1){
			patient p1(id,name,bedType,days);
			bill = p1.getBillAmount();
			cout<<"Bill for"<<p1.getpatientName()<<"patient :"<<bill<<endl;
			cout<<"Bill with GST :"<<getHospitalExp(p1)*1.05<<endl;
		}
			else {
			InHousePatient p1 (id,name,bedType,days);
			int _discount;
			cout<<"Enter discount :";
			cin>>_discount;
			p1.setDiscount(_discount);
			bill = p1.getBillAmount();
			cout<<"Bill for"<<p1.getpatientName()<<"patient :"<<bill<<endl;
			}
	}
