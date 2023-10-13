#include "DatPhiNongNghiep.h"
DatPhiNongNghiep::DatPhiNongNghiep() :Dat() {
	SoToBanDo = "";
}
void DatPhiNongNghiep::Nhap() {
	Dat::Nhap();
	cin.ignore();
	cout << "Nhap so to ban do:"; getline(cin, SoToBanDo);
	
 }
void DatPhiNongNghiep::Xuat() {
	cout << "Dat phi nong nghiep !" << endl;
	Dat::Xuat();
	cout << "So to ban do:" << SoToBanDo << endl;
	cout << "Tien thue:" << fixed << TienThue() << endl;
}
float DatPhiNongNghiep::TienThue() {
	return Dat::TienThue();
}