
#define MAX 100

void TaoMangTuDong(int *arr, int &n);
void XuatMang(int *arr, int n);
int TinhMax(int *arr, int n);
int TinhTong(int *arr, int n);

void TaoMangTuDong(int* arr, int &n)
{
	do
	{
		cout << "\nNhap vao so phan tu cua mang: ";
		cin >> n;
	} while (n <= 0 || n >= MAX);

	for (int i = 0; i < n; i++)
		arr[i] = rand() % 10;
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

