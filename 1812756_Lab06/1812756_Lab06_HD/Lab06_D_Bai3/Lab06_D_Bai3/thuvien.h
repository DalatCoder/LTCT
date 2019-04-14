#define MAX 10

void XuatMaTran(int a[MAX][MAX], int n);

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

