#include"DSSoHong.h"
void Menu() {
	cout << "\t\t*************MENU********************" << endl;
	cout << "\t\t** 1.Nhap thong tin                **" << endl;
	cout << "\t\t** 2.Xuat thong tin                **" << endl;
	cout << "\t\t** 3.Tim dat bang so thua dat      **" << endl;
	cout << "\t\t** 4.Dat het han su dung           **" << endl;
	cout << "\t\t** 5.Ghi file                      **" << endl;
	cout << "\t\t** 6.Thoat chuong trinh            **" << endl;
	cout << "\t\t*************************************" << endl;
}
int main() {
	DSSoHong ds;
	int LuaChon;
	do {
		Menu();
		cout << "Nhap lua chon:"; cin >> LuaChon;
		switch (LuaChon)
		{
		case 1:
			ds.Nhap();
			break;
		case 2:
			ds.Xuat();
			break;
		case 3:
			ds.TimKiem();
			break;
		case 4:
			ds.HetHSD();
			break;
		case 5:
			ds.GhiFile();
			cout << "Ghi thanh cong !" << endl;
			break;
		case 6:
			cout << "Goodbye!\n";
			break;
		default:
			break;
		}
	} while (LuaChon != 6);

	system("pause");
	return 0;
}