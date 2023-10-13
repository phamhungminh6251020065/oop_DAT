#pragma once
#include<iostream>
#include<string>
using namespace std;
class Dat{
protected:
	string SoGCN, HoTenNguoiSD, SoThuaDat;
	float DienTich, DonGiaThue;
public:
	Dat();
	virtual void Nhap();
	virtual void Xuat();
	virtual float TienThue();
	string GetSoThuaDat();
};

