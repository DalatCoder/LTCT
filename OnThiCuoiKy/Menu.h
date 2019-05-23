
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien nv[MAX], int &n);

void XuatMenu()
{
    cout << "\n============= HE THONG CHUC NANG ==============\n";
    cout << "\n0. Thoat chuong trinh";
    cout << "\n1. Tao danh sach nhan vien";
    cout << "\n2. Xem danh sach nhan vien";
    cout << "\n3. Tim nhan vien theo ma so";
    cout << "\n===============================================\n";
}

int ChonMenu(int soMenu)
{
    int stt;

    for (;;)
    {
        system("clear");
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
            cout << "\n0. Thoat chuong trinh";
            break;
    }

    cin.get();
}
