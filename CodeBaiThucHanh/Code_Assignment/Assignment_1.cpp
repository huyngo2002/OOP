#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class Phieu;
class NCC {
		char maNCC[30];
		char tenNCC[30];
		char diaChi[30];
		char soDT[20];
	public:
		void nhap();
		void xuat();
};
void NCC::nhap() {
	cout << "Nhap ma nha cung cap : ";
	fflush(stdin);
	gets(maNCC);
	cout << "Nhap ten nha cung cap: ";
	fflush(stdin);
	gets(tenNCC);
	cout << "Nhap dia chi         : ";
	fflush(stdin);
	gets(diaChi);
	cout << "Nhap so dien thoai   : ";
	fflush(stdin);
	gets(soDT);
}
void NCC::xuat() {
	cout << "Ma nha cung cap: " << setw(10) << maNCC << setw(28)
	     << "Ten nha cung cap: " << setw(15) << tenNCC << endl
	     << "Dia chi: " << setw(20) << diaChi << setw(13) << "SDT: "
	     << setw(11) << soDT << endl;
}
class SanPham {
		char maSP[30];
		char tenSP[30];
		int soLuong;
		float donGia;
	public:
		void nhap();
		void xuat();
		friend class Phieu;
		friend void soLuongSanPhamItHon80(Phieu k);
		friend void sapXep(Phieu k);
};
void SanPham::nhap() {
	cout << "Nhap ma san pham : ";
	fflush(stdin);
	gets(maSP);
	cout << "Nhap ten san pham: ";
	fflush(stdin);
	gets(tenSP);
	cout << "Nhap so luong    : ";
	cin >> soLuong;
	cout << "Nhap don gia     : ";
	cin >> donGia;
}
void SanPham::xuat() {
	cout << setw(10) << maSP << setw(15) << tenSP << setw(15)
	     << soLuong << setw(15) << donGia << setw(15) << soLuong * donGia << endl;
}
class Phieu {
		char maPhieu[30];
		char ngayLap[10];
		NCC x;
		SanPham* y;
		int n;
	public:
		void nhap();
		void xuat();
		friend void soLuongSanPhamItHon80(Phieu k);
		friend void sapXep(Phieu k);
};
void Phieu::nhap() {
	cout << "Nhap ma phieu: ";
	fflush(stdin);
	gets(maPhieu);
	cout << "Nhap ngay lap theo dinh dang (ngay/thang/nam): ";
	fflush(stdin);
	gets(ngayLap);
	x.nhap();
	cout << "Nhap so luong san pham n: ";
	cin >> n;
	y = new SanPham[n];
	for(int i = 0; i < n; i++)
		y[i].nhap();
}
void Phieu::xuat() {
	cout << "Dai hoc Victory" << endl << setw(47) << "PHIEU NHAP VAN PHONG PHAM" << endl;
	cout << "Ma phieu: " << setw(17) << maPhieu << setw(20) << "Ngay lap: " << setw(10) << ngayLap << endl;
	x.xuat();
	cout << setw(10) << "Ma SP" << setw(15) << "Ten san pham" << setw(15)
	     << "So luong" << setw(15) << "Don gia" << setw(15) << "Thanh tien" << endl;
	for(int i = 0; i < n; i++)
		y[i].xuat();
	float T = 0;
	for (int i = 0; i < n; i++)
		T = T + y[i].soLuong * y[i].donGia;
	cout << setw(30) << "TONG" << setw(40) << T << endl << endl;
	cout << setw(20) << "Hieu truong" << setw(25) << "Phong tai chinh" << setw(20) << "Nguoi lap";
}
void soLuongSanPhamItHon80(Phieu k) {
	int dem = 0;
	for (int i = 0; i < k.n; i++) {
		if(k.y[i].soLuong < 80)
			dem++;
	}
	if (dem == 0) {
		cout << "\n\nKhong co san pham nao co so luong < 80\n\n";
	} else {
		cout << "\n\nCo " << dem << " san pham co so luong <80\n\n";
	}
}
void sapXep(Phieu k) {
	for(int i = 0; i < k.n; i++) {
		for(int j = i + 1; j < k.n; j++) {
			if(k.y[i].donGia > k.y[j].donGia) {
				swap(k.y[i], k.y[j]);
			}
		}
	}
}
int main() {
	Phieu k;
	k.nhap();
	k.xuat();
	soLuongSanPhamItHon80(k);
	sapXep(k);
	k.xuat();
	return 0;
}
