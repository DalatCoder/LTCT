#define MAX 10

void XuatMaTran(int a[MAX][MAX], int n);
void Tao_MaTran_XoanOc(int a[MAX][MAX], int n);

void XuatMaTran(int a[MAX][MAX], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
	}
}

void Tao_MaTran_XoanOc(int a[MAX][MAX], int n)
{
	int value, hangTren, hangDuoi, cotTrai, cotPhai;
	int i, j;

	hangTren = 0;
	cotPhai = n - 1;
	hangDuoi = n - 1;
	cotTrai = 0;
	value = 1;

	while (value <= n * n)
	{
		for (j = cotTrai; (j <= cotPhai) && (value <= n*n); j++)
		{
			a[hangTren][j] = value;
			value++;
		}
		if (value > n*n)
			break;
		hangTren++;

		for (i = hangTren; (i <= hangDuoi) && (value <= n*n); i++)
		{
			a[i][cotPhai] = value;
			value++;
		}
		if (value > n*n)
			break;
		cotPhai--;

		for (j = cotPhai; (j >= cotTrai) && (value <= n*n); j--)
		{
			a[hangDuoi][j] = value;
			value++;
		}
		if (value > n*n)
			break;
		hangDuoi--;

		for (i = hangDuoi; (i >= hangTren) && (value <= n*n); i--)
		{
			a[i][cotTrai] = value;
			value++;
		}
		if (value > n*n)
			break;
		cotTrai++;
	}
}


