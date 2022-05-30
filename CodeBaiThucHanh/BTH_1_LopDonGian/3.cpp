#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class HANG {
		char MaH[20];
		char TenH[20];
		float DonGia;
		int SoLuong;
	public:
		void NHAP();
		void XUAT();
};
void HANG::NHAP() {
	cout << "NHAP MA HANG:  ";
	fflush(stdin);
	cin.getline(MaH,20);
	cout << "NHAP TEN HANG: ";
	fflush(stdin);
	cin.getline(TenH,20);
	cout << "NHAP DON GIA:  ";
	cin >> DonGia;
	cout << "NHAP SO LUONG: ";
	cin >> SoLuong;
}
void HANG::XUAT() {
	cout << setw(20) << MaH << setw(20) << TenH << setw(15) << DonGia << setw(15) << SoLuong << setw(20) << DonGia * SoLuong << endl;
}
int main() {
	HANG *x;
	int n;
	cout << "Nhap so luong mat hang: ";
	cin >> n;
	x = new HANG[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap mat hang thu " << i + 1 << ": \n";
		x[i].NHAP();
	}
	cout << setw(20) << "MA HANG" << setw(20) << "TEN HANG" << setw(15) << "DON GIA"
	     << setw(15) << "SO LUONG" << setw(20) << "THANH TIEN" << endl;
	cout << "------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < n; i++)
		x[i].XUAT();
	return 0;
}

