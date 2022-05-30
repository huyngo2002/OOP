#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class ARRAY {
		int *VALUE;
		int n;
	public:
		ARRAY();
		ARRAY(int x);
		~ARRAY();
		void Nhap();
		void Xuat();
};
ARRAY::ARRAY() {
	VALUE = NULL;
	n = 0;
}
ARRAY::ARRAY(int x) {
	n = x;
	VALUE = new int[n];
	for(int i = 0; i < n; i++)
		VALUE[i] = 0;
}
ARRAY::~ARRAY() {
	n = 0;
	delete[] VALUE;
}
void ARRAY::Nhap() {
	if(n == 0) {
		cout << "n = ";
		cin >> n;
	}
	if(VALUE == NULL)
		VALUE = new int[n];
	for(int i = 0; i < n; i++) {
		cout << "VALUE[" << i << "]=";
		cin >> VALUE[i];
	}
}
void ARRAY::Xuat() {
	for(int i = 0; i < n; i++)
		cout << VALUE[i] << "  ";
	cout << endl;
}
int main() {
	ARRAY x(10);
	cout << "Mang vua khoi tao:\n";
	x.Xuat();
	cout << "\nNhap mang:\n";
	x.Nhap();
	cout << "Mang vua nhap:\n";
	x.Xuat();
	system("pause");
	return 0;
}
