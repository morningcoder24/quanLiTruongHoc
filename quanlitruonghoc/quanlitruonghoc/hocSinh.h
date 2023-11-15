#pragma once
#include"nguoi.h"
class hocSinh:public nguoi
{
private:
	float diemToan;
	float diemVan;
	float diemNgoaiNgu;
public:
	void nhap()
	{
		cout << "nhap diem toan: "; cin >> this->diemToan; 
		cout << "nhap diem van: "; cin >> this->diemVan; ;
		cout << "nhap diem anh: "; cin >> this->diemNgoaiNgu; ;
	}
	void xuat()
	{
		cout << "diem toan: "<<  this->diemToan << endl;
		cout << "diem van: "<<  this->diemVan << endl;
		cout << "diem anh: " << this->diemNgoaiNgu << endl;
		cout << "diem trung binh la: " << tinhDiemTrungBinh() << endl;
	}
	float tinhDiemTrungBinh()
	{
		return (this->diemToan+this->diemVan+this->diemNgoaiNgu)/3;
	}
};

