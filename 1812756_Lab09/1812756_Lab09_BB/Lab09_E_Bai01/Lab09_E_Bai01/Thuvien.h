
#define MAX 100

void TaoMangTuDong(int *arr, int &n);
void XuatMang(int *arr, int n);
int TinhMax(int *arr, int n);
int TinhTong(int *arr, int n);
int DemSoDuong(int *arr, int n);
int *TaoMangSoDuong(int *arr, int n);
int Dem_X(int *arr, int n, char x);

void TaoMangTuDong(int* arr, int &n)
{
	do
	{
		cout << "\nNhap vao so phan tu cua mang: ";
		cin >> n;
	} while (n <= 0 || n >= MAX);

	for (int i = 0; i < n; i++)
		arr[i] = (1 - 10) + rand() % 20;
}

void XuatMang(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}

int TinhMax(int *arr, int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
		max = (max < arr[i]) ? arr[i] : max;

	return max;
}

int TinhTong(int *arr, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i];

	return  sum;
}

int DemSoDuong(int *arr, int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		(arr[i] > 0) ? dem++ : dem;

	return dem;
}

int *TaoMangSoDuong(int *arr, int n)
{
	int *newArr;
	int m, j; 

	m = DemSoDuong(arr, n);
	j = 0;

	newArr = new int[m];
	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			newArr[j++] = arr[i];

	return newArr;
}

int Dem_X(int *arr, int n, char x)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			dem++;

	return dem;
}
