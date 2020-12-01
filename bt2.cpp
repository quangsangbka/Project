#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;


 int main() {
     cout << "Nhap chieu dai mang: ";
     int length;
     cin >> length;

     int *array = new int[length]; // Kích thước mảng có thể là biến số

     // Sử dụng mảng

     delete[] array; // Trả lại vùng nhớ mảng array cho hệ điều hành

    
 }
