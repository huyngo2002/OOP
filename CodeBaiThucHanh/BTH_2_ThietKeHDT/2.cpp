#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class Mang {
		int* a;
		int n;
	public:
		void nhap();
		void xuat();
		void sapxep();
};
void Mang::nhap() {
	cout << "Nhap vao so nguyen n:";
	cin >> n;
	a = new int[n];
	cout << "Nhap vao mang " << n << " so nguyen:\n";
	for(int i = 0; i < n; i++) {
		cout << "\ta[" << i << "]: ";
		cin >> a[i];
	}
}
void Mang::xuat() {
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
}
void Mang::sapxep() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if(a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}
int main() {
	Mang a;
	a.nhap();
	a.sapxep();
	a.xuat();
	return 0;
}

