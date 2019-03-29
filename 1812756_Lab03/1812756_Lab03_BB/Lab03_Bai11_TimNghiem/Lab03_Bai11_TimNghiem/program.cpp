// 3a - 2b + 4c + 5d - e = 30
// 0 <= a, b, c, d, e <= 10

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	for (int a = 0; a <= 10; a++)
		for (int b = 0; b <= 10; b++)
			for (int c = 0; c <= 10; c++)
				for (int d = 0; d <= 10; d++)
					for (int e = 0; e <= 10; e++)
						if ((3 * a - 2 * b + 4 * c + 5 * d - e) == 30)
							cout << "\na = " << a << ", b = " << b
							<< ", c = " << c << ", d = " << d << ", e = " << e;
	_getch();
	return 0;
}


