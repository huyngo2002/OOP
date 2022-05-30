#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class PhongMay;
class May {
		char maMay[20];
		char kieuMay[20];
		string tinhTrang;
	public:
		void nhap();
		void xuat();
		friend void suaTinhTrangMay(PhongMay a);
};
void May::nhap() {
	cout << "Nhap ma may        : ";
	fflush(stdin);
	gets(maMay);
	cout << "Nhap kieu may      : ";
	fflush(stdin);
	gets(kieuMay);
	cout << "Nhap tinh trang may: ";
	cin.ignore();
	getline(cin, tinhTrang);
}
void May::xuat() {
	cout << setw(20) << maMay << setw(20) << kieuMay << setw(20) << tinhTrang << endl;
}
class QuanLy {
		char maQL[20];
		char hoTen[30];
	public:
		void nhap();
		void xuat();
};
void QuanLy::nhap() {
	cout << "Nhap ma quan ly: ";
	fflush(stdin);
	gets(maQL);
	cout << "Nhap ho va ten : ";
	fflush(stdin);
	gets(hoTen);
}
void QuanLy::xuat() {
	cout << "Ma quan ly: " << maQL << ". Ten quan ly: " << hoTen << endl;
}
class PhongMay {
		char maPhong[20];
		char tenPhong[20];
		float dienTich;
		QuanLy x;
		May* y;
		int n;
	public:
		void nhap();
		void xuat();
		friend void suaTinhTrangMay(PhongMay a);
		friend void suaDienTich(PhongMay &a);
};
void PhongMay::nhap() {
	cout << "Nhap ma phong : ";
	fflush(stdin);
	gets(maPhong);
	cout << "Nhap ten phong: ";
	fflush(stdin);
	gets(tenPhong);
	cout << "Nhap dien tich: ";
	cin >> dienTich;
	x.nhap();
	cout << "n = ";
	cin >> n;
	y = new May[n];
	for(int i = 0; i < n; i++)
		y[i].nhap();
}
void PhongMay::xuat() {
	cout << "Ma phong: " << maPhong << ". Ten phong: " << tenPhong << ". Dien tich: " << dienTich << endl;
	x.xuat();
	cout << setw(20) << "Ma may" << setw(20) << "Kieu may" << setw(20) << "Tinh trang" << endl;
	for(int i = 0; i < n; i++)
		y[i].xuat();
}
void suaTinhTrangMay(PhongMay a) {
	for(int i = 0; i < a.n; i++) {
		if(strcmp(a.y[i].maMay, "MS001") == 0) {
			a.y[i].tinhTrang.replace(0, a.y[i].tinhTrang.length(), "Tot");
		}
	}
}
void suaDienTich(PhongMay &a) {
	a.dienTich = 50;
}
int main() {
	PhongMay a;
	a.nhap();
	suaTinhTrangMay(a);
	suaDienTich(a);
	a.xuat();
	return 0;
}
