#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class DoanhNghiep {
		char Ten[30];
		char DiaChi[30];
		int SoNV;
		double DoanhThu;

	public:
		void nhap();
		void xuat();
};
void DoanhNghiep::nhap() {
	cout << "Nhap ten doanh nghiep    : ";
	fflush(stdin);
	gets(Ten);
	cout << "Nhap dia chi doanh nghiep: ";
	fflush(stdin);
	gets(DiaChi);
	cout << "Nhap so luong nhan vien  : ";
	cin >> SoNV;
	cout << "Nhap doanh thu           : ";
	cin >> DoanhThu;
}
void DoanhNghiep::xuat() {
	cout << setw(30) << Ten << setw(30) << DiaChi << setw(15) << SoNV << setw(20) << DoanhThu << endl;
}
int main() {
	DoanhNghiep* x;
	int n;
	cout << "Nhap so luong doanh nghiep n: ";
	cin >> n;
	x = new DoanhNghiep[n];
	for(int i = 0; i < n; i++) {
		cout << "Nhap thong tin doanh nghiep thu " << i + 1 << ":\n";
		x[i].nhap();
	}
	cout << setw(30) << "Ten doanh nghiep" << setw(30) << "Dia chi doanh nghiep"
	     << setw(15) << "So nhan vien" << setw(20) << "Doanh thu" << endl;
	for(int i = 0; i < n; i++)
		x[i].xuat();
	return 0;
}
