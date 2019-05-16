
#define MAX 100

void Write_Int(int a[], int n, char *filename);

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


