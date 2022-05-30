#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class NSX {
		char maNSX[20];
		char tenNSX[20];
		char diaChi[20];
		friend class Hang; // Lop ban
};
class Hang {
		char maHang[20];
		char tenHang[20];
		float donGia, trongLuong;
		NSX x;
	public:
		void nhap();
		void xuat();
};
void Hang::nhap() {
	cout << "Nhap ma hang             : ";
	fflush(stdin);
	gets(maHang);
	cout << "Nhap ten hang            : ";
	fflush(stdin);
	gets(tenHang);
	cout << "Nhap don gia             : ";
	cin >> donGia;
	cout << "Nhap trong luong         : ";
	cin >> trongLuong;
	cout << "Nhap ma nha san xuat     : ";
	fflush(stdin);
	gets(x.maNSX);
	cout << "Nhap ten nha san xuat    : ";
	fflush(stdin);
	gets(x.tenNSX);
	cout << "Nhap dia chi nha san xuat: ";
	fflush(stdin);
	gets(x.diaChi);
}
void Hang::xuat() {
	cout << "Ma hang             : " << maHang << endl;
	cout << "Ten hang            : " << tenHang << endl;
	cout << "Don gia             : " << donGia << endl;
	cout << "Trong luong         : " << trongLuong << endl;
	cout << "Ma nha san xuat     : " << x.maNSX << endl;
	cout << "Ten nha san xuat    : " << x.tenNSX << endl;
	cout << "Dia chi nha san xuat: " << x.diaChi << endl;
}
int main() {
	Hang x;
	x.nhap();
	cout << "MAT HANG VUA NHAP:\n";
	x.xuat();
	return 0;
}
