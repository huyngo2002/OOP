#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class MATRIX {
		int n, m;
		double **a;
	public:
		friend istream& operator>>(istream &x, MATRIX &y);
		friend ostream& operator<<(ostream &x, MATRIX y);
		MATRIX operator+(MATRIX y);
		MATRIX operator-(MATRIX y);
		MATRIX operator-();
};
istream& operator>>(istream &x, MATRIX &y) {
	cout << "n = ";
	x >> y.n;
	cout << "m = ";
	x >> y.m;
	y.a = new double *[y.n];
	for(int i = 0; i < y.n; i++)
		y.a[i] = new double [y.m];
	for(int i = 0; i < y.n; i++)
		for(int j = 0; j < y.m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			x >> y.a[i][j];
		}
	return x;
}
ostream& operator<<(ostream &x, MATRIX y) {
	for(int i = 0; i < y.n; i++) {
		for(int j = 0; j < y.m; j++)
			x << y.a[i][j] << "  ";
		x << endl;
	}
	return x;
}
MATRIX MATRIX::operator+(MATRIX y) {
	MATRIX tg;
	if(m == y.m && n == y.n) {
		tg.n = n;
		tg.m = m;
		tg.a = new double*[n];
		for(int i = 0; i < n; i++)
			tg.a[i] = new double[m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				tg.a[i][j] = a[i][j] + y.a[i][j];
	} else {
		cout << "Hai ma tran khong cung kich thuoc !" << endl;
		tg.n = tg.m = 0;
	}
	return tg;
}
MATRIX MATRIX::operator-(MATRIX y) {
	MATRIX tg;
	if(m == y.m && n == y.n) {
		tg.n = n;
		tg.m = m;
		tg.a = new double*[n];
		for(int i = 0; i < n; i++)
			tg.a[i] = new double[m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				tg.a[i][j] = a[i][j] - y.a[i][j];
	} else {
		cout << "Hai ma tran khong cung kich thuoc !" << endl;
		tg.n = tg.m = 0;
	}
	return tg;
}
MATRIX MATRIX::operator-() {
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			a[i][j] =- a[i][j];
	return *this;
}
int main() {
	MATRIX P, Q;
	cout << "Nhap ma tran P:" << endl;
	cin >> P;
	cout << "Nhap ma tran Q:" << endl;
	cin >> Q;
	P = -P;
	Q = -Q;
	MATRIX M = P + Q;
	MATRIX N = P - Q;
	cout << "Ma tran da doi dau P:" << endl;
	cout << P;
	cout << "Ma tran da doi dau Q:" << endl;
	cout << Q;
	cout << "Ma tran tong: " << endl;
	cout << M;
	cout << "Ma tran hieu: " << endl;
	cout << N;
	ofstream f("MaTran.txt", ios::out);
	f << "Ma tran da doi dau P:" << endl;
	f << P;
	f << "Ma tran da doi dau Q:" << endl;
	f << Q;
	f << "Ma tran tong: " << endl;
	f << M;
	f << "Ma tran hieu: " << endl;
	f << N;
	f.close();
	return 0;
}
