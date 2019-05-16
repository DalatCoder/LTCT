#define MAX 100

void File_Array(char *filename, int a[MAX], int &n);
int File_Array_2(char *filename, int a[MAX], int &n);

void File_Array(char *filename, int a[MAX], int &n)
{
	int i;
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		return;
	}

	in >> n;
	for (i = 0; i < n; i++)
		in >> a[i];
	in.close();
}

int File_Array_2(char *filename, int a[MAX], int &n)
{
	ifstream in(filename);
	if (!in)
		return 0;
	in >> n;
	for (int i = 0; i < n; i++)
		in >> a[i];
	in.close();
	return 1;
}




