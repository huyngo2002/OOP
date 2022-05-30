#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class PTB2 {
		float a, b, c;
	public:
		void Nhap();
		void Xuat();
		void Giai();
		PTB2();
		PTB2(float x, float y, float z);
};
void PTB2::Nhap() {
	cout << "Nhap cac he so:\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
}
void PTB2::Xuat() {
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
void PTB2::Giai() {
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
PTB2::PTB2() {
	a = b = c = 0;
}
PTB2::PTB2(float x, float y, float z) {
	a = x;
	b = y;
	c = z;
}
int main() {
	PTB2 P(1,2,1);
	P.Xuat();
	P.Giai();
	PTB2 Q;
	Q.Nhap();
	Q.Xuat();
	Q.Giai();
	system("pause");
	return 0;
}
