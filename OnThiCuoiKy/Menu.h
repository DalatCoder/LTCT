
void XuatMenu()
{
    cout << "\n============= HE THONG CHUC NANG ==============\n";
    cout << "\n0. Thoat chuong trinh";
    cout << "\n1. Chuc nang 1";
    cout << "\n2. Chuc nang 2";
    cout << "\n3. Chuc nang 3";
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




