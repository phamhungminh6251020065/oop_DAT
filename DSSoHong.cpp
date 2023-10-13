//Phạm Hùng Minh
//Lớp KTĐTVT K62
//6251020065
#include "DSSoHong.h"
#include<fstream>
void DSSoHong::Nhap() {
	cout << "\t\tNHAP THONG TIN CAC SO HONG" << endl;
	cout << "Nhap so manh dat:"; cin >> soSoHong;
	for (int i = 0; i < soSoHong; i++) {
		cout << "\t\t*************MENU***********" << endl;
		cout << "\t\t** 1.Dat nong nghiep      **" << endl;
		cout << "\t\t** 2.Dat phi nong nghiep  **" << endl;
		cout << "\t\t****************************" << endl;
		int loai;
		cout << "Nhap loai dat:"; cin >> loai;
		cout << "Nhap thong tin so hong thu " << i + 1 << endl;
		if (loai == 1) {
			dsSoHong[i] = new DatNongNghiep();
			dsSoHong[i]->Nhap();
		}
		else if (loai == 2) {
			dsSoHong[i] = new DatPhiNongNghiep();
			dsSoHong[i]->Nhap();
		}
		else {
			cout << "Khong hop le !";
			i--;
		}
		cout << endl;;

	}
}
void DSSoHong::Xuat() {
	cout << "\t\tDANH SACH CAC SO HONG" << endl;
	for (int i = 0; i < soSoHong; i++) {
		cout << "Thong tin dat thu " << i + 1 << endl;
		dsSoHong[i]->Xuat();
		cout << endl;
	}
}
void DSSoHong::TimKiem() {
	string tim;
	cout << "\t\tNHAP SO THUA DAT CAN TIM :";
	cin.ignore();
	getline(cin, tim);
	cout << endl;
	cout << "Thong tin manh danh can tim" << endl;
	bool coDat = false; // Biến kiểm tra có đất nào tìm được không
	for (int i = 0; i < soSoHong; i++) {
		if (dsSoHong[i]->GetSoThuaDat() == tim) {
			coDat = true;
			dsSoHong[i]->Xuat();
			cout << endl;
		}
	}
	if (!coDat) {
		cout << "Khong tim thay !" << endl;
		cout << endl;
	}
}
void DSSoHong::HetHSD() {
	cout << "\t\t DANH SACH CAC SO HONG HET HSD" << endl;
	for (int i = 0; i < soSoHong; i++) {
		DatNongNghiep* dn = dynamic_cast<DatNongNghiep*>(dsSoHong[i]);
		if (dn != nullptr && dn->GetNamHanSD() < 2023) {
			dsSoHong[i]->Xuat();
			cout << endl;
		}
	}
}
void DSSoHong::GhiFile() {
	// Mở file để ghi
	ofstream outfile("danhsach.txt");
	// Chuyển đầu ra của console vào file
	streambuf *coutbuf = cout.rdbuf();
	cout.rdbuf(outfile.rdbuf());
	// In ra kết quả trên console để chuyển vào file
	for (int i = 0; i < soSoHong; i++) {
		cout << "\n-------\n";
		cout << "\nThong tin so hong thu : " << i + 1 << endl;
		dsSoHong[i]->Xuat();
	}
	// Đóng file sau khi ghi
	outfile.close();
	// Chuyển lại đầu ra mặc định của console
	cout.rdbuf(coutbuf);
}