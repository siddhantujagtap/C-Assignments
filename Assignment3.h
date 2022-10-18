#include<string>

using namespace std;

class patient
{
public:
  patient(int id, string name,int bedType,int days) // Pamametric Const
  {
	 patientId= id;
	patientName= name;
      this-> bedType= bedType;
	noOfDays= days;
  }

  //getter setter
int getpatientId()
{return patientId;}	

string getpatientName()
{return patientName;}

int getbedType()
{return bedType;}

int getnoOFDays()
{return noOfDays;}




void setpatientId(int id)
{patientId=id;}	

void setpatientName(string name)
{patientName=name;}

void  setbedType(int bedType)
{this-> bedType=bedType;}

void setnoOFDays(int days)
{noOfDays=days;}



virtual float getBillAmount()
{
	int price;
	int amount;

	switch(bedType)
	{ case 1:
		price=500;
		break;
	case 2:
		price=350;
                break;
	case 3:
		price= 200;
		break;
	default:
		price=100;
	}	
     amount=noOfDays*price;
     return amount;
}

private:

	int patientId;
	string patientName;
	int bedType;
	int noOfDays;
};


class InHousePatient:public patient{

	public:
		
		  InHousePatient(int id, string name,int bedType,int days):patient (id,name,bedType,days){
		   discount=5;
		  }

		  int getDiscount(){return discount;}
		  void setDiscount(int _discount){discount =_discount;}

		  float getBillAmount(){
			int normalBill = patient::getBillAmount();
			if (normalBill>5000){
				return normalBill*(100-discount)/100;
				}
			return normalBill*0.95;

		}
private: 
	int discount;
};
