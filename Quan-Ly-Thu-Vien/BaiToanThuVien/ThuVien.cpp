#include "ThuVien.h"



void ThuVien::NhapDSPM()
{
	int LuaChon;
	do
	{
		do {
			cout << " \n\t\t\t*********** _MENU_ ***************";
			cout << "\n\t\t  1. NHAP Danh Sach Phieu Muon   ";
			cout << "\n\t\t  2. DONE !!!           ";
			cout << " \n\t\t\t*********** _MENU_ ***************";
			cout << "\n\n\t\t LUA CHON :";
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>2) {
				cout << "\n VUI LONG CHO DUNG !!!";
			}
		} while (LuaChon < 1 || LuaChon>2);
		switch (LuaChon)
		{
		case 1:
		{
			PhieuMuon x;
		x.NhapPhieuMuon();
		DSPhieuMuon.push_back(x);
		break;
		}
		default:
			cout << " \n\n\n\t\t\t Done!!!!!";
			break;
		}
	} while (LuaChon != 2);
}

void ThuVien::XuatDSPM()
{
	int LuaChon;
	do
	{
		do {
			cout << " \n\t\t\t*********** _MENU_ ***************";
			cout << "\n\t\t  1. XUAT	 Danh Sach Phieu Muon   ";
			cout << "\n\t\t  2. DONE !!!           ";
			cout << " \n\t\t\t*********** _MENU_ ***************";
			cout << "\n\n\t\t LUA CHON :";
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>2) {
				cout << "\n VUI LONG CHO DUNG !!!";
			}
		} while (LuaChon < 1 || LuaChon>2);
		switch (LuaChon)
		{
		case 1: {
			for (int i = 0; i < DSPhieuMuon.size(); i++) {
				cout << "\n\t\t\t Phieu Muon Thu  : " << i + 1;
				DSPhieuMuon[i].XuatPhieuMuon();

			}


		}
		default:
			cout << " \n\n\n\t\t\t Done!!!!!";
			break;
		}
	} while (LuaChon != 2);

}

ThuVien::ThuVien()
{
}


ThuVien::~ThuVien()
{
}
