#include<iostream>

using namespace std;
class SinhVien
{
    private: // Riêng
        char mssv[30];
        string HoTen;
        int tuoi;
        int diem;
    public: // Chung
        void NHAP()
        {
            cout << "Nhap thong tin: " << endl;
            cout << "Nhap mssv: " << endl;
            fflush(stdin); // Xóa bộ nhớ đệm
            gets(mssv);
            cout << "Nhap ho ten: " << endl;
            fflush(stdin);
            getline(cin, HoTen);
            cout << "Nhap tuoi: " << endl;
            cin >> tuoi;
            cout << "Nhap diem: " << endl;
            cin >> diem;

        }
        void XUAT()
        {
            cout << "\n_______________________\n";
            cout << "Ma SV: " << mssv << endl;
            cout << "Ho Ten: " << HoTen << endl;
            cout << "Tuoi: " << tuoi << endl;
            cout << "Diem: " << diem << endl;
        }
};
int main()
{
    SinhVien a,b;
    a.NHAP();
    b.NHAP();
    a.XUAT();
    b.XUAT(); 
    return 0;
}
