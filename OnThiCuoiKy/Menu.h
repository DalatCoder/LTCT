
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien nv[MAX], int &n);

void XuatMenu()
{
    cout << "\n=============== HE THONG CHUC NANG ================\n";
    cout << "\n0. Thoat chuong trinh";
    cout << "\n1. Doc du lieu nhan vien";
    cout << "\n2. Xuat du lieu nhan vien";
    cout << "\n===================================================\n";
}

int ChonMenu(int soMenu)
{
    int stt;

    for (;;)
    {
        system("clear"); // Linux
        XuatMenu();
        cout << "\nChon chuc nang tuong ung tu 1 .. " << soMenu << " : ";
        cin >> stt;
        if (0 <= stt && stt <= soMenu)
            break;
    }

    return stt;
}

void XuLyMenu(int menu, NhanVien nv[MAX], int &n)
{
    switch (menu)
    {
        case 0:
            cout << "\n0. Thoat chuong trinh.";
            break;
        case 1:
            cout << "\n1. Doc du lieu nhan vien tu tep.";
            break;
        case 2:
            cout << "\n2. Xem du thong tin nhan vien.";
            break;
    }
    cin.get(); // _getch()
}
