
#define PRECISION 0.000001

int TinhGiaiThua(int n)
{
	if (n < 2)
		return 1;
	else
		return n * TinhGiaiThua(n - 1);
}

int TinhSoMu(int base, int exponent)
{
	int kq = 1;

	for (int i = 1; i <= exponent; i++)
		kq *= base;

	return kq;
}

double TinhE(int deg)
{
	double Ex_E, current_E = 0;
	int dem = 0;

	do
	{
		Ex_E = current_E;
		current_E += (double)TinhSoMu(deg, dem) / (double)TinhGiaiThua(dem);
		dem++;
	} while (current_E - Ex_E >= PRECISION);

	return current_E;
}

double TriTuyetDoi(double x)
{
	if (x < 0)
		return -x;
	else
		return x;
}

double TinhSin(int x)
{
	double Ex_sin, Current_sin = 0;
	int count = 1, dem = 1;

	do
	{
		Ex_sin = Current_sin;

		if (count % 2 == 0)
			Current_sin -= ((double)TinhSoMu(x, dem) / (double)TinhGiaiThua(dem));
		else
			Current_sin += ((double)TinhSoMu(x, dem) / (double)TinhGiaiThua(dem));
		count += 1;
		dem += 2;

	} while (TriTuyetDoi(Current_sin - Ex_sin) > PRECISION);

	return Current_sin;
}

double TinhCos(int x)
{

	double Ex_Cos, Current_cos = 0;

	int mu = 0;
	do
	{
		Ex_Cos = Current_cos;
		if (mu % 2 == 0)
			Current_cos += ((double)TinhSoMu(x, mu) / (double)TinhGiaiThua(mu));
		else
			Current_cos -= ((double)TinhSoMu(x, mu) / (double)TinhGiaiThua(mu));
		mu += 2;
	} while (TriTuyetDoi(Current_cos - Ex_Cos) > PRECISION);

	return Current_cos;

}
