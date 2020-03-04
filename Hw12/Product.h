class Product
{
	protected:
		int price;
		string description;
		
	public:
		Product(){price = 0; description = "none";}
		Product(int P, string D){price = P; description = D;}
		void setPrice(int P){price = P;}
		int getPrice(){return price;}
	
		void setDescription(string D){description = D;}
		string getDescription(){return description;}
};
