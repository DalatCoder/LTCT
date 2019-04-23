
#define MAX 100
#define CACH ''

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
