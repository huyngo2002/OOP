#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>
using namespace std;
class MANG {
		int n;
		float *Value;
	public:
		friend istream& operator>>(istream &x, MANG &y);
		friend ostream& operator<<(ostream &x, MANG y);
		MANG operator++();
		MANG operator--();
};
istream& operator>>(istream &x, MANG &y) {
	cout << "Nhap n = ";
	x >> y.n;
	y.Value = new float[y.n];
	for(int i = 0; i < y.n; i++)
		x >> y.Value[i];
	return x;
}
ostream& operator<<(ostream &x, MANG y) {
	for(int i = 0; i < y.n; i++)
		x << y.Value[i] << "  ";
	x << endl;
}
MANG MANG::operator++() {
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(Value[i] > Value[j])
				swap(Value[i], Value[j]);
		}
	}
	return *this;
}
MANG MANG::operator--() {
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(Value[i] < Value[j])
				swap(Value[i], Value[j]);
		}
	}
	return *this;
}
int main() {
	MANG k;
	cin>>k;
	k = ++k;
	cout << "Mang sap xep tang:\n";
	cout << k;
	--k;
	cout << "\nMang sap xep giam: \n";
	cout << k;
	return 0;
}
