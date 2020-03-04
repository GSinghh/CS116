class BankAccount //Class function which holds the 
{
	private:
		string Name; //attributes
		int accountNum;
		int PIN;
		double Balance;
	public:
		BankAccount(); //access roads
		BankAccount(string, int, int, double);
		
		void setName(string);
		string getName();
		
		void setAccountNum(int);		
		int getAccountNum();
		
		double getBalance();
				
		void setPIN(int);
		bool checkPIN(int);
		
		void deposit(double);

		void withdrawl(double);
		

};
