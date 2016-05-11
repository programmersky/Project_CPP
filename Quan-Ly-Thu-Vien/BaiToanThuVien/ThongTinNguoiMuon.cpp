#include "ThongTinNguoiMuon.h"
void ThongTinNguoiMuon::NhapTTNM()
{
	cout << " \n NHAP_ Thong Tin Nguoi Muon !!!";
	cout << " \n Chung Minh Nhan Dan : ";
	cin >> Cnmd;
	cin.ignore(100, '\n');
	cout << " \n Ho Ten              : ";
	cin >> HoTen;
	cin.ignore(100, '\n');
	ThongTinLienLac ttll;
	ttll.NhapTT();
}

void ThongTinNguoiMuon::XuatTTNM()
{
	cout << " \n\t\t\t IN_ Thong Tin Nguoi Muon !!!";
	cout << " \n Chung Minh Nhan Dan : ";
	cout << Cnmd;
	cout << " \n Ho Ten              : ";
	cout << HoTen;
	ThongTinLienLac ttll;
	ttll.XuatTT();

}

ThongTinNguoiMuon::ThongTinNguoiMuon()
{
}


ThongTinNguoiMuon::~ThongTinNguoiMuon()
{
}
