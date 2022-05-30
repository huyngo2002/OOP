#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class SinhVien {
		char maSV[15];
		char tenSV[30];
		char Lop[10];
		char Khoa[10];
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap() {
	cout << "Nhap ma sinh vien  : ";
	fflush(stdin);
	gets(maSV);
	cout << "Nhap ten sinh vien : ";
	fflush(stdin);
	gets(tenSV);
	cout << "Nhap lop sinh vien : ";
	fflush(stdin);
	gets(Lop);
	cout << "Nhap khoa sinh vien: ";
	fflush(stdin);
	gets(Khoa);
}
void SinhVien::xuat() {
	cout << "Ma sinh vien: " << setw(15) << maSV << ".\tTen sinh vien: " << setw(30) << tenSV << endl;
	cout << "Lop: " << setw(10) << Lop << "\tKhoa: " << setw(10) << Khoa << endl;
}
class MonHoc {
		char tenMon[15];
		int soTrinh;
		float Diem;
	public:
		void nhap();
		void xuat();
		friend class PhieuBaoDiem;
};
void MonHoc::nhap() {
	cout << "Nhap ten mon hoc: ";
	fflush(stdin);
	gets(tenMon);
	cout << "Nhap so trinh   : ";
	cin >> soTrinh;
	cout << "Nhap diem       : ";
	cin >> Diem;
}
void MonHoc::xuat() {
	cout << setw(15) << tenMon << setw(10) << soTrinh << setw(10) << Diem << endl;
}
class PhieuBaoDiem {
		SinhVien x;
		MonHoc *y;
		int n;
	public:
		void nhap();
		void xuat();
};
void PhieuBaoDiem::nhap() {
	x.nhap();
	cout << "Nhap so mon hoc: ";
	cin >> n;
	y = new MonHoc[n];
	for (int i = 0; i < n; i++)
		y[i].nhap();
}
void PhieuBaoDiem::xuat() {
	cout << "\t\t\tPHIEU BAO DIEM\n";
	x.xuat();
	cout << "Bang diem\n";
	float tongDiem = 0;
	int tongSoTrinh = 0;
	for (int i = 0; i < n; i++) {
		y[i].xuat();
		tongDiem += y[i].soTrinh * y[i].Diem;
		tongSoTrinh += y[i].soTrinh;
	}
	cout << "\t\tDiem trung binh  " << setprecision(2) << fixed << tongDiem / tongSoTrinh;
}
int main() {
	PhieuBaoDiem k;
	k.nhap();
	k.xuat();
	return 0;
}
