#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct sinhvien {
    string ten, maSV, lop, mon;
    int namSinh, diemTB;
};
void nhap(vector <sinhvien> &a, int i)
{
    fflush(stdin);
    cout << "Nhap ten SV: "; getline (cin, a[i].ten);
    cout << "Nhap ma SV: "; cin >> a[i].maSV;
    cout << "Nhap lop: "; cin >> a[i].lop;
    cout << "Nhap nam sinh: "; cin >> a[i].namSinh;
    fflush(stdin);
    cout << "Nham mon hoc: "; getline(cin, a[i].mon);
    cout << "Nhap diem TB: "; cin >> a[i].diemTB; 
}

// In ra tên sinh viên có cùng năm sinh
void cung_namSinh(vector <sinhvien> &a, vector<string> &c, int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(a[i].namSinh == a[j].namSinh)
            c.push_back(a[j].ten);
            if(j==n-1)
            {
                cout << "Ten sinh vien co cung nam sinh" << a[i].namSinh << ":\n";
                for (int i=0; i<c.size(); i++)
                {
                    cout << c[i] << endl;
                }
                c.clear();
            }
        }
    }
}


// In ra tên sinh viên có cùng lớp
void cung_lop(vector <sinhvien> &a, vector <string> &c, int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(a[i].lop == a[j].lop)
            c.push_back(a[j].ten);
            if(j == n-1)
            {
                cout << "Ten sinh vien cung lop: " << a[i].lop << ":\n";
                for (int i=0; i<c.size(); i++)
                {
                    cout << c[i] << endl;
                }
                c.clear();
            }
        }
    }
}


// Sắp xếp theo thứ tư điểm trung bình học kỳ giảm dần
void sap_xep_diem(vector<sinhvien> &a, int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(a[i].diemTB < a[j].diemTB)
            {
                a[n] = a[i];
                a[i] = a[j];
                a[j] = a[n];
            }
        }
    }
    cout << "Ten sinh vien theo day giam dan: \n";
    for (int i=0; i<n; i++)
    {
        cout << a[i].ten << endl;
    }
}
int main()
{
    vector <sinhvien> a;
    vector <string> c;
    int n;
    cout << "Nhap n: "; cin >> n;
    a.resize(n+1);
    for(int i=0; i<n; i++)
    {
        cout << "Sinh vien" << i+1 << ": " << endl;
        nhap (a, i);
    }
    cung_namSinh(a,c,n);
    sap_xep_diem(a, n);
}