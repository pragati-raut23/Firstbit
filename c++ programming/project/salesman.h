#include "employee.h"
class SalesMan:public Employee	//step 1
{
	int target;
	double incentive;
	public:
		SalesMan();
		SalesMan(int ,const char* ,double ,int ,int );
		void setTarget(int );
		void setIncentive(double );
		int getTarget();
		double getIncentive()	;
		void display();
		double calSal();
};
