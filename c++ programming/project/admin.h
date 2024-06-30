#include "employee.h"
class Admin:public Employee	
{
	double allowance;
	public:
		Admin();
		Admin(int ,const char* ,double ,double );
		void setAllow(double );
		double getAllow();
		void display();
		double calSal();
};
