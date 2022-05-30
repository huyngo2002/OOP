#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class LOPHOC;
class NGUOI {
	protected:
		char HoTen[30];
		char NgaySinh[10];
		char QueQuan[20];
	public:
		void nhap();
		void xuat();
};
void NGUOI::nhap() {
	cout << "Nhap ho va ten: ";
	fflush(stdin);
	gets(HoTen);
	cout << "Nhap ngay sinh: ";
	fflush(stdin);
	gets(NgaySinh);
	cout << "Nhap que quan : ";
	fflush(stdin);
	gets(QueQuan);
}
void NGUOI::xuat() {
	cout << setw(30) << HoTen << setw(10) << NgaySinh << setw(20) << QueQuan << "\t";
}
class SINHVIEN : public NGUOI {
		char maSV[15];
		char Nganh[15];
		int KhoaHoc;
	public:
		void nhap();
		void xuat();
		friend void CountSvK11(LOPHOC k);
		friend void SapXep(LOPHOC k);
};
void SINHVIEN::nhap() {
	NGUOI::nhap();
	cout << "Nhap ma SV: ";
	fflush(stdin);
	gets(maSV);
	cout << "Nhap nganh: ";
	fflush(stdin);
	gets(Nganh);
	cout << "Nhap khoa : ";
	cin >> KhoaHoc;
}
void SINHVIEN::xuat() {
	NGUOI::xuat();
	cout << setw(15) << maSV << setw(15) << Nganh << setw(10) << KhoaHoc << endl;
}
class LOPHOC {
		char maLH[10];
		char tenLH[10];
		char NgayMo[10];
		SINHVIEN *x;
		int n;
		char GiaoVien[30];
	public:
		void nhap();
		void xuat();
		friend void CountSvK11(LOPHOC k);
		friend void SapXep(LOPHOC k);
};

void LOPHOC::nhap() {
	cout << "Nhap ma lop hoc : ";
	fflush(stdin);
	gets(maLH);
	cout << "Nhap ten lop hoc: ";
	fflush(stdin);
	gets(tenLH);
	cout << "Nhap ngay mo lop: ";
	fflush(stdin);
	gets(NgayMo);
	cout << "Nhap so luong SV: ";
	cin >> n;
	x = new SINHVIEN[n];
	for(int i = 0; i < n; i++)
		x[i].nhap();
	cout << "Nhap giao vien  : ";
	fflush(stdin);
	gets(GiaoVien);
}
void LOPHOC::xuat() {
	cout << "Ma lop hoc : " << maLH << endl;
	cout << "Ten lop hoc: " << tenLH << endl;
	cout << "Ngay mo lop: " << NgayMo << endl;
	cout << setw(30) << "Ho ten" << setw(10) << "Ngay sinh" << setw(20) << "Que quan" << "\t";
	cout << setw(15) << "Ma sv" << setw(15) << "Nganh" << setw(10) << "Khoa hoc" << endl;
	for(int i = 0; i < n; i++)
		x[i].xuat();
	cout << "Giao vien  : " << GiaoVien << endl;
}
void CountSvK11(LOPHOC k) {
	int dem = 0;
	for(int i = 0; i < k.n; i++) {
		if(k.x[i].KhoaHoc == 11)
			dem++;
	}
	cout << "Co " << dem << " sinh vien K11" << endl;
}
void SapXep(LOPHOC k) {
	for(int i = 0; i < k.n; i++) {
		for(int j = i + 1; j < k.n; j++) {
			if(k.x[i].KhoaHoc > k.x[j].KhoaHoc) {
				swap(k.x[i], k.x[j]);
			}
		}
	}
}
int main() {
	LOPHOC x;
	x.nhap();
	x.xuat();
	CountSvK11(x);
	SapXep(x);
	x.xuat();
	return 0;
}
