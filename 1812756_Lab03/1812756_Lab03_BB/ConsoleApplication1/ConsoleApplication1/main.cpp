#include <iostream>
#include <conio.h>

using namespace std;

#define		MAX		27

void nhapChuoi(char *arr, int &soLuong);
void hienThiChuoi(char *arr, int soLuong);
void bienDoiChuoiSoThanhMangSo(char *arr, int soLuong, int *mangSo);
void hienThiMangSo(int *arr);
void tongHopMang(int *A, int *B, int *mangTongHop);
void bienDoiMangSoThanhChuoiSo(char *chuoiSo, int *mangSo);

int main(int argc, const char **argv) {

	char A[MAX], B[MAX];
	int soLuong_A, soLuong_B;

	nhapChuoi(A, soLuong_A);
	nhapChuoi(B, soLuong_B);

	system("cls");
	cout << "\nChuoi A: ";  hienThiChuoi(A, soLuong_A);
	cout << "\nChuoi B: ";  hienThiChuoi(B, soLuong_B);

	int mangSoA[MAX] = { 0 };
	int mangSoB[MAX] = { 0 };

	cout << "\nMang nhi phan tuong ung:";
	bienDoiChuoiSoThanhMangSo(A, soLuong_A, mangSoA);
	bienDoiChuoiSoThanhMangSo(B, soLuong_B, mangSoB);
	cout << "\nMang nhi phan A: "; hienThiMangSo(mangSoA);
	cout << "\nMang nhi phan B: "; hienThiMangSo(mangSoB);

	int mangSoTongHop[MAX];
	tongHopMang(mangSoA, mangSoB, mangSoTongHop);
	cout << "\nMang so tong hop: ";  hienThiMangSo(mangSoTongHop);

	char C[MAX];
	bienDoiMangSoThanhChuoiSo(C, mangSoTongHop);
	cout << "\nChuoi so tong hop: "; hienThiChuoi(C, MAX-1);

	_getch();
	return 0;
}

void nhapChuoi(char *arr, int &soLuong) {

	cout << "\nNhap so luong phan tu trong tap hop: ";
	cin >> soLuong;

	for (int i = 1; i <= soLuong; i++) {
		cout << "\nNhap phan tu thu " << i << " : ";
		cin >> arr[i];
	}
}

void hienThiChuoi(char *arr, int soLuong) {
	for (int i = 1; i <= soLuong; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void bienDoiChuoiSoThanhMangSo(char *arr, int soLuong, int *mangSo) {

	int temp;
	for (int i = 1; i <= soLuong; i++) {
		temp = (int)(arr[i]) - 96;
		mangSo[temp] = 1;
	}
}

void hienThiMangSo(int *arr) {
	for (int i = 1; i < MAX; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void tongHopMang(int *A, int *B, int *mangTongHop) {
	for (int i = 1; i < MAX; i++) {
		if (A[i] == 1 || B[i] == 1)
			mangTongHop[i] = 1;
		else
			mangTongHop[i] = 0;
	}
}

void bienDoiMangSoThanhChuoiSo(char *chuoiSo, int *mangSo) {
	for (int i = 1; i < MAX; i++)
		chuoiSo[i] = ' ';

	int index = 1;
	for (int i = 1; i < MAX; i++) {
		if (mangSo[i] == 1) {
			int temp = i + 96;
			chuoiSo[index] = char(temp);
			index++;
		}
	}
}
