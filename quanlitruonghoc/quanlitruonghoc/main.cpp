#include"TruongHoc.h"
void main()
{
	TruongHoc a;
	a.nhap();
	a.xuat();
	cout << "diem trung binh cao nhat la: ";
	float maxDiemTrungBinh = a.timDiemTrungBinhCaoNhat();
	cout << maxDiemTrungBinh;
}