#pragma once
#include"Dat.h"
#include<iostream>
class DatNongNghiep:public Dat{
private:
	int NamHanSD;
public:
	DatNongNghiep();
	void Nhap();
	void Xuat();
	float TienThue();
	int GetNamHanSD();
};

