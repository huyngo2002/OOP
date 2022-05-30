#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class Mang {
		float* a;
		int n;
	public:
		void nhap();
		void xuat();
		float Max();
		float Min();
};
void Mang::nhap() {
	cout << "Nhap vao so luong phan tu cua mang n: ";
	cin >> n;
	a = new float[n];
	cout << "Nhap vao mang a gom n so thuc:\n";
	for (int i = 0; i < n; i++) {
		cout << "\ta[" << i << "]: ";
		cin >> a[i];
	}
}
void Mang::xuat() {
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
}
float Mang::Max() {
	float mx = a[0];
	for(int i = 0; i < n; i++) {
		if (a[i] > mx)
			mx = a[i];
	}
	return mx;
}
float Mang::Min() {
	float mn = a[0];
	for(int i = 0; i < n; i++) {
		if (a[i] < mn)
			mn = a[i];
	}
	return mn;
}
int main() {
	Mang x;
	x.nhap();
	cout << "Phan tu lon nhat cua mang la: " << x.Max() << endl;
	cout << "Phan tu lon nhat cua mang la: " << x.Min() << endl;
	x.xuat();
	return 0;
}
