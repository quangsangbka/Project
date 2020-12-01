#include<iostream>
#include<string>

using namespace std;

struct sinhvien
{
    string hoten;
    string mssv;
    float diem;
};
typedef struct sinhvien SinhVien;
void Nhap_thong_tin_sinh_vien(SinhVien &sv)
{
    fflush(stdin); // Xóa bộ đệm
    cout << "\nNhap ho ten sinh vien : ";
    getline(cin, sv.hoten);

    fflush(stdin);
    cout << "\nNhap ma so sinh vien : ";
    getline(cin, sv.mssv);

    cout << "\nNhap diem cua sinh vien : ";
    cin >> sv.diem;
}
int main()
{
    SinhVien x;
    cout << "\n\n\t\tNhap thong tin sinh vien\n";
     system("pause");
     return 0;
  
}

