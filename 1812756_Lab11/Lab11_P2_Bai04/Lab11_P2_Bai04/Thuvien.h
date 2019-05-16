
#define MAX 100

void File_Mat(char *filename, int a[MAX][MAX], int &n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file.";
		exit(-1);
	}
	in >> n;
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			in >> a[i][j];
	in.close();
}

