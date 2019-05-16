
#define MAX 100

void Write_Int(int a[], int n, char *filename);
void File_Display(char *filename);

void Write_Int(int a[], int n, char *filename)
{
	ofstream out(filename);
	if (!out)
	{
		cout << "\nLoi mo file.";
		return;
	}
	out << n;
	out << '\n';

	for (int i = 0; i < n; i++)
	{
		out << a[i];
		out << '\t';
	}
	out.close();
	cout << "\nGhi xong du lieu vao tep.";
}

void File_Display(char *filename)
{
	int n, x;
	ifstream in(filename);
	if (!filename)
	{
		cout << "\nLoi mo file.";
		return;
	}
	in >> n;
	cout << endl << n << endl;
	for (int i = 0; i < n; i++)
	{
		in >> x;
		cout << x << '\t';
	}
	in.close();
}

