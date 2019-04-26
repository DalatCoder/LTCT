
#define MAX 7

typedef int maTran[MAX][MAX];

void KhoiTao(maTran lich);
int TimThuTrongTuan(int m, int y);

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



