
#include "date.h"

class Reservations
{
	private:
		string Name;
		Date checkIn;
		int nDays;
		double ppDay;

	public:
		Reservations();
		Reservations(string,Date,int,double);
		
		void setName(string);
		string getName();
	
		void setNumOfDays(int);
		int getNumOfDays();

		void setPricePerDay(double);
		double getPricePerDay();

		void setCheckIn(int, int, int);
		Date getCheckIn();
		
		Date getCheckOut();
		double getTotalPrice();

		void displayReservation();

		
};
