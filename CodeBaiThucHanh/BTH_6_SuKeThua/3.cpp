#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class VEHICLE {
	protected:
		char NhanHieu[20];
		int namSX;
		char hangSX[20];
	public:
		void nhap();
		void xuat();
};
class OTO : public VEHICLE {
		int SoCho;
		float DungTich;
	public:
		void nhap();
		void xuat();
		friend void Sua(OTO &a);
};
class MOTO : public VEHICLE {
		int PhanKhoi;
	public:
		void nhap();
		void xuat();
};
void VEHICLE::nhap() {
	cout << "Nhan hieu: ";
	fflush(stdin);
	gets(NhanHieu);
	cout << "Nam SX: ";
	cin >> namSX;
	cout << "Hang SX ";
	fflush(stdin);
	gets(hangSX);
}
void VEHICLE::xuat() {
	cout << "Nhan hieu: " << NhanHieu << endl;
	cout << "Nam SX: " << namSX << endl;
	cout << "Hang SX " << hangSX << endl;
}
void OTO::nhap() {
	VEHICLE::nhap();
	cout << "So cho: ";
	cin >> SoCho;
	cout << "Dung tich: ";
	cin >> DungTich;
}
void OTO::xuat() {
	VEHICLE::xuat();
	cout << "So cho: " << SoCho << endl;
	cout << "Dung tich: " << DungTich << endl;
}
void MOTO::nhap() {
	VEHICLE::nhap();
	cout << "Phan khoi: ";
	cin >> PhanKhoi;
}
void MOTO::xuat() {
	VEHICLE::xuat();
	cout << "Phan khoi: " << PhanKhoi << endl;
}
//  Sua lai dung tich xe oto thanh 3.0
void Sua(OTO &a) {
	a.DungTich = 3.0;
}
int main() {
	OTO a;
	MOTO b;
	cout << "Nhap thong tin OTO:" << endl;
	a.nhap();
	cout << "Nhap thong tin MOTO:" << endl;
	b.nhap();
	cout << endl << "Thong tin OTO vua nhap:" << endl;
	a.xuat();
	cout << "Thong tin MOTO vua nhap:" << endl;
	b.xuat();
	Sua(a);
	cout << endl << "Thong tin OTO vua sua:" << endl;
	a.xuat();
	return 0;
}
