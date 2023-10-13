#pragma 
#include"Dat.h"
#include<iostream>
#include<string>
using namespace std;
class DatPhiNongNghiep:public Dat{
private:
	string SoToBanDo;
public:
	DatPhiNongNghiep();
	void Nhap();
	void Xuat();
	float TienThue();
};

