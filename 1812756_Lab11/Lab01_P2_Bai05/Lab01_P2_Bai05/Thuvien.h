
#define MAX 100

void Mat_File(char *filename, int a[MAX][MAX], int n);
void File_Display(char *filename);
void Matrix_Display(int a[MAX][MAX], int n);

void Mat_File(char *filename, int a[MAX][MAX], int n)
{
	ofstream out(filename);
	if (!out)
	{
		cout << "\nLoi mo file.";
		exit(-1);
	}
	out << n;
	int i, j;
	for (i = 0; i < n; i++)
	{
		out << endl;
		for (j = 0; j < n; j++)
			out << a[i][j] << '\t'; 
	}
	out.close();
	cout << "\nLuu file thanh cong.";
}

void TaoMaTranNgauNhien(int a[MAX][MAX], int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 10;
}

void File_Display(char *filename)
{
	int n, x, i, j;
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		exit(-1);
	}
	in >> n;
	cout << n;
	for (i = 0; i < n; i++)
	{
		cout << endl;
		for (j = 0; j < n; j++)
		{
			in >> x;
			cout << x << '\t';
		}
	}
	in.close();
}

void Matrix_Display(int a[MAX][MAX], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl;
		for (j = 0; j < n; j++)
			cout << a[i][j] << '\t';
	}
}



