#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
class SinhVien {
		char maSV[20];
		char hoTen[30];
		float diemToan, diemLy, diemHoa;
	public:
		void nhap();
		void xuat();
		friend void sapTongDiem(SinhVien* x, int n);
};
void SinhVien::nhap() {
	cout << "Nhap ma sinh vien    : ";
	fflush(stdin);
	gets(maSV);
	cout << "Nhap ho ten sinh vien: ";
	fflush(stdin);
	gets(hoTen);
	cout << "Nhap diem toan       : ";
	cin >> diemToan;
	cout << "Nhap diem ly         : ";
	cin >> diemLy;
	cout << "Nhap diem hoa        : ";
	cin >> diemHoa;
}
void SinhVien::xuat() {
	cout << setw(20) << maSV << setw(30) << hoTen << setw(10) << diemToan
	     << setw(10) << diemLy << setw(10) << diemHoa << setw(10) << diemToan + diemLy + diemHoa << endl;
}
void sapTongDiem(SinhVien* x, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if((x[i].diemToan + x[i].diemLy + x[i].diemHoa) > (x[j].diemToan + x[j].diemLy + x[j].diemHoa)) {
				swap(x[i], x[j]);
			}
		}
	}
}
int main() {
	SinhVien* x;
	int n;
	cout<<"Nhap so luong sinh vien n: ";
	cin >> n;
	x = new SinhVien[n];
	for(int i = 0; i < n; i++) {
		cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
		x[i].nhap();
	}
	sapTongDiem(x,n);
	cout << setw(20) << "Ma SV" << setw(30) << "Ho ten" << setw(10) << "Diem toan"
	     << setw(10) << "Diem ly" << setw(10) << "Diem hoa" << setw(10) << "Tong diem" << endl;
	for(int i = 0; i < n; i++)
		x[i].xuat();
	return 0;
}
