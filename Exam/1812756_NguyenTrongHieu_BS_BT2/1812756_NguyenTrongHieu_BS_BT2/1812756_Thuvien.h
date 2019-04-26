
#define MAX 7

typedef int maTran[MAX][MAX];

// Khoi tao tat ca phan tu cua ma tran ban dau bang 0
void KhoiTao(maTran lich)
{
	int i, j;
	for (i = 0; i < MAX; i++)
		for (j = 0; j < MAX; j++)
			lich[i][j] = 0;
}




