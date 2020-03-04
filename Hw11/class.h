#include <iostream>
#include <string>


class Item //Item class which holds the SKU, product description, and the quantity
{
	private:
		int SKU;
		string description;
		int quantity;
	
	public:
		Item(){SKU = 0; description = "None"; quantity = 0;}//default constructor
		Item(int SKUCode){SKU = SKUCode;} //paramterized constructor for SKU
		Item(int SKUCode,string d, int Q){SKU = SKUCode; description = d; quantity = Q;} //Paramterized constructor for all variables	
		
		void setSKU(int s){SKU = s;}
		void setDescription(string d){description = d;}//Set functions
		void setQuantity(int q){quantity = q;}
		
		int getSKU(){return SKU;}
		string getDescription(){return description;} //get functions
		int getQuantity(){return quantity;}
		
		friend ostream& operator<<(ostream & out, Item I) //overloaded ostream operator
		{
			out << "SKU: " << I.SKU << " , " << "Description: " << I.description << " [STOCK = " << I.quantity << "]";
			return out; 
		}
		
		bool operator<(Item other) //Overloaded less than operator
		{
			if (SKU < other.SKU)
			{
				return true;
			}
			else 
			{
				return false;
			}	
		}
		bool operator==(Item other) //overloaded equals to operator
		{
			if(SKU == other.SKU)
			{
				return true;			
			}
			else
			{
				return false;
			}
		}

};
