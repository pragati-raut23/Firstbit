#include "time.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Time t1(10,20,30);
	Time t2(t1);
	t1.display();
	t2.display();
	return 0;
}
