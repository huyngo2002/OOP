#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class PHANSO {
		float TuSo, MauSo;
	public:
		PHANSO operator+(PHANSO y);
		PHANSO operator-(PHANSO y);
		PHANSO operator*(PHANSO y);
		PHANSO operator/(PHANSO y);
		double operator-();
		friend istream& operator>>(istream& x, PHANSO &y);
		friend ostream& operator<<(ostream& x, PHANSO y);
};
PHANSO PHANSO::operator+(PHANSO y) {
	PHANSO kq;
	kq.TuSo= TuSo*y.MauSo + MauSo*y.TuSo;
	kq.MauSo= MauSo*y.MauSo;
	return kq;
}
PHANSO PHANSO::operator-(PHANSO y) {
	PHANSO kq;
	kq.TuSo = TuSo * y.MauSo - MauSo * y.TuSo;
	kq.MauSo = MauSo * y.MauSo;
	return kq;
}
PHANSO PHANSO::operator*(PHANSO y) {
	PHANSO kq;
	kq.TuSo = TuSo * y.TuSo;
	kq.MauSo = MauSo * y.MauSo;
	return kq;
}
PHANSO PHANSO::operator/(PHANSO y) {
	PHANSO kq;
	kq.TuSo = TuSo * y.MauSo;
	kq.MauSo = MauSo * y.TuSo;
	return kq;
}
double PHANSO::operator-() {
	return (double)TuSo / MauSo;
}
istream& operator>>(istream& x, PHANSO& y) {
	cout << "Nhap tu so: ";
	x >> y.TuSo;
	cout << "Nhap mau so: ";
	x >> y.MauSo;
	return x;
}
ostream& operator<<(ostream& x, PHANSO y) {
	x << y.TuSo << "/" << y.MauSo;
	return x;
}
int main() {
	PHANSO a, b;
	cout << "Nhap phan so thu 1:\n";
	cin >> a;
	cout << "Nhap phan so thu 2:\n";
	cin >> b;
	PHANSO Tong = a + b;
	PHANSO Hieu = a - b;
	PHANSO Tich = a * b;
	PHANSO Thuong = a / b;
	cout << a << " + " << b << " = " << Tong << " = " << -Tong << endl;
	cout << a << " - " << b << " = " << Hieu << " = " << -Hieu << endl;
	cout << a << " * " << b << " = " << Tich << " = " << -Tich << endl;
	cout << a << " : " << b << " = " << Thuong << " = " << -Thuong << endl;
	ofstream f("PhanSo.txt", ios::app);
	f << a << " + " << b << " = " << Tong << " = " << -Tong << endl;
	f << a << " - " << b << " = " << Hieu << " = " << -Hieu << endl;
	f << a << " * " << b << " = " << Tich << " = " << -Tich << endl;
	f << a << " : " << b << " = " << Thuong << " = " << -Thuong << endl;
	f.close();
	/*
	ifstream f1("TENFILE.txt", ios::in);
	char S[200];
	while(!f1.eof())
	{
	f1.getline(S, 200);
	cout<<S<<endl;
	}
	*/
	return 0;
}
