
#define MAX 100
#define CACH ' '

char Chuyen_KT_Thuong(char x)
{
	if ('A' <= x && x <= 'Z')
		x = x + 32;
	return x;
}

char Chuyen_KT_Hoa(char x)
{
	if ('a' <= x && x <= 'z')
		x = x - 32;
	return x;
}

void ChenCuoi(char b[MAX], char kt)
{
	int i;
	for (i = 0; b[i] != NULL; i++);
	b[i++] = kt;
	b[i] = NULL;
}

void NanTen(char a[MAX])
{
	int i;
	char b[MAX];
	b[0] = NULL;
	i = 0;

	//Khu dau cach
	while (a[i] == CACH)
		i++;

	while (a[i] != NULL)
	{
		ChenCuoi(b, Chuyen_KT_Hoa(a[i]));
		i++;
		while (a[i] != CACH && a[i] != NULL)
		{
			ChenCuoi(b, Chuyen_KT_Thuong(a[i]));
			i++;
		}

		while (a[i] == CACH)
			i++;
		if (a[i] != NULL)
			ChenCuoi(b, CACH);
	}
	strcpy_s(a, MAX, b);
}
