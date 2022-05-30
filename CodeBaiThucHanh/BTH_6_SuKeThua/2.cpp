#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class LASERPRINTER;
class PRINTER {
	protected:
		float TrongLuong;
		char hangSX[20];
		int namSX;
		int TocDO;
};
class DOTPRINTER:public PRINTER {
		int MatDoKim;
	public:
		void nhap();
		void xuat();
		friend void sua(DOTPRINTER &a, LASERPRINTER &b);
};
void DOTPRINTER::nhap() {
	cout << "Trong Luong: ";
	cin >> TrongLuong;
	cout << "Hang SX ";
	fflush(stdin);
	gets(hangSX);
	cout << "Nam SX: ";
	cin >> namSX;
	cout << "Toc do: ";
	cin >> TocDO;
	cout << "Mat do kim: ";
	cin >> MatDoKim;
}
void DOTPRINTER::xuat() {
	cout << "Trong Luong: " << TrongLuong << endl;
	cout << "Hang SX " << hangSX << endl;
	cout << "Nam SX: " << namSX << endl;
	cout << "Toc do: " << TocDO << endl;
	cout << "Mat do kim: " << MatDoKim << endl;
}
class LASERPRINTER : public PRINTER {
		int DOPHANGIAI;
	public:
		void nhap();
		void xuat();
		friend void sua(DOTPRINTER &a, LASERPRINTER &b);
};
void LASERPRINTER::nhap() {
	cout << "Trong Luong: ";
	cin >> TrongLuong;
	cout << "Hang SX ";
	fflush(stdin);
	gets(hangSX);
	cout << "Nam SX: ";
	cin >> namSX;
	cout << "Toc do: ";
	cin >> TocDO;
	cout << "Do phan giai: ";
	cin >> DOPHANGIAI;
}
void LASERPRINTER::xuat() {
	cout << "Trong Luong: " << TrongLuong << endl;
	cout << "Hang SX " << hangSX << endl;
	cout << "Nam SX: " << namSX << endl;
	cout << "Toc do: " << TocDO << endl;
	cout << "Do phan giai: " << DOPHANGIAI << endl;
}
// Sua lai nam san xuat cua cac may in thanh 2021
void sua(DOTPRINTER &a, LASERPRINTER &b) {
	a.namSX = 2021;
	b.namSX = 2021;
}
int main() {
	DOTPRINTER a;
	LASERPRINTER b;
	cout << "Nhap thong tin may in KIM:" << endl;
	a.nhap();
	cout << "Nhap thong tin may in LASER:" << endl;
	b.nhap();
	cout << endl << "May in Kim vua nhap:" << endl;
	a.xuat();
	cout << "May in Laser vua nhap:" << endl;
	b.xuat();
	sua(a, b);
	cout << endl << "May in Kim vua sua:" << endl;
	a.xuat();
	cout << "May in Laser vua sua:" << endl;
	b.xuat();
	return 0;
}
