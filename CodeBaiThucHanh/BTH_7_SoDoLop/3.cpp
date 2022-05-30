#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class KHOA {
		char MAKHOA[20];
		char TENKHOA[20];
		char TRUONGKHOA[20];
		friend class TRUONGDH;
};
class BAN {
		char MABAN[20];
		char TENBAN[20];
		char NGAYTL[20];
		friend class TRUONGDH;
};
class TRUONG {
	protected:
		char MATRUONG[20];
		char TENTRUONG[20];
		char NGAYTL[20];
	public:
		void NHAP();
		void XUAT();
};
class TRUONGDH : private TRUONG {
		KHOA *x;
		int n; //so khoa
		BAN *y;
		int m; //so ban
	public:
		void NHAP();
		void XUAT();
};
void TRUONG::NHAP() {
	cout << "Ma truong: ";
	fflush(stdin);
	gets(MATRUONG);
	cout << "Ten truong: ";
	fflush(stdin);
	gets(TENTRUONG);
	cout << "Ngay TL: ";
	fflush(stdin);
	gets(NGAYTL);
}
void TRUONG::XUAT() {
	cout << "TRUONG: " << endl;
	cout << "Ma truong: " << MATRUONG << endl;
	cout << "Ten truong: " << TENTRUONG << endl;
	cout << "Ngay TL: " << NGAYTL << endl;
}
void TRUONGDH::NHAP() {
	TRUONG::NHAP();
	cout << "Nhap so khoa: ";
	cin >> n;
	x = new KHOA[n];
	for(int i = 0; i < n; i++) {
		cout << "Nhap khoa thu " << i + 1 << endl;
		cout << "Ma khoa: ";
		fflush(stdin);
		gets(x[i].MAKHOA);
		cout << "Ten khoa: ";
		fflush(stdin);
		gets(x[i].TENKHOA);
		cout << "Truong khoa: ";
		fflush(stdin);
		gets(x[i].TRUONGKHOA);
	}
	cout << "Nhap so ban: ";
	cin >> m;
	y = new BAN[m];
	for(int i = 0; i < m; i++) {
		cout << "Nhap ban thu " << i + 1 << endl;
		cout << "Ma ban: ";
		fflush(stdin);
		gets(y[i].MABAN);
		cout << "Ten ban: ";
		fflush(stdin);
		gets(y[i].TENBAN);
		cout << "Ngay TL: ";
		fflush(stdin);
		gets(y[i].NGAYTL);
	}
}
void TRUONGDH::XUAT() {
	TRUONG::XUAT();
	for(int i = 0; i < n; i++) {
		cout << "Khoa thu " << i + 1 << endl;
		cout << "Ma khoa: " << x[i].MAKHOA << endl;
		cout << "Ten khoa: " << x[i].TENKHOA << endl;
		cout << "Truong khoa: " << x[i].TRUONGKHOA << endl << endl;
	}
	for(int i = 0; i < m; i++) {
		cout << "Ban thu " << i + 1 << endl;
		cout << "Ma ban: " << y[i].MABAN << endl;
		cout << "Ten ban: " << y[i].TENBAN << endl;
		cout << "Ngay TL: " << y[i].NGAYTL << endl << endl;
	}
}
int main() {
	TRUONGDH a;
	a.NHAP();
	cout << endl;
	a.XUAT();
	return 0;
}
