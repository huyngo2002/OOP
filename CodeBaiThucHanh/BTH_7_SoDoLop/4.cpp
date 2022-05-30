#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class BENHNHAN;
class NGUOI {
	protected:
		char HoTen[30];
		int Tuoi;
	public:
		void nhap();
		void xuat();
		friend void Dem(BENHNHAN *K, int n);
};
void NGUOI::nhap() {
	cout << "Ho ten: ";
	fflush(stdin);
	gets(HoTen);
	cout << "Tuoi : ";
	cin >> Tuoi;
}
void NGUOI::xuat() {
	cout << "Ho ten: " << HoTen << ". Tuoi: " << Tuoi << endl;
}
class BENHVIEN {
		char TENBV[30];
		char DCBV[30];
		NGUOI GD;
		friend class BENHNHAN;
};
class BENHNHAN:public NGUOI {
		char MA[30];
		char TIENSU[30];
		char CHANDOAN[30];
		BENHVIEN x;
	public:
		void nhap();
		void xuat();
		friend void Sua(BENHNHAN *K, int n);
};
void BENHNHAN::nhap() {
	cout << "MA BN: ";
	fflush(stdin);
	gets(MA);
	NGUOI::nhap();
	cout << "TIEN SU: ";
	fflush(stdin);
	gets(TIENSU);
	cout << "CHUAN DOAN:";
	fflush(stdin);
	gets(CHANDOAN);
	cout << "TEN BV: ";
	fflush(stdin);
	gets(x.TENBV);
	cout << "DC BV : ";
	fflush(stdin);
	gets(x.DCBV);
	cout << "Giam doc Benh Vien: " << endl;
	x.GD.nhap();
}
void BENHNHAN::xuat() {
	cout << "MA BN: " << MA << endl;
	NGUOI::xuat();
	cout << "TIEN SU: " << TIENSU << endl;
	cout << "CHUAN DOAN:" << CHANDOAN << endl;
	cout << "TEN BV: " << x.TENBV << endl;
	cout << "DC BV : " << x.DCBV << endl;
	cout << "Giam doc benh vien:" << endl;
	x.GD.xuat();
	cout << endl;
}
void Dem(BENHNHAN *K, int n) {
	int d = 0;
	for(int i = 0; i < n; i++)
		if(K[i].Tuoi > 30) d++;
	cout << "SO BN LON HON 30 TUOI: " << d << endl;
}
void Sua(BENHNHAN *K, int n) {
	for(int i = 0; i < n; i++)
		if(strcmp(K[i].MA, "BN01") == 0)
			K[i].Tuoi = 20;
}
int main() {
	BENHNHAN *K;
	int n;
	cout << "n = ";
	cin >> n;
	K = new BENHNHAN[n];
	for(int i = 0; i < n; i++) {
		cout << "Nhap thong tin benh nhan thu " << i + 1 << ":\n";
		K[i].nhap();
	}
	cout << "Danh sach benh nhan vua nhap:\n";
	for(int i=0; i<n; i++)
		K[i].xuat();
	Dem(K, n);
	cout << "Danh sach benh nhan sau khi sua:\n";
	Sua(K, n);
	for(int i=0; i<n; i++)
		K[i].xuat();
}
