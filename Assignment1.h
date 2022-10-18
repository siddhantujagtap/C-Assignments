/*
syntax - 
class CLASS_NAME { };
CLASS_NAME(){ }


Investment i1;
Investment i2(3000,5);
*/
#include<cmath>
class Investment{

public:
	//def
	Investment(){
		amount = 5000;
		period = 1;
	}
	//param
	Investment(double _amount,int _period){
		amount = _amount;
		period = _period;
	}


	//accessor - getter setter
	double getAmount(){
		return amount;
	}
	void setAmount(double _amount){
		amount = _amount;
	}

	int getPeriod(){
		return period;
	}
	void setPeriod(int _period){
		period = _period;
	}


	//
	double getInterest(bool ci){
		double rate;
		if(amount<10000){
			rate = 8;
		}else if(amount>=10000 && amount>50000){
			rate = 9;
		}else if(amount>=50000){
			rate = 10;
		}
		
		if(period>5){             // rate = rate > 5 ? rate+1 : rate;
			rate = rate+1;
		}	
		 double amt=0;
			

		if(ci){ 
			amt=amount*pow((1+rate/100),period);
			return amt-amount;

			 //compound int
		}else{

			return amount*period*rate/100; // simple int 
		}
		

	//si =amount*period*rate/100;
	//ci = a - a * pow(1,(r/100);
	
	}
	
	~Investment(){
	}
private:
	double amount;
	int period;

};
