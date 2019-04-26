
#define MAX 7

typedef int maTran[MAX][MAX];

void KhoiTao(maTran lich);
int TimThuTrongTuan(int m, int y);
int NamNhuan(int y);
int SoNgayTrongThang(int m, int y);

// Khoi tao tat ca phan tu cua ma tran ban dau bang 0
void KhoiTao(maTran lich)
{
	int i, j;
	for (i = 0; i < MAX; i++)
		for (j = 0; j < MAX; j++)
			lich[i][j] = 0;
}

int TimThuTrongTuan(int m, int y)
{
	int t, x, k, w;
	t = y - (14 - m) / 12;
	x = t + t / 4 - t / 100 + t / 400;
	k = m + 12 * ((14 - m) / 12) - 2;
	w = (1 + x + (31 * k) / 12) % 7;
	return w;
}

int NamNhuan(int y)
{
	int kq = 0;

	if (kq % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		kq = 1;

	return kq;
}

int SoNgayTrongThang(int m, int y)
{
	int soNgay;

	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		soNgay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		soNgay = 30;
		break;
	case 2:
		if (NamNhuan(y))
			soNgay = 29;
		else
			soNgay = 28;
		break;
	}
}


