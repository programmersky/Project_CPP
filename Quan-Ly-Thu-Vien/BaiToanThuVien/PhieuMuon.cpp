#include "PhieuMuon.h"



void PhieuMuon::NhapPhieuMuon()
{
	int LuaChon;
	do
	{
	do {
		cout << " \n\t\t\t ****** NHAP_ PHIEU MUON *******";
		cout << "\n\t\t  1. Phieu Muon Sach    ";
		cout << "\n\t\t  2. Phieu Muon CD      ";
		cout << "\n\t\t  3. Phieu Muon Tap Chi ";
		cout << "\n\t\t  4. DONE !!!           ";
		cout << " \n\t\t\t ****** NHAP_ PHIEU MUON *******";
		cout << "\n\n\t\t LUA CHON :";
		cin >> LuaChon;
		if (LuaChon < 1 || LuaChon>4) {
			cout << "\n VUI LONG CHO DUNG !!!";
		}
	  } while(LuaChon < 1 || LuaChon>4);
	  switch (LuaChon)
	  {
	  case 1:
	  {	  cout << " \n\t\t\t Muon Sach !!!";
		  cout << "\n Ma Phieu Muon : ";
		  cin >> MaPhieuMuon;
		  cout << "\n Ngay Muon     : ";
		  NgayMuon.NhapNgay();
		  cout << "\n Ngay  Tra     : ";
		  NgayTra.NhapNgay();
		  cout << "\n Thong Tin : ";
		  ThongTin.NhapTTNM();
		  Sach s;
		  s.NhapS();
		  DsSach.push_back(s);
		  break;
	  }
	  case 2 :
	  {	
		  cout << "\n\t\t\t Muon CD :";
		  cout << "\n Ma Phieu Muon : ";
		  cin >> MaPhieuMuon;
		  cout << "\n Ngay Muon     : ";
	      NgayMuon.NhapNgay();
	      cout << "\n Ngay  Tra     : ";
	      NgayTra.NhapNgay();
	      cout << "\n Thong Tin : ";
	      ThongTin.NhapTTNM();
	      CD cd;
	      cd.NhapCD();
	      DsCD.push_back(cd);
	      break;
	  }
	  case 3 :
	  {
		  cout << "\n\t\t\t Muon Tap Chi :";
		  cout << "\n Ma Phieu Muon : ";
		  cin >> MaPhieuMuon;
		  cout << "\n Ngay Muon     : ";
		  NgayMuon.NhapNgay();
		  cout << "\n Ngay  Tra     : ";
		  NgayTra.NhapNgay();
		  cout << "\n Thong Tin : ";
		  ThongTin.NhapTTNM();
		  TapChi tc;
		  tc.NhapTC();
		  DsTc.push_back(tc);
		  break;
	  }
		
	  default:
		  cout << "KET THUC VIEC NHAP PHIEU MUON";
		  break;
	  }
	} while (LuaChon!=4);

}
 // Xuat
void PhieuMuon::XuatPhieuMuon()
{
	int LuaChon;
	do
	{
		do {
			cout << " \n\t\t\t ****** IN_ PHIEU MUON *******";
			cout << "\n\t\t  1. Danh Sach Phieu Muon Sach    ";
			cout << "\n\t\t  2. Danh Sach Phieu Muon CD      ";
			cout << "\n\t\t  3. Danh Sach Phieu Muon Tap Chi ";
			cout << "\n\t\t  4. DONE !!!           ";
			cout << " \n\t\t\t ****** IN_ PHIEU MUON *******";
			cout << "\n\n\t\t LUA CHON :";
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon>4) {
				cout << "\n VUI LONG CHO DUNG !!!";
			}
		} while (LuaChon < 1 || LuaChon>4);
		switch (LuaChon)
		{
		case 1:
		{	  cout << " \n\t\t\t Phieu Muon Sach !!!";
		cout << "\n Ma Phieu Muon : ";
		cout << MaPhieuMuon;
		cout << "\n Ngay Muon     : ";
		NgayMuon.XuatNgay();
		cout << "\n Ngay  Tra     : ";
		NgayTra.XuatNgay();
		cout << "\n Thong Tin : ";
		ThongTin.XuatTTNM();
		for (int i = 0; i < DsSach.size(); i++) {
			cout << "\n Sach Thu : " << i + 1;
			 DsSach[i].XuatS();
		}
		break;
		}
		case 2:
		{
			{	  cout << " \n\t\t\t Phieu Tap Chi !!!";
			cout << "\n Ma Phieu Muon : ";
			cout << MaPhieuMuon;
			cout << "\n Ngay Muon     : ";
			NgayMuon.XuatNgay();
			cout << "\n Ngay  Tra     : ";
			NgayTra.XuatNgay();
			cout << "\n Thong Tin : ";
			ThongTin.XuatTTNM();
			for (int i = 0; i < DsTc.size(); i++) {
				cout << "\n Tap Chi Thu : " << i + 1;
				DsTc[i].XuatTC();
			}
			break;
			}
		}
		case 3:
		{
			{	
			cout << " \n\t\t\t Phieu Muon CD !!!";
			cout << "\n Ma Phieu Muon : ";
			cout << MaPhieuMuon;
			cout << "\n Ngay Muon     : ";
			NgayMuon.XuatNgay();
			cout << "\n Ngay  Tra     : ";
			NgayTra.XuatNgay();
			cout << "\n Thong Tin : ";
			ThongTin.XuatTTNM();
			for (int i = 0; i < DsCD.size(); i++) {
				cout << "\n CD Thu : " << i + 1;
				DsCD[i].XuatCD();
			}
			break;
			}
		}

		default:
			cout << " KET THUC VIEC XUAT T : ";
			break;
		}
	} while (LuaChon != 4);
}

PhieuMuon::PhieuMuon()
{
}


PhieuMuon::~PhieuMuon()
{
}
