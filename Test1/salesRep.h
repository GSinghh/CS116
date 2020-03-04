class SalesRep //class which stores Name and sales for products 
{
private: //private variables
	string Name;
	double productOne;
	double productTwo;

public:
	//public member functions
	SalesRep();
	SalesRep(string, double, double);
	
	void setName(string);
	string getName();
	
	void setProductOne(double);
	double getProductOne();

	void setProductTwo(double);
	double getProductTwo();

	double getTotalSales();
	double getCommission();

	
	

};
