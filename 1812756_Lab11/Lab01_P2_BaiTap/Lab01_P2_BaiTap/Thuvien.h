
#define MAX 100

struct Date
{
	int ngay;
	int thang;
	int nam;
};

struct NhanVien
{
	char maNV[7];
	char ho[10];
	char tenLot[10];
	char ten[10];
	Date ntn;
	char diaChi[20];
	double luong;
};

void file_Array(char *filename, int arr[MAX], int &n);
void display_Array(int arr[MAX], int n);

void file_Array(char *filename, int arr[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo tep.";
		exit(-1);
	}
	in >> n;
	for (int i = 0; i < n; i++)
		in >> arr[i];
	in.close();
}

void display_Array(int arr[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\t';
}





