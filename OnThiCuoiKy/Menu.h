
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, NhanVien nv[MAX], int &n);

void XuatMenu()
{
    cout << "\n=============== HE THONG CHUC NANG ================\n";
    cout << "\n0. Thoat chuong trinh";
    cout << "\n1. Doc du lieu nhan vien";
    cout << "\n2. Xuat du lieu nhan vien";
    cout << "\n3. Tim thong tin nhan vien theo ma so";
    cout << "\n4. Liet ke nhan vien co luong >= X";
    cout << "\n5. Liet ke nhan vien co nam sinh trong khoang [u..v]";
    cout << "\n6. Tinh tong luong thang";
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
    char *filename = new char[MAX];
    int kq, ms, x, u, v;
    double luong;

    switch (menu)
    {
    case 0:
        cout << "\n0. Thoat chuong trinh.";
        delete[] filename;
        break;
    case 1:
        cout << "\n1. Doc du lieu nhan vien tu tep.";
        cout << "\nNhap ten file de mo: ";
        cin >> filename;
        cout << "\nTen tap tin: " << filename;
        Doc_ThongTin_NhanVien(filename, nv, n);
        cout << "\nDanh sach thong tin nhan vien tu tep \"" << filename << "\": \n";
        Xuat_DS_NV(nv, n);
        cin.get();
        break;

    case 2:
        cout << "\n2. Xem du thong tin nhan vien.";
        cout << "\nDanh sach thong tin nhan vien:\n";
        Xuat_DS_NV(nv, n);
        cin.get();
        break;

    case 3:
        cout << "\n3. Tim thong tin nhan vien theo ma so.";
        cout << "\nNhap ma so nhan vien can tim : ";
        cin >> ms;
        kq = Tim_NV_MaSo(nv, n, ms);
        if (kq == -1)
            cout << "\nKhong co nhan vien ma so " << ms << " trong danh sach.";
        else
        {
            XuatTieuDe();
            Xuat_1_NV(nv[kq]);
            XuatDongKeNgang();
        }

        cin.get();
        break;

    case 4:
        cout << "\n4. Liet ke danh sach nhan vien co luong >= X";
        cout << "\nNhap vao muc luong toi thieu: ";
        cin >> x;
        LietKe_NV_Luong(nv, n, x);
        cin.get();
        break;

    case 5:
        cout << "\n5. Liet ke nhan vien co nam sinh trong khoang [u..v] cho truoc";
        cout << "\nNhap nam bat dau: ";
        cin >> u;
        cout << "\nNhap nam ket thuc: ";
        cin >> v;
        LietKe_NV_NamSinh(nv, n, u, v);
        cin.get();
        break;

    case 6:
        cout << "\n6. Tinh tong luong thang cua toan bo nhan vien";
        luong = TinhTongLuong(nv, n);
        cout << "\nTong luong cua nhan vien la : " << setiosflags(ios::fixed) << setprecision(2) << luong;
        cout << "\nXem lai danh sach nhan vien de kiem tra: \n";
        Xuat_DS_NV(nv, n);
        cin.get();
        break;
    }

    cin.get(); // _getch()
}
