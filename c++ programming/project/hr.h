#include "employee.h"
class HrManager:public Employee	//step 1
{
	double commission;
	public:
	HrManager();
	HrManager(int ,const char* ,double ,double );
	void setComm(double );
	double getComm();
	void display();
	double calSal()	;
};
