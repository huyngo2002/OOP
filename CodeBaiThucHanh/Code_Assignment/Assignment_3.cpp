#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class PHANSO {
		double TuSo, MauSo;
	public:
		PHANSO();
		PHANSO(float x, float y);
		PHANSO operator*(PHANSO y);
		double operator-();
		friend istream& operator>>(istream &x, PHANSO &y);
		friend ostream& operator<<(ostream &x, PHANSO y);
};
PHANSO::PHANSO() {
	TuSo = MauSo = 1;
}
PHANSO::PHANSO(float x, float y) {
	TuSo = x;
	MauSo = y;
}
PHANSO PHANSO::operator*(PHANSO y) {
	PHANSO result;
	result.TuSo = TuSo * y.TuSo;
	result.MauSo = MauSo * y.MauSo;
	return result;
}
double PHANSO::operator-() {
	return TuSo / MauSo;
}
istream& operator>>(istream &x, PHANSO &y) {
	cout << "Nhap tu so = ";
	x >> y.TuSo;
	cout << "Nhap mau so = ";
	x >> y.MauSo;
	return x;
}
ostream& operator<<(ostream &x, PHANSO y) {
	x << y.TuSo << "/" << y.MauSo;
	return x;
}
int main() {
	PHANSO a,b;
	cout << "Nhap phan so a:\n";
	cin >> a;
	cout << "Nhap phan so b:\n";
	cin >> b;
	PHANSO Tich = a * b;
	ofstream f("PHANSO.txt", ios::app);
	f << a << " * " << b << " = " << Tich << " = " << -Tich << endl;
	f.close();
	return 0;
}
