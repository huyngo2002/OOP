#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class Phieu;
class NhanVien {
		char tenNV[30];
		char ChucVuNV[20];
	public:
		void nhap();
		void xuat();
};
void NhanVien::nhap() {
	cout << "Nhap ho va ten NV: ";
	fflush(stdin);
	gets(tenNV);
	cout << "Nhap chuc vu NV  : ";
	fflush(stdin);
	gets(ChucVuNV);
}
void NhanVien::xuat() {
	cout << "Nhan vien kiem ke: "<<tenNV<<"\tChuc vu: "<<ChucVuNV<<endl;
}
class Phong {
		char tenPhong[20];
		char maPhong[15];
		char tenTruongPhong[30];
	public:
		void nhap();
		void xuat();
};
void Phong::nhap() {
	cout << "Nhap ten phong: ";
	fflush(stdin);
	gets(tenPhong);
	cout << "Nhap ma phong : ";
	fflush(stdin);
	gets(maPhong);
	cout << "Nhap ten TP   : ";
	fflush(stdin);
	gets(tenTruongPhong);
}
void Phong::xuat() {
	cout << "Kiem ke tai phong: " << tenPhong << "\tMa phong: " << maPhong << endl;
	cout << "Truong phong: " << tenTruongPhong << endl;
}
class TaiSan {
		char tenTS[20];
		int SoLuong;
		char TinhTrang[20];
	public:
		void nhap();
		void xuat();
		friend class Phieu;
		friend void Sua(Phieu k);
		friend void SapXep(Phieu k);
};
void TaiSan::nhap() {
	cout << "Nhap ten tai san: ";
	fflush(stdin);
	gets(tenTS);
	cout << "Nhap so luong   : ";
	cin>>SoLuong;
	cout << "Nhap tinh trang : ";
	fflush(stdin);
	gets(TinhTrang);
}
void TaiSan::xuat() {
	cout << setw(20) << tenTS << setw(10) << SoLuong << setw(20) << TinhTrang << endl;
}
class Phieu {
		char maPhieu[20];
		char NgayKiemKe[10];
		NhanVien x;
		Phong y;
		TaiSan *z;
		int n;
	public:
		void nhap();
		void xuat();
		friend void Sua(Phieu k);
		friend void SapXep(Phieu k);
};
void Phieu::nhap() {
	cout << "Nhap ma phieu: ";
	fflush(stdin);
	gets(maPhieu);
	cout << "Nhap ngay    : ";
	fflush(stdin);
	gets(NgayKiemKe);
	x.nhap();
	y.nhap();
	cout << "Nhap so tai san: ";
	cin >> n;
	z = new TaiSan[n];
	for (int i = 0; i < n; i++)
		z[i].nhap();
}
void Phieu::xuat() {
	cout << "\t\t\tPHIEU KIEM KE TAI SAN\n";
	cout << "Ma phieu: " << setw(20) << maPhieu << ".\tNgay kiem ke:" << setw(10) << NgayKiemKe << endl;
	x.xuat();
	y.xuat();
	cout << setw(20) << "Ten tai san" << setw(10) << "So luong" << setw(20) << "Tinh trang" << endl;
	int soLuong = 0;
	for(int i = 0; i < n; i++) {
		z[i].xuat();
		soLuong += z[i].SoLuong;
	}
	cout << "So tai san da kiem ke: " << n << "\tTong so luong:" << soLuong << endl;
}
void Sua(Phieu k) {
	for (int i = 0; i < k.n; i++) {
		if(strcmp(k.z[i].tenTS, "May vi tinh") == 0) {
			k.z[i].SoLuong = 20;
		}
	}
}
void SapXep(Phieu k) {
	for(int i = 0; i < k.n; i++) {
		for(int j = i + 1; j < k.n; j++) {
			if(k.z[i].SoLuong > k.z[j].SoLuong) {
				swap(k.z[i], k.z[j]);
			}
		}
	}
}
int main() {
	Phieu k;
	k.nhap();
	k.xuat();
	cout << endl << endl;
	Sua(k);
	SapXep(k);
	k.xuat();
	return 0;
}
