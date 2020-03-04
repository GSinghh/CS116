class Order : public LinkedList<InvoiceItem>
{
	private:
		string Name;
		int orderNumber;

	public:
		void setName(string N){Name = N;}
		string getName(){return Name;}
	
		void setOrderNumber(int numb){orderNumber = numb;}
		int getOrderNumber(){return orderNumber;}
		void displayCart() //displays everything in the cart
		{
			ListNode *nodePtr; 
			nodePtr = head;
			cout << "YOUR CART" << endl;
			cout << setw(5) << left << "#" << setw(6) <<  left << "QTY" << setw(16) << left << "DESC" << "Total" << endl;
			for(int i = 1; nodePtr != nullptr; i++)
			{	
				nodePtr = nodePtr->next;
				cout << setw(5) << left << i << setw(6) << left << get(i).getQuantity() << setw(16) << left << get(i).getDescription() << get(i).getPrice() << endl;
			}	
		}
		void printInvoice() //Prints invoice
		{
			ListNode * nodePtr;
			nodePtr = head;
			static int invoiceNum = 1000;
			int sum = 0;
			
			cout << "INVOICE" << endl;
			cout << "Order Number: " << invoiceNum << endl;
			cout << "Customer: " << Name << endl;
		
			cout << "QTY      Desc        Each     ItemTotal" << endl;
			for (int i = 1; nodePtr != nullptr; i++)
			{
				nodePtr = nodePtr->next;
				cout << left << setw(5) << get(i).getQuantity() << setw(17) << left << get(i).getDescription() << setw(10) << left << get(i).getPrice() << setw(10) << get(i).getTotal() << endl;
				sum += get(i).getTotal();
				
			}
			cout << "Total Due: " << sum << endl;
			invoiceNum++;
		}
};
