
#define MAX 100

void File_Array(char *filename, int a[MAX], int &n);
void Array_Display(int arr[MAX], int n);

void File_Array(char *filename, int a[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		return;
	}

	n = 0;
	in >> a[n];
	while (!in.eof())
	{
		n++;
		in >> a[n];
	}
	n++;
	in.close();
}

void Array_Display(int arr[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << '\t';
}

