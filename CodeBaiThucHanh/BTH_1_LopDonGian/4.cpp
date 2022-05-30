#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class SACH {
		char MaS[20];
		char TenS[20];
		char NXB[20];
		int SoTrang;
		float GiaTien;
	public:
		void NHAP();
		void XUAT();
};
void SACH::NHAP() {
	cout << "NHAP MA SACH: ";
	fflush(stdin);
	cin.getline(MaS,20);
	cout << "NHAP TEN SACH: ";
	fflush(stdin);
	cin.getline(TenS,20);
	cout << "NHAP NHA XUAT BAN: ";
	fflush(stdin);
	cin.getline(NXB,20);
	cout << "NHAP SO TRANG: ";
	cin >> SoTrang;
	cout << "NHAP GIA TIEN: ";
	cin >> GiaTien;
}
void SACH::XUAT() {
	cout << setw(20) << MaS << setw(20) << TenS << setw(20)
	     << NXB << setw(10) << SoTrang << setw(10) << GiaTien << endl;
}
int main() {
	int n;
	cout << "NHAP SO LUONG SACH: ";
	cin >> n;
	SACH *x;
	x = new SACH[n];
	cout << "NHAP THONG TIN CUA " << n << " CUON SACH:\n";
	for (int i = 0; i < n; i++) {
		cout << "-------THONG TIN QUYEN SACH THU " << i + 1 << "-------: \n";
		x[i].NHAP();
	}
	cout << setw(20) << "MA SACH" << setw(20) << "TEN SACH" << setw(20)
	     << "NHA XUAT BAN" << setw(10) << "SO TRANG" << setw(10) << "GIA TIEN" << endl;
	for (int i = 0; i < n; i++) {
		x[i].XUAT();
	}
	return 0;
}

