#pragma once
#include"nguoi.h"
#include"giaoVien.h"
#include"hocSinh.h"
class TruongHoc
{
private:
	int soLuong;
	nguoi** dsNguoi;
public:
	TruongHoc()
	{
		this->soLuong = 1;
		dsNguoi = new nguoi * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			dsNguoi[i] = NULL;
		}
	}
	~TruongHoc()
	{
		for (int i = 0; i < this->soLuong; i++)
		{
			delete dsNguoi[i];
		}
		delete[]dsNguoi;
	}
	void nhap()
	{
		cout << "nhap so luong: ";
		cin >> this->soLuong;
		dsNguoi = new nguoi * [this->soLuong];
		for (int i = 0; i < this->soLuong; i++)
		{
			string loai = "";
			cout << "chon hocsinh/giaovien: ";
			cin.ignore();
			getline(cin, loai);
			if (loai == "hs") 
				dsNguoi[i] = new hocSinh;
			else if (loai == "gv") 
				dsNguoi[i] = new giaoVien;
			dsNguoi[i]->nhap();
		}
	}
	void xuat()
	{
		for (int i = 0; i < soLuong; i++)
		{
			dsNguoi[i]->xuat();
		}
	}
	float timDiemTrungBinhCaoNhat()
	{

		float max = 0;
			for (int i = 0; i < soLuong; i++)
			{
				string loai = typeid(*this->dsNguoi[i]).name();
				if (loai == "class HocSinh")
				{
					if (max < ((hocSinh*)this->dsNguoi[i])->tinhDiemTrungBinh());
					max = ((hocSinh*)this->dsNguoi[i])->tinhDiemTrungBinh();
				}
				return max;
			}
			return max;
	}
	TruongHoc timHocSinhCoDiemTrungBinhCaoNhat()
	{
hocSinh** dsDTB;
		dsDTB = new hocSinh * [this->soLuong];
	}
	int timThamNienCaoNhat()
	{

	}
	TruongHoc timGiaoVienCoThamNienCaoNhat()
	{

	}

};

