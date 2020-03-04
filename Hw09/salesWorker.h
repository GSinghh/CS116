#include "worker.h"

class SalesWorker : public Worker //Sales worker class which is derived from worker
{

	private:
		int monthlySales; //monthly sales as private variable

	public: //public member functions
		SalesWorker();
		SalesWorker(string,double,int);
		void setMonthlySales(int);
		int getMonthlySales(){return monthlySales;}
		double getCommissionPercentage();
		double getCommission();
		double getTotalPay();
		
				

};
