#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;
class Hang {
		char maHang[20];
		char tenHang[20];
		float donGia;
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
	cout << "Nhap don gia : ";
	cin >> donGia;
}
void Hang::xuat() {
	cout << setw(20) << maHang << setw(20) << tenHang << setw(20) << donGia << endl;
}
class Phieu {
		char maPhieu[20];
		Hang* x;
		int n;
	public:
		void nhap();
		void xuat();
};
void Phieu::nhap() {
	cout << "Nhap ma phieu: ";
	fflush(stdin);
	gets(maPhieu);
	cout << "Nhap so luong mat hang n: ";
	cin >> n;
	x = new Hang[n];
	for(int i = 0; i < n; i++)
		x[i].nhap();
}
void Phieu::xuat() {
	cout << setw(20) << "Ma phieu: " << setw(20) << maPhieu << endl;
	cout << setw(20) << "Ma hang" << setw(20) << "Ten hang" << setw(20) << "Don gia" << endl;
	for(int i = 0; i < n; i++)
		x[i].xuat();
}
int main() {
	Phieu a;
	a.nhap();
	cout << "Phieu nhap hang\n";
	a.xuat();
	return 0;
}
