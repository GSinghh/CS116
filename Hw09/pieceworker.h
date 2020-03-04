#include "worker.h"

class Pieceworker : public Worker //derived pieceworker class with base class of worker
{

	private:
		int piecesSold; //pieces sold as private variable

	public: //public member functions
		Pieceworker();
		Pieceworker(string, double, int);
		void setPiecesSold(int);
		int getPiecesSold() {return piecesSold;}
		double getCommissionPerPiece();
		double getCommission();
		double getTotalPay();
		
		
		


};
