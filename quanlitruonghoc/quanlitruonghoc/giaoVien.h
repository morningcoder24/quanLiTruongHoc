#pragma once
#include"nguoi.h"
class giaoVien :public nguoi
{
private:
	int namBatDau;
	string chuyenMon;
public:
	void nhap()
	{
		cout << "nhap nam bat dau: "; cin >> this->namBatDau;
		cout << "nhap chuyen mon: "; cin >> this->chuyenMon; 
	}
	void xuat()
	{
		cout << "nam bat dau: " << this->namBatDau << endl;
		cout << "chuyen mon la: " << this->chuyenMon << endl;
		cout << "tham nien cua giao vien la: " << tinhThamNien() << endl;
	}
	int tinhThamNien()
	{
		int namHientai;
		tm today;
		time_t ltime;
		time(&ltime);
		localtime_s(&today, &ltime);
		namHientai = today.tm_year + 1900;
		return namHientai - this->namBatDau;
	}
};

