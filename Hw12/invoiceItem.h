#include "Product.h"

class InvoiceItem : public Product
{
	private:
		int quantity;
	public:
		InvoiceItem(){quantity = 0;}
		InvoiceItem(string D, int P, int Q){description = D; price = P; quantity = Q;}
		void setQuantity(int Q){quantity = Q;}
		int getQuantity(){return quantity;}
		int getTotal(){return quantity * price;}
		friend ostream& operator<<(ostream& out, InvoiceItem i)
		{
			out << i.quantity << "   " << i.description << "   " << i.price;
			return out;
		}
		


};
