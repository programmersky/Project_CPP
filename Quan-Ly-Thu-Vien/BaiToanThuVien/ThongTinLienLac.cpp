#include "ThongTinLienLac.h"



void ThongTinLienLac::NhapTT()
{
	cout << "\n\t\t\t NHAP_ Thong Tin Lien Lac !!!";
	cout << "\n   Dia Chi : ";
	cin >> DiaChi;
	cin.ignore(100, '\n');
	cout << " \n  Dien Thoai : ";
	cin >> DienThoai;
	cin.ignore(100, '\n');
	cout << " \n  Email : ";
	cin >> Email;
}

void ThongTinLienLac::XuatTT()
{
	cout << " \n IN_ Thong Tin Lien Lac ";
	cout << "\n  Dia Chi     :  " << DiaChi;
	cout << "\n  Dien Thoai  :  " << DienThoai;
	cout << "\n  Email       :  " << Email;
}

ThongTinLienLac::ThongTinLienLac()
{
}


ThongTinLienLac::~ThongTinLienLac()
{
}
