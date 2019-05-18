
#define MAX 100

void TaoMangTuDong(int *arr, int &n);
void XuatMang(int *arr, int n);

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


