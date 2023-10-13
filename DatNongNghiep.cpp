#include "DatNongNghiep.h"
DatNongNghiep::DatNongNghiep() :Dat() {
	NamHanSD = 0;
}
void DatNongNghiep::Nhap() {
	Dat::Nhap();
	cout << "Nhap han su dung dat:"; cin >> NamHanSD; 
}
void DatNongNghiep::Xuat() {
	cout << "Dat nong nghiep !" << endl;
	Dat::Xuat();
	cout << "Han su dung dat:" << NamHanSD << endl;
	cout << "Tien thue:" << fixed << TienThue() << endl;
}
float DatNongNghiep::TienThue() {
	return Dat::TienThue();
}
int DatNongNghiep::GetNamHanSD() {
	return NamHanSD;
}