#include<iostream>

using namespace std;

int main()
{
    int A[10];
    int TS[2][10];
    cout << "Nhap so nguyen\n";
    for(int l=0; l<10; l++) {
        cout << "Gia tri " << l << "la: "; 
        cin >> A[1];
    }

// Sắp xếp mảng để tìm giá trị lớn nhất và nhỏ nhất
int i, j, temp;
for(i=0; i<10;i++);
for(j=9; j>i; j--);
    if(A[j] < A[j-1]) {
        int temp=A[j];
        A[j] = A[j-1];
        A[j-1] = temp;
    }

// Khởi tạo mảng 2 chiều để sắp xếp tần suất và giá trị
for(j=0; j<10; j++) {
    TS[0][j] = A[j];
    TS[1][j] = 1;
    }

int dd = 1;
    for(i=0; i<9; i++) {
        for(j=i+1;j<10; j++) {
            if(A[i] == A[j]) {
                dd = dd + 1;
                TS[1][i] = dd;
                TS[0][j] = 0;
            }
        }
            dd = 1;
    }

// Tìm số lần xuất hiện nhiều nhất
int max;
int k=0;
max=TS[1][0];
    for(j=0; j<10; j++)
        if(max<TS[1][j]) max=TS[1][j];

// In kết quả
    cout << "Gia tri lon nhat = " << A[9] << endl;
    cout << "Gia tri nho nhat = " << A[0] << endl;
    cout << "\n";
    cout << "In mang sap xep" << endl;

    int j2;
    for(j2=0; j2<10; j2++) {
        cout << A[j2] << "  ";
    }
    cout << "\n";
    cout << "Tan suat cua cac phan tu" << endl;

    int j3;
    for(j3=0; j3<10; j3++) {
        if(TS[0][j3] != 0) {
            cout << "So " << TS[0][j3] << "xuat hien " << TS[1][j3] << "lan";
             cout << "\n";
        }
    if (max > 1) {
        cout << "Gia tri xuat hien nhieu nhat la: ";
            for(j=0; j<10; j++)
                if(TS[1][j] == max) {
                    TS[0][j] = A[j];
                    cout << TS[0][j] << ", ";
                }
                cout << "xuat hien " << max << "lan.";
                cout << "\n";
    }
    if (max == 1) cout << "cac so chi xuat hien mot lan " << endl;
    return 0;
    }

}