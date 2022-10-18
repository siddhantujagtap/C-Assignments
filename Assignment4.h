#include<iostream>

using namespace std;
 
	class Loan{
		
		public:
			Loan (double _principle,float _period){

		        cout<<"parametric constructor"<<endl;
			principle = _principle;
			period = _period;
			}

			// getter setter
			double getPrinciple(){return principle;}
			float getPeriod(){return period;}
			

			void setPrinciple(double _principle){principle= _principle;}
			void setPeriod(float _period){period= _period;}
							
			virtual float getRate() = 0;
			
			float getEMI(){
				return principle*(1+getRate()*period/100)/(12*period);
			}


		private:
			double principle;
			float period;

};
		class PersonalLoan:public Loan{

			public: 
				PersonalLoan(double _principle,float _period):Loan(_principle,_period){
				} 
			
			// return_type fun_name(param1,param1){
			//	LOGIC
			//	return --;
			// }
			float getRate(){
				if (getPrinciple()<= 500000){
					return 15;
				}
			
				else{
					return 16;
				}

						}
                     };

class HomeLoan:public Loan{
	public:
		HomeLoan(double _principle,float _period):Loan(_principle,_period){}
			
			float getRate(){
				if (getPrinciple()<=2000000){
					return 10;}
				else {
					return 11;}
			}
		};
		
						


