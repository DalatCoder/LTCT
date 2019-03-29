
#define		PI		3.1415926

double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double dai, double rong);
double DienTichTamGiac(double a, double b, double c);
double DienTichHinhTron(double banKinh);

/*
	Dinh nghia ham tinh dien tich hinh vuong
	Input: canh = do dai canh cua hinh vuong
	Output: dien tich hinh vuong
*/
double DienTichHinhVuong(double canh)
{
	return canh * canh;
}

/*
	Dinh nghia ham tinh dien tich hinh chu nhat
	Input: dai = kich thuoc chieu dai cua HCN
			rong = kich thuoc chieu rong cua HCN
	Output: Dien tich hinh chu nhat
*/
double DienTichHinhChuNhat(double dai, double rong)
{
	return dai * rong;
}

/*
	Dinh nghia ham tinh dien tich tam giac
	Input
		a: do dai canh a
		b: do dai canh b
		c: do dai canh c
	Output:
		Dien tich hinh tam giac
*/
double DienTichTamGiac(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

/*
	Dinh nghia ham tinh dien tich hinh tron
	Input: banKinh = do dai ban kinh hinh tron
	Output: dien tich hinh tron
*/
double DienTichHinhTron(double banKinh)
{
	return PI * banKinh * banKinh;
}

