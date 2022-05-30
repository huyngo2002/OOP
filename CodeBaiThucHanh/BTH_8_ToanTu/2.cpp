#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class SOPHUC {
		float PhanThuc, PhanAo;
	public:
		SOPHUC();
		SOPHUC(float x, float y);
		friend ostream& operator<<(ostream& x, SOPHUC y);
		SOPHUC operator+(SOPHUC y);
		SOPHUC operator-(SOPHUC y);
};
SOPHUC::SOPHUC() {
	PhanThuc = PhanAo = 0;
}
SOPHUC::SOPHUC(float x, float y) {
	PhanThuc = x;
	PhanAo = y;
}
ostream& operator<<(ostream& x, SOPHUC y) {
	x << y.PhanThuc << " + " << y.PhanAo << "i";
	return x;
}
SOPHUC SOPHUC::operator+(SOPHUC y) {
	SOPHUC kq;
	kq.PhanThuc = PhanThuc + y.PhanThuc;
	kq.PhanAo = PhanAo + y.PhanAo;
	return kq;
}
SOPHUC SOPHUC::operator-(SOPHUC y) {
	SOPHUC kq;
	kq.PhanThuc = PhanThuc - y.PhanThuc;
	kq.PhanAo = PhanAo - y.PhanAo;
	return kq;
}
int main() {
	SOPHUC a(1, 1);
	SOPHUC b(2, 2);
	SOPHUC c = a + b;
	SOPHUC d = a - b;
	cout << "So phuc a = " << a << endl;
	cout << "So phuc b = " << b << endl;
	cout << "a + b = " << c << endl;
	cout << "a - b = " << d << endl;
	ofstream f("SOPHUC.txt", ios::app);
	f << "So phuc a = " << a << endl;
	f << "So phuc b = " << b << endl;
	f << "a + b = " << c << endl;
	f << "a - b = " << d << endl;
	f.close();
	return 0;
}
