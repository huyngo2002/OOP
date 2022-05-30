#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class TTB2 {
		float a, b, c;
	public:
		TTB2();
		TTB2(float x, float y, float z);
		TTB2 operator+(TTB2 y);
		TTB2 operator-(TTB2 y);
		TTB2 operator-();
		friend ostream& operator<<(ostream& x, TTB2 y);
};
TTB2::TTB2() {
	a = b = c = 0;
}
TTB2::TTB2(float x, float y, float z) {
	a = x;
	b = y;
	c = z;
}
TTB2 TTB2::operator+(TTB2 y) {
	TTB2 kq;
	kq.a = a + y.a;
	kq.b = b + y.b;
	kq.c = c + y.c;
	return kq;
}
TTB2 TTB2::operator-(TTB2 y) {
	TTB2 kq;
	kq.a = a - y.a;
	kq.b = b - y.b;
	kq.c = c - y.c;
	return kq;
}
TTB2 TTB2::operator-() {
	TTB2 kq;
	kq.a = -a;
	kq.b = -b;
	kq.c = -c;
	return kq;
}
ostream& operator<<(ostream& x, TTB2 y) {
	x << y.a << " x" << (char)178;
	if(y.b >= 0)  x << " + " << y.b << "x ";
	else    x << " - " << y.b << "x ";
	if(y.c >= 0) x << "+ " << y.c;
	else x << "- " << -y.c;
	return x;
}
int main() {
	TTB2 x(1, 1, 1), y(2, 2, 2);
	x = -x;
	y = -y;
	TTB2 Tong = x + y;
	TTB2 Hieu = x - y;
	ofstream f("TamThuc.txt", ios::out);
	f << "Tam thuc x da dao dau: " << x << endl;
	f << "Tam thuc y da dao dau: " << y << endl;
	f << "Tam thuc tong: " << Tong << endl;
	f << "Tam thuc hieu: " << Hieu << endl;
	f.close();
	return 0;
}
