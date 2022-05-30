#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class HANG;
class DATE {
		int D;
		int M;
		int Y;
		friend class HANG;
		friend void IN(HANG *k, int n);
};
class HANG {
		char Mahang[30];
		char Tenhang[30];
		DATE x;
	public:
		void nhap();
		void xuat();
		friend void IN(HANG *k, int n);
};
void HANG::nhap() {
	cout << "Nhap ma hang:";
	fflush(stdin);
	cin.getline(Mahang, 30);
	cout << "Nhap ten hang:";
	fflush(stdin);
	cin.getline(Tenhang,30);
	cout << "Nhap ngay:";
	cin >> x.D;
	cout << "Nhap thang:";
	cin >> x.M;
	cout << "Nhap nam:";
	cin >> x.Y;
}
void HANG::xuat() {
	cout << setw(15) << Mahang << setw(15) << Tenhang << setw(15) << x.D << "/" << x.M << "/" << x.Y << endl;
}
void IN(HANG *k, int n) {
	for(int i = 0; i < n; i++)
		if(k[i].x.Y == 2017)
			k[i].xuat();
}
int main() {
	int n;
	cout<<"Nhap so mat hang:";
	cin>>n;
	HANG *k = new HANG[n];
	for(int i = 0; i < n; i++) {
		cout << "Nhap thong tin mat hang thu " << i + 1 << ":\n";
		k[i].nhap();
	}
	cout << setw(40) << "Thong tin mat hang" << endl;
	cout << setw(15) << "Ma hang" << setw(15) << "Ten hang" << setw(15) << "Ngay san xuat" << endl;
	for(int i = 0; i < n; i++)
		k[i].xuat();
	cout << "Thong tin mat hang nam 2017" << endl;
	IN(k,n);
}
