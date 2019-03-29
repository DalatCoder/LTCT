#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	
	_getch();
	return 0;
}

double daySoA(unsigned int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 1 / i;
	}
	return sum;
}

double daySoB(unsigned int n)
{

}
