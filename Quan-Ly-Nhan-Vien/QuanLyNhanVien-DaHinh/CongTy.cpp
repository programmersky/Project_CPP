#include "CongTy.h"
  // Hàm Hoán Vị
template <class T>
void HoanVi(T &a,T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

NhanVien *nv;
string Manv;
int Check = 1;
void CongTy::NhapDs()
{
	
	int LuaChon;
	do {
		cout << " \n\t ==========Menu=============";
		cout << " \n\t\t 1. Nhan Vien Cong Nhat   ";
		cout << " \n\t\t 2. Nhan Vien San Xuat    ";
		cout << " \n\t\t 3. Nhan Vien Quan Ly     ";
		cout << " \n\t\t 4. Thoat                 ";
		cout << " \n\t ===========================";		
		do {
			cout << "\n\t\t\t Lua Chon : ...";
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>4) {
				cout << "\n\t\t Chon Lua Khong Hop LI !!!";
			}
		} while (LuaChon < 1 || LuaChon>4);
		//Nhập Mã Nhân Viên;
	
		switch (LuaChon)
			 {
			 case 1:
			 {
				nv = new NVCongNhat;
				break;
			 }
			case 2:
			 {
				nv = new NVSanXuat;
				break;
			 }
		case 3:
		{
			nv = new NVQuanLi;
			break;
		}
		default:
			break;
		}
		if (LuaChon != 4) {
			do {
				Check = 1;
				cout << "\n Ma Nhan Vien : ";
				cin.ignore(100, '\n');
				getline(cin, Manv);
				for (int i = 0; i < DsNhanVien.size(); i++) {
					if (DsNhanVien[i]->GetMa() == Manv)
					{
						Check = 0;
						cout << " \n\t Ma Nhan Vien Khong Duoc Trung : ";
					}
				}
			} while (Check == 0);
			nv->SetMa(Manv);
			nv->Nhap();
			DsNhanVien.push_back(nv);
		}
	} while (LuaChon != 4);
}

void CongTy::XuatDs()
{
	cout << "\n\t\t OUTPUT Thong Tin :D";
	for (int i = 0; i < DsNhanVien.size(); i++) {
		cout << "\n\t Nhan Vien Thu " << i + 1;
		DsNhanVien[i]->Xuat();
	}
}

void CongTy::LuongTangDan()
{
	for (int i = 0; i < DsNhanVien.size() - 1; i++) {
		for (int j = i; j < DsNhanVien.size(); j++)
		{
			if (DsNhanVien[i]->TinhLuong()>DsNhanVien[j]->TinhLuong()) {
				HoanVi(DsNhanVien[i], DsNhanVien[j]);
			}

		}
	}
}

CongTy::CongTy()
{
}


CongTy::~CongTy()
{
}
