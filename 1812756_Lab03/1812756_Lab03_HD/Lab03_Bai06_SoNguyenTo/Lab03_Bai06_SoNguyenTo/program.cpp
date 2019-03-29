#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

#define		TAB		'\t'

void LietKeSoNT(unsigned int n);
int KiemTra_NT(int n);

int main(int argc, const char **argv) {

	// Khai báo biến lưu số lượng số nguyên tố cầm tìm
	unsigned int n = 0;

	// Nhập giá trị cho biến n
	cout << endl << "Nhap so luong so NT can tim : ";
	cin >> n;

	// Gọi hàm liệt kê số nguyên tố
	LietKeSoNT(n);

	_getch();
	return 0;
}

/*
	Định nghĩa hàm kiểm tra số n có phải là số nguyên tố
	Input:
		n: Số cần kiểm tra có phải là số nguyên tố
	Output:
		kq = 1: n là số nguyên tố
		kq = 0: n không phải là số nguyên tố
*/
int KiemTra_NT(int n) {
	int kq = 0, m = 0, i = 0;
	if (n < 2) {
		kq = 0;
	}
	else {
		m = (int)sqrt((double)n);
		i = 2;
		kq = 1;

		// Duyệt qua từng giá trị i từ 2 -> m để kiểm tra
		// n có chia hết cho i không? Nếu có, gán kq = 0;
		while (i <= m && kq) {
			if (n % i == 0) {
				kq = 0;
			}
			i++;
		}
	}
	return kq;
}

/*
	Định nghĩa hàm tìm n số nguyên tố đầu tiên
	Input:
		n: số lượng số nguyên tố
	Output:
		Không có. Chỉ xuất ra n số nguyên tố đầu tiên
*/
void LietKeSoNT(unsigned int n) {
	int dem = 0, so = 2;

	// Trong khi chua tìm đủ n số nguyên tố thì
	while (dem < n) {
		// Kiểm tra so có phải là số nguyên tố?
		if (KiemTra_NT(so)) {
			// Nếu đúng xuất số đó và tăng biến đếm
			cout << so << TAB;
			dem++;
		}

		// Tăng so lên 1 đơn vị để kiểm tra số tiếp theo
		so++;
	}
}
