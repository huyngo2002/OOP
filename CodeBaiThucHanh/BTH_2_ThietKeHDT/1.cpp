#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

class PTB2 {
		float a, b, c;
	public:
		void NHAP();
		void XUAT();
		void GIAI();
};
void PTB2::NHAP() {
	cout << "Nhap cac he so cua phuong trinh: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
}
void PTB2::XUAT() {
	if (a == 1) {
		if(b > 0) {
			if(c > 0)
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " + " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " + " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " + " << b << "X " << c << " = 0" << endl;
		} else if (b == 0) {
			if(c > 0)
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " = 0" << endl;
			else
				cout << "Phuong trinh: " << "X" << (char) 253
				     << c << " = 0" << endl;
		} else {
			if(c > 0)
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << "X" << (char) 253
				     << " " << b << "X " << c << " = 0" << endl;
		}
	} else if (a == -1) {
		if(b > 0) {
			if(c > 0)
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " + " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " + " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " + " << b << "X " << c << " = 0" << endl;
		} else if (b == 0) {
			if(c > 0)
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " = 0" << endl;
			else
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << c << " = 0" << endl;
		} else {
			if(c > 0)
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << "-X" << (char) 253
				     << " " << b << "X " << c << " = 0" << endl;
		}
	} else if (a > 0) {
		if(b > 0) {
			if(c > 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << b << "X " << c << " = 0" << endl;
		} else if (b == 0) {
			if(c > 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " = 0" << endl;
			else
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << c << " = 0" << endl;
		} else {
			if(c > 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " " << b << "X " << c << " = 0" << endl;
		}
	} else if (a < 0) {
		if(b > 0) {
			if(c > 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << b << "X " << c << " = 0" << endl;
		} else if (b == 0) {
			if(c > 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " = 0" << endl;
			else
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << c << " = 0" << endl;
		} else {
			if(c > 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " " << b << "X + " << c << " = 0" << endl;
			else if (c == 0)
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " " << b << "X"<< " = 0" << endl;
			else
				cout << "Phuong trinh: " << a << "X" << (char) 253
				     << " " << b << "X " << c << " = 0" << endl;
		}
	}
}
void PTB2::GIAI() {
	if(a == 0)
		cout << "Day khong phai ptb2" << endl;
	else {
		float delta = b * b - 4 * a * c;
		if(delta < 0)
			cout << "Phuong trinh vo nghiem" << endl;
		else if (delta == 0) {
			cout << "X1 = X2 = " << (-b) / (2 * a) << endl;
		} else {
			cout << "X1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
			cout << "X2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
		}
	}
}
int main() {
	PTB2 x;
	x.NHAP();
	x.XUAT();
	x.GIAI();
	return 0;
}

