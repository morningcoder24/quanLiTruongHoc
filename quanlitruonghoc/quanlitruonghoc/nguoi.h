#pragma once
#include<iostream>
#include<string>
using namespace std;
class nguoi
{
protected:
	string hoTen;
	int namSinh;
	string noiSinh;
	string diaChi;
public:
	virtual void nhap() = 0;
	virtual void xuat() = 0;
};

