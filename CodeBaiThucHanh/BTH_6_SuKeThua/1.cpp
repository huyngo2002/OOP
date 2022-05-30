#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class PERSON {
	protected:
		char HoTen[30];
		char NgaySinh[10];
		char QueQuan[20];
};
class KYSU:public PERSON {
		char Nganh[15];
		int namTN;
	public:
		void nhap();
		void xuat();
		friend void In(KYSU *a, int n);
};
void KYSU::nhap() {
	cout << "Ho ten: ";
	fflush(stdin);
	gets(HoTen);
	cout << "Ngay sinh: ";
	fflush(stdin);
	gets(NgaySinh);
	cout << "Que quan: ";
	fflush(stdin);
	gets(QueQuan);
	cout << "Nganh: ";
	fflush(stdin);
	gets(Nganh);
	cout << "Nam TN: ";
	cin >> namTN;
}
void KYSU::xuat() {
	cout << "Ho ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Que quan: " << QueQuan << endl;
	cout << "Nganh: " << Nganh << endl;
	cout << "Nam TN: " << namTN << endl << endl;
}
void In(KYSU *a, int n) {
	int Max = a[0].namTN;
	for(int i = 0; i < n; i++)
		if(a[i].namTN > Max) Max = a[i].namTN;
	cout << "KY SU TOT NGHIEP GAN DAY NHAT:" << endl;
	for(int i = 0; i < n; i++)
		if(a[i].namTN == Max) a[i].xuat();
}
int main() {
	KYSU *a;
	int n;
	cout << "n = ";
	cin >> n;
	a = new KYSU[n];
	for(int i = 0; i < n; i++) {
		cout << "Nhap thong tin ky su thu " << i + 1 << ":\n";
		a[i].nhap();
	}
	In(a, n);
	return 0;
}
