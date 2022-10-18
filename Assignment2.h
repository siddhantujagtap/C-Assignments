#include<stdio.h>


class Money
{
public: 
	Money(int r, int p)// parameterized Constructor
	{

		rupees=r + p/100;
		paise= p % 100;
	}

	Money()                  //Default Constructor

	{
		rupees=200;
		paise=50;
	}

      Money (const Money& source)  // copy constructor

        {
		rupees=source.rupees;
		paise= source.paise;
	}


	void print()const
	{
		printf("Total money : %d.%d\n",rupees,paise);
	}
	void prints()const
	
	{
		printf("Difference between money : %d.%d\n",rupees,paise);
	}
	//GetSet Accessors
	void Setrupees(int r)
	{ 	rupees=r;
	
	}
        
	int Getrupees()
	{
		return rupees;
	}

	void Setpaise(int p)
	{ 	paise=p;
	
	}
        
	int Getpaise()
	{
		return paise;
	}
       
	//+opertor
	Money operator+(const Money& rhs)
	{
		return Money(rupees+rhs.rupees,paise+rhs.paise);
	}


	//-opertor
	Money operator-(const Money& rhs)
	{
		return Money(rupees-rhs.rupees,paise-rhs.paise);
	}

	//destructor
	~Money() 
	{
	}
private:
	int rupees;
	int paise;
};
