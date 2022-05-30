#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

class OTO {
		char MaOto[30];
		double giaMoi;
		int soNamSuDung;
		float tiLeKhauHao;
	public:
		void nhap();
		void xuat();
};
void OTO::nhap() {
	cout << "Nhap ma so cua oto : ";
	fflush(stdin);
	gets(MaOto);
	cout << "Nhap gia moi oto   : ";
	cin >> giaMoi;
	cout << "Nhap so nam su dung: ";
	cin >> soNamSuDung;
	cout << "Nhap ti le khau hao: ";
	cin >> tiLeKhauHao;
}
void OTO::xuat() {
	cout << setw(30) << MaOto << setw(20) << giaMoi
	     << setw(20) << soNamSuDung << setw(20) << tiLeKhauHao
	     << setw(20) << giaMoi * pow((1 - tiLeKhauHao), soNamSuDung) << endl;
}
int main() {
	OTO* x;
	int n;
	cout << "Nhap so luong oto: ";
	cin >> n;
	x = new OTO[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin oto thu " << i + 1 << ":\n";
		x[i].nhap();
	}
	cout << "Cac o to vua nhap\n";
	cout << setw(30) << "Ma oto" << setw(20) << "Gia moi oto"
	     << setw(20) << "So nam su dung" << setw(20) << "Ti le khau hao"
	     << setw(20) << "Gia tri hien tai" << endl;
	for (int i = 0; i < n; i++)
		x[i].xuat();
	return 0;
}

