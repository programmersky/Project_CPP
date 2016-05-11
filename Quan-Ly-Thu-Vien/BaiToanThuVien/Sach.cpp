#include "Sach.h"



void Sach::NhapS()
{
	cout << " \n\t\t\t ***NHAP_ Sach*** !!!";
	ANPHAM::NhapAP();
	cout << "\n Danh Sach Tac Gia :  ";
	int LuaChon;
	do {
		int dem = -1;
		string tgia;
		do {
			cout << " \n\t\t\t NHAP TAC GIA !!!";
			cout << " \n\t\t 1. Tac Gia ";
			cout << " \n\t\t 2. Ket Thuc ";
			cout << "\n\n\t LUA CHON :";
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>2) {
				cout << " \n\t\t\t VUI LONG CHON LAI!!!";
			}
		} while (LuaChon < 1 || LuaChon>2);
		if (LuaChon == 1) {
			dem++;
			cin.ignore(100, '\n');
			cout << " \n Tac Gia  :    ";
			cin >> tgia;
			DsTacGia.push_back(tgia);
			cout << "\n Cac Tac Gia : ";
			for (int i = 0; i < DsTacGia.size(); i++) {
				cout << "\n " << DsTacGia[i];
			}
		}
		else
		{
			cout << "\n\t\t\t Ket Thuc Viec Nhap DS Tac Gia!!!";
		}
	}while (LuaChon!=2);
	cout << "\n Nam Xuat Ban :  ";
	cin >> NamXb;
}

void Sach::XuatS()
{
	cout << " \n\t\t\t ***Xuat_ Sach*** !!!";
	ANPHAM::XuatAP();
	cout << "\n\t\t Danh Sach Tac Gia :";
	for (int i = 0; i < DsTacGia.size(); i++) {
		cout <<"\n    "<< DsTacGia[i];
	}
	cout << "\n\t\t Nam Xuat Ban :   " << NamXb;
}

Sach::Sach()

{
}


Sach::~Sach()
{
}
