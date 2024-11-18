// bai10_tinhdientichchuvihinhchunhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int dai, rong;
    int chuvi, dientich;
    cout << "TINH DIEN TICH CHU VI HINH CHU NHAT";
    cout << "\nNhap chieu dai:\t";
    cin >> dai;
    cout << "\nNhap chieu rong: ";
    cin >> rong;
    //cong thuc chuvi (dai + rong)*2 =chuvi
    //cong thuc chieudai * chieurong = dientich
    chuvi = (dai + rong) * 2;
    dientich = dai * rong;
    cout << "\n chu vi: " << chuvi << endl;
    cout << "\n dien tich : " << dientich << endl;
    return 0;
}

