#include<iostream>

using namespace std;

struct HinhChuNhat {
    int widht, height;
    HinhChuNhat(int w, int h) {
        widht = w;
        height = h;
    }
    void DientichcuaHinhChuNhat () {
        cout << "Dien tich hinh chu nhat la: " << (widht * height);
    }
};
 int main (void) {
     struct HinhChuNhat rec = HinhChuNhat(4,10);
     rec.DientichcuaHinhChuNhat();
     return 0;
 }