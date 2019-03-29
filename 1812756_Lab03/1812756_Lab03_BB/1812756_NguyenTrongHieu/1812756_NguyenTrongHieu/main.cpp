
#include <iostream>
#include <conio.h>

using namespace std;

double tinhBMI(double w, double h);
void xuatTrangThaiBMI(double BMI);

int main(int argc, const char **argv) {

	double w, h, BMI;

	cout << "\nNhap vao can nang (kg) : ";
	cin >> w;

	cout << "\nNhap vao chieu cao (m) : ";
	cin >> h;

	BMI = tinhBMI(w, h);

	xuatTrangThaiBMI(BMI);

	_getch();
	return 0;
}

/*
	Hàm tính chỉ số BMI
	Input:
		- w: cân nặng (kg)
		- h: chiều cao (m)
	Output:
		- Chỉ số BMI
*/
double tinhBMI(double w, double h) {

	double BMI = w / (h * h);
	return BMI;
}

/*
	Hàm xuất trạng thái BMI
	Input:
		- Chỉ số BMI
	Output:
		- Không. Xuất ra màn hình thể trạng tương ứng với chỉ số BMI
*/
void xuatTrangThaiBMI(double BMI) {
	
	if (BMI < 15)
		cout << "\nDoi khat";
	else if (BMI < 17.5)
		cout << "\nBieng an";
	else if (BMI < 18.5)
		cout << "\nThieu can";
	else if (BMI < 25)
		cout << "\nLy tuong";
	else if (BMI < 30)
		cout << "\nThua can";
	else if (BMI < 40)
		cout << "\nBeo phi";
}


