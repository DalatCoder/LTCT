#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#define MAX 7

int dayOfWeek(int dd, int mm, int yy);
int dayOfMonth(int mm, int yy);
void displayDay(int n);
void displayMonth(int month);
void createMatrix(int startDay, int month, int year);
void init();

int calendar[MAX][MAX];

int main()
{
	int n = dayOfWeek(1, 04, 2019);
	init();
	createMatrix(n, 4, 2019);
	displayMonth(4);
	_getch();
	return 0;
}

int dayOfWeek(int dd, int mm, int yy)
{
	int t, x, k, w;

	t = yy - (14 - mm) / 12;
	x = t + t / 4 - t / 100 + t / 400;
	k = mm + 12 * ((14 - mm) / 12) - 2;
	w = (dd + x + (31 * k) / 12) % 7;

	return w;
}

void displayDay(int n)
{
	switch (n)
	{
	case 0:
		cout << "\nSun day.";
		break;
	case 1:
		cout << "\nMon day.";
		break;
	case 2:
		cout << "\nTuesday.";
		break;
	case 3:
		cout << "\nWednesday.";
		break;
	case 4:
		cout << "\nThursday.";
		break;
	case 5:
		cout << "\nFriday.";
		break;
	case 6:
		cout << "\nSaturday.";
		break;
	}
}

int dayOfMonth(int mm, int yy)
{
	int days;
	switch (mm)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		case 2:
			if (yy % 4 == 0 || (yy % 100 == 0 && yy % 400 == 0))
				days = 29;
			else
				days = 28;
			break;
	}

	return days;
}

void createMatrix(int startDay, int month, int year)
{
	int i, j, maxDays, dem;
	
	dem = 1;
	maxDays = dayOfMonth(month, year);

	// First row
	for (j = startDay; j < MAX; j++)
		calendar[0][j] = dem++;

	for (i = 1; i < MAX; i++)
		for (j = 0; j < MAX; j++)
		{
			dem++;
			if (dem > maxDays)
				break;
			else
				calendar[i][j] = dem;
		}
}

void displayMonth(int month)
{
	setiosflags(ios::left);

	cout << "\n -------------- " << month << " ----------------\n";
	cout << setw(7) << "Sun"
		<< setw(7) << "Mon"
		<< setw(7) << "Tue"
		<< setw(7) << "Wed"
		<< setw(7) << "Thu"
		<< setw(7) << "Fri"
		<< setw(7) << "Sat";

	cout << endl;
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			if (calendar[i][j] != 0)
				cout << setw(7) << calendar[i][j];
			else
				cout << setw(7) << " ";
		}
		cout << endl;
	}
}

void init()
{
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			calendar[i][j] = 0;
}
