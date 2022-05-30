#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;
class NSX {
		char Mansx[30];
		char Tennsx[30];
		char Dcnsx[50];
	public:
		void nhap();
		void xuat();
};
void NSX::nhap() {
	cout << "Nhap ma nha san xuat     : ";
	fflush(stdin);
	gets(Mansx);
	cout << "Nhap ten nha san xuat    : ";
	fflush(stdin);
	gets(Tennsx);
	cout << "Nhap dia chi nha san xuat: ";
	fflush(stdin);
	gets(Dcnsx);
}
void NSX::xuat() {
	cout << setw(30) << Mansx << setw(30) << Tennsx << setw(50) << Dcnsx;
}
class Hang {
		char maHang[20];
		char tenHang[20];
		NSX x;
	public:
		void nhap();
		void xuat();
};
void Hang::nhap() {
	cout << "Nhap ma hang : ";
	fflush(stdin);
	gets(maHang);
	cout << "Nhap ten hang: ";
	fflush(stdin);
	gets(tenHang);
	x.nhap();
}
void Hang::xuat() {
	cout << setw(20) << maHang << setw(20) << tenHang;
	x.xuat();
}
int main() {
	Hang x;
	x.nhap();
	cout << "Mat hang vua nhap:\n";
	x.xuat();
	return 0;
}
