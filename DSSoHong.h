#pragma once
#include"DatNongNghiep.h"
#include"DatPhiNongNghiep.h"
#include"Dat.h"
#include<iostream>
#include<string>
using namespace std;
class DSSoHong{
private:
	Dat *dsSoHong[100];
	int soSoHong;
public:
	void Nhap();
	void Xuat();
	void TimKiem();
	void HetHSD();
	void GhiFile();
};

