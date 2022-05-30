#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class ELECTRONIC {
	protected:
		float CongSuat;
		int DienAp;
	public:
		ELECTRONIC(float a, int b);
};
class MAYGIAT : public ELECTRONIC {
		float DungTich;
		char Loai[20];
	public:
		MAYGIAT(float a, int b, float c, char*d);
		void xuat();
};
class TULANH : public ELECTRONIC {
		float DungTich;
		int SoNgan;
	public:
		TULANH(float a, int b, float c, int d);
		void xuat();
};
void MAYGIAT::xuat() {
	cout << "Cong suat: " << CongSuat << endl;
	cout << "Dien ap : " << DienAp << endl;
	cout << "Dung tich: " << DungTich << endl;
	cout << "Loai: " << Loai << endl << endl;
}
void TULANH::xuat() {
	cout << "Cong suat: " << CongSuat << endl;
	cout << "Dien ap : " << DienAp << endl;
	cout << "Dung tich: " << DungTich << endl;
	cout << "So ngan: " << SoNgan << endl << endl;
}
ELECTRONIC::ELECTRONIC(float a, int b) {
	CongSuat = a;
	DienAp = b;
}
MAYGIAT::MAYGIAT(float a, int b, float c, char*d):ELECTRONIC(a, b) {
	DungTich = c;
	strcpy(Loai, d);
}
TULANH::TULANH(float a, int b, float c, int d):ELECTRONIC(a, b) {
	DungTich = c;
	SoNgan = d;
}
int main() {
	MAYGIAT a(100, 100, 100, "100");
	TULANH b(100, 100, 100, 100);
	cout << "Thong tin may giat:" << endl;
	a.xuat();
	cout << "Thong tin tu lanh:" << endl;
	b.xuat();
	return 0;
}
