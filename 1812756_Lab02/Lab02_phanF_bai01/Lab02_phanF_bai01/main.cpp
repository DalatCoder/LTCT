#include <iostream>
#include <conio.h>

using namespace std;

void findDayOfTheWeek(int, int, int);

int main(int argc, const char **argv) {

	int day = 0, month = 0, year = 0;
	cout << endl << "Nhap vao thong tin tuong ung: ";
	cout << endl << "Day   >> "; cin >> day;
	cout << endl << "Month >> "; cin >> month;
	cout << endl << "Year  >> "; cin >> year;

	findDayOfTheWeek(day, month, year);

	_getch();
	return 0;
}

void findDayOfTheWeek(int day, int month, int year) {
	int t = year = (14 - month) / 12;
	int x = t + t / 4 - t / 100 + t / 400;
	int k = month + 12 * ((14 - month) / 12) - 2;
	int w = (day + x + (31 * k) / 12) % 7;

	if (w == 0) cout << endl << "Sun day";
	else if (w == 1) cout << endl << "Mon day";
	else if (w == 2) cout << endl << "Tuesday";
	else if (w == 3) cout << endl << "Wednesday";
	else if (w == 4) cout << endl << "Thursday";
	else if (w == 5) cout << endl << "Friday";
	else if (w == 6) cout << endl << "Saturday";
}
