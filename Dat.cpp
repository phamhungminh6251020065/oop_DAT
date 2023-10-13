#include "Dat.h"
Dat::Dat() {
	SoGCN = "";
	HoTenNguoiSD = "";
	SoThuaDat = "";
	DienTich = 0;
	DonGiaThue = 0;
}
void Dat::Nhap() {
	cin.ignore();
	cout << "Nhap so giay chung nhan:"; getline(cin, SoGCN);
	cout << "Nhap ho ten nguoi su dung:"; getline(cin, HoTenNguoiSD);
	cout << "Nhap so thua dat:"; getline(cin, SoThuaDat);
	cout << "Nhap dien tich:"; cin >> DienTich;
	cout << "Nhap don gia thue:"; cin >> DonGiaThue;
	
}
void Dat::Xuat() {
	cout << "So giay chung nhan:" << SoGCN << endl;
	cout << "Ho ten nguoi su dung:" << HoTenNguoiSD << endl;
	cout << "So thua dat:" << SoThuaDat << endl;
	cout << "Dien tich:" << fixed << DienTich << endl;
	cout << "Don gia thue:" << fixed << DonGiaThue << endl;
}
float Dat::TienThue() {
	float s = DienTich * DonGiaThue;
	return s;
}
string Dat::GetSoThuaDat() {
	return SoThuaDat;
}