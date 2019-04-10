
/*
	Phan dinh nghia hang so
*/

#define MAX 100
#define TAB '\t'

/*
	Dinh nghia 1 bien moi DaySo 
*/

typedef int DaySo[MAX];

/*
	Phan khai bao nguyen mau cac ham
*/

void XuatDaySo(DaySo a, int n);
int KiemTraSNT(int n);
int ViTri_SNT_CuoiCung(DaySo a, int n);
int KiemTra3ChuSo(int n);
int DemSoCo3ChuSo(DaySo a, int n);
void HoanVi(int &a, int &b);
void SapXep(DaySo a, int n);
void ChenPhanTu(DaySo a, int &n, int x, int vt);
void XoaPhanTu(DaySo a, int &n, int vt);

/*
	Phan dinh nghia cac ham 
*/

void XuatDaySo(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

int KiemTraSNT(int n)
{
	// 0, 1 khong phai la so nguyen to
	if (n < 2)
		return 0;

	int kq = 1, i;
	int mid = (int)sqrt((double)n);

	for (i = 2; i <= mid; i++)
	{
		if (n % i == 0)
		{
			kq = 0;
			break;
		}
	}

	return kq;
}

/*
	Ham tra ve vi tri cua so nguyen to cuoi cung trong mang a
	Input:
		n : so luong phan tu trong day a
		a : day so a
	Output:
		-1 : khong tim thay vi tri cua so nguyen to
		vt : vi tri cua so nguyen to cuoi cung trong day so a 
*/
int ViTri_SNT_CuoiCung(DaySo a, int n)
{
	int vt = -1;

	for (int i = 0; i < n; i++)
	{
		if (KiemTraSNT(a[i]))
		{
			vt = i;
		}
	}

	return vt;
}

int KiemTra3ChuSo(int n)
{
	int dem = 0;
	while (n != 0)
	{
		n /= 10;
		dem++;
	}

	return (dem == 3);
}

/*
	Ham dem so luong so co 3 chu so trong day so a
	Input: 
		a : day so nguyen
		n : so luong phan tu
	Output:
		dem: so luong so co 3 chu so
*/
int DemSoCo3ChuSo(DaySo a, int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
	{
		if (KiemTra3ChuSo(a[i]))
		{
			dem++;
		}
	}

	return dem;
}

void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}

/*
	Dinh nghia ham sap cac so duong tang dan, cac so khac giu nguyen thu tu
*/
void SapXep(DaySo a, int n)
{
	int i, mc;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			mc = (a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (mc)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

/*
	Dinh nghia ham chen phan tu x vao mang tai vi tri cho truoc
	Input:
		a : day so nguyen duong
		n : so luong phan tu
		x : phan tu can chen
		vt : vi tri can chen
	Output: khong
*/
void ChenPhanTu(DaySo a, int &n, int x, int vt)
{
	int i;
	for (i = n; i > vt; i--)
		a[i] = a[i - 1];

	a[vt] = x;
	n = n + 1; // Tang kich thuoc cua mang len 1 phan tu
}

/*
	Dinh nghia ham xoa 1 phan tu tai vi tri cho truoc
	Input:
		a : day so nguyen duong
		n : so luong phan tu trong day so
		vt : vi tri can xoa
*/
void XoaPhanTu(DaySo a, int &n, int vt)
{
	int i;
	for (i = vt; i < n - 1; i++)
		a[i] = a[i + 1];
	n = n - 1; // Giam kich thuoc cua mang di 1 phan tu
}



