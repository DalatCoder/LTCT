
#define		MAX		100
#define		TAB		'\t'

typedef		int		DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int  ChuaX(DaySo a, int n, int x);
int Tim_VTDT_X(DaySo a, int n, int x);
int TinhMax(DaySo a, int n);
int TimViTriMax_CuoiCung(DaySo a, int n);
int ChuaXChuaTruX(DaySo a, int n);

void NhapMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

/*
	Định nghĩa hàm kiểm tra mảng a có chứa phần tử x
	Input: 
		a - mảng một chiếu chứa tối đa MAX phần tử
		n - số phần tử thực sự được lưu trong mảng
		x - phần tử cần kiểm tra
	Output:
		1: nếu mảng a chứa phần tử x
		0: nếu mảng a không chứa phần tử x
*/
int ChuaX(DaySo a, int n, int x)
{
	int i, kq;
	kq = 0; 
	for (i = 0; i < n; i++)
		if (a[i] == x)
		{
			kq = 1;
			break;
		}
	return kq;
}

/*
	Định nghĩa hàm tìm vị trí đầu tiên x xuất hiện trong a
	Input: a, b, x
	Output:
		-1 : nếu a không chứa phần tử x
		i : a[i] đầu tiên trùng x
*/
int Tim_VTDT_X(DaySo a, int n, int x)
{
	int i,
		kq = -1;

	for (i = 0; i < n; i++)
		if (a[i] == x)
		{
			kq = i;
			break;
		}
	return kq;
}

/*
	Định nghĩa hàm kiểm tra mảng a có tăng?
	Input: a, n
	Output:
		1: nếu mảng a có thứ tự tăng
		0: nếu mảng a không có thứ tự tăng
*/
int KiemTraMangTang(DaySo a, int n)
{
	int i,
		kq = 1;

	for (i = 0; i < n-1; i++)
		if (a[i] > a[i + 1])
		{
			kq = 0;
			break;
		}
	return kq;
}

/*
	Định nghĩa hàm tìm Max
	Input: a, n
	Output:
		Giá trị lớn nhất của a
*/
int TinhMax(DaySo a, int n)
{
	int i,
		max;
	max = a[0];

	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

/*
	Định nghĩa hàm tìm vị trí xuất hiện cuối cùng của giá trị max
	Input: a, n
	Output:
		Vị trí cuối cùng tìm thấy giá trị lớn nhất
*/
int TimViTriMax_CuoiCung(DaySo a, int n)
{
	int vt = 0,
		max = a[vt];
	int i;

	for (i = 1; i < n; i++)
		if (a[i] >= max)
		{
			vt = i;
			max = a[vt];
		}
	return vt;
}

/*
	Định nghĩa hàm kiểm tra phát biểu nếu a chứa x thì cũng chứa -x
	Input: a, n
	Output:
		1: nếu đúng
		0: nếu sai
*/
int ChuaXChuaTruX(DaySo a, int n)
{
	int i,
		kq,
		x,
		kqTam;
	kq = 1;
	for (i = 0; i < n; i++)
	{
		x = -a[i];
		kqTam = ChuaX(a, n, x);
		if (kqTam == 0)
		{
			kq = 0;
			break;
		}
	}
	return kq;
}

void NhapTuDong(DaySo a, int n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % MAX;
	}
}
