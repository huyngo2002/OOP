#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class NhaCungCap {
		char maNCC[20];
		char tenNCC[20];
		char DiaChi[40];
	public:
		void nhap();
		void xuat();
};
void NhaCungCap::nhap() {
	cout << "Nhap ma NCC : ";
	fflush(stdin);
	gets(maNCC);
	cout << "Nhap ten NCC: ";
	fflush(stdin);
	gets(tenNCC);
	cout << "Nhap dia chi: ";
	fflush(stdin);
	gets(DiaChi);
}
void NhaCungCap::xuat() {
	cout << "Ma NCC: " << setw(20) << maNCC << "\t" << "Ten NCC: "
	     << setw(20) << tenNCC << endl << "Dia chi: " << setw(40) << DiaChi <<endl;
}
class Hang {
		char tenHang[10];
		float DonGia;
		int SoLuong;
	public:
		void nhap();
		void xuat();
		friend class Phieu;
};
void Hang::nhap() {
	cout << "Nhap ten hang: ";
	cin.ignore();
	gets(tenHang);
	cout << "Nhap don gia : ";
	cin >> DonGia;
	cout << "Nhap so luong: ";
	cin >> SoLuong;
}
void Hang::xuat() {
	cout << setw(10) << tenHang << "\t" << setw(10) << DonGia << "\t"
	     << setw(10) << SoLuong << "\t" << setw(15) << DonGia*SoLuong << endl;
}
class Phieu {
		char maPhieu[20];
		char NgayLap[10];
		NhaCungCap x;
		Hang *y;
		int n;
	public:
		void nhap();
		void xuat();
};
void Phieu::nhap() {
	cout << "Nhap ma phieu: ";
	fflush(stdin);
	gets(maPhieu);
	cout << "Ngay lap     : ";
	fflush(stdin);
	gets(NgayLap);
	x.nhap();
	cout << "n = ";
	cin >> n;
	y = new Hang[n];
	for(int i = 0; i < n; i++)
		y[i].nhap();
}
void Phieu::xuat() {
	cout << "\t\t\t\tPHIEU NHAP HANG" << endl << "Ma phieu: "
	     << setw(20) << maPhieu << ".\t" << "Ngay lap: " << setw(10) << NgayLap << endl;
	x.xuat();
	cout << setw(10) << "Ten hang" << "\t" << setw(10) << "Don gia" << "\t"
	     << setw(10) << "So luong" << "\t" << setw(15) << "Thanh tien" << endl;
	float Sum = 0;
	for(int i = 0; i < n; i++) {
		y[i].xuat();
		Sum += (y[i].DonGia * y[i].SoLuong);
	}
	cout << "\t\t\t\t\tCong thanh tien " << Sum;
}
int main() {
	Phieu k;
	k.nhap();
	k.xuat();
	return 0;
}
