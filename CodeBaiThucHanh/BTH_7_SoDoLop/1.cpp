#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class DATE {
		int D, M, Y;
	public:
		void NHAP();
		void XUAT();
		friend class TIVI;
};
class NSX {
		char TENNSX[20];
		char DCNSX[20];
	public:
		void NHAP();
		void XUAT();
		friend class HANG ;
};
class HANG {
	protected:
		char TENHANG[20];
		NSX x;
		float DONGIA ;
	public:
		void NHAP();
		void XUAT();
		HANG() ;
};
class TIVI : public HANG {
		float KICHTHUOC;
		DATE NGAYNHAP;
	public:
		void NHAP();
		void XUAT();
		TIVI();
};
HANG::HANG() {
	strcpy(TENHANG, "");
	strcpy(x.TENNSX, "");
	strcpy(x.DCNSX, "");
	DONGIA = 0;
}
TIVI::TIVI():HANG() {
	KICHTHUOC = 0;
	NGAYNHAP.D = NGAYNHAP.M = NGAYNHAP.Y = 0;
}
void DATE::NHAP() {
	cout << "Ngay : ";
	cin >> D;
	cout << "Thang: ";
	cin >> M;
	cout << "Nam: ";
	cin >> Y;
}
void DATE::XUAT() {
	cout << D << "/" << M << "/" << Y;
}
void NSX::NHAP() {
	cout << "Ten NSX: ";
	fflush(stdin);
	gets(TENNSX);
	cout << "Dia chi: ";
	fflush(stdin);
	gets(DCNSX);
}
void NSX::XUAT() {
	cout << "Ten NSX: " << TENNSX << endl;
	cout << "Dia chi: " << DCNSX << endl;
}
void HANG::NHAP() {
	cout << "Ten hang: ";
	fflush(stdin);
	gets(TENHANG);
	x.NHAP();
	cout << "Don gia:";
	cin >> DONGIA;
}
void HANG::XUAT() {
	cout << "Ten hang: " << TENHANG << endl;
	x.XUAT();
	cout << "Don gia : " << DONGIA << endl ;
}
void TIVI::NHAP() {
	HANG::NHAP();
	cout << "Kich thuoc: ";
	cin >> KICHTHUOC;
	NGAYNHAP.NHAP();
}
void TIVI::XUAT() {
	HANG::XUAT();
	cout << "Kich thuoc: " << KICHTHUOC << endl;
	NGAYNHAP.XUAT();
}
int main() {
	TIVI P;
	P.NHAP();
	cout << "Thong tin TIVI vua nhap:" << endl;
	P.XUAT();
	return 0;
}
