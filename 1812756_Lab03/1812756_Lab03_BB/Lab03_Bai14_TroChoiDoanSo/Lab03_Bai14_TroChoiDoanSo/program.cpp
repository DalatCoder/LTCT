#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

#define MAX 100

int SinhSoNgauNhien();
bool XuLySoLanDoan(int soDe, int k);
void ThongBao_kqtc(int soDe, int kq);
int ChonDoKho();

int main()
{
	srand(time(NULL));
	int isContinue;
	do
	{
		int soDe = SinhSoNgauNhien();
		int k = ChonDoKho();
		bool isPlayerWin = XuLySoLanDoan(soDe, k);
		ThongBao_kqtc(soDe, isPlayerWin);
		cout << "\nBan co muon tiep tuc choi (0 de thoat, 1 de tiep tuc) >> ";
		cin >> isContinue;
		if (isContinue)
			system("cls");
	} while (isContinue != 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
	return 0;
}

int SinhSoNgauNhien()
{
	int soDe;

	soDe = 1 + rand() % MAX;

	return soDe;
}

bool XuLySoLanDoan(int soDe, int k)
{
	bool isPlayerWin = false;
	int playerNumber;
	for (int i = 1; i <= k; i++)
	{
		cout << "\nNhap vao 1 so (1 - 100) >> ";
		cin >> playerNumber;
		if (playerNumber < soDe)
			cout << "\nNhap vao so lon hon";
		else if (playerNumber > soDe)
			cout << "\nNhap vao so nho hon";
		else
		{
			isPlayerWin = true;
			break;
		}
	}

	return isPlayerWin;
}

void ThongBao_kqtc(int soDe, int kq)
{
	if (kq)
		cout << "\nBan da chien thang tro choi!";
	else
		cout << "\nBan da thua, chuc ban may man lan sau";
	cout << "\nSo ngau nhien la : " << soDe;
}

int ChonDoKho()
{
	int level;

	do
	{
		cout << "\nChon so lan doan toi da (3, 5, 7, 9) >> ";
		cin >> level;
	} while (level != 3 && level != 5 && level && 7 && level != 9);

	return level;
}

