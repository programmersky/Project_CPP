#include "NVQuanLi.h"



void NVQuanLi::Nhap()
{
	NhanVien::Nhap();
	cout << "\n\t Luong Co Ban : ";
	cin >> LuongCb;
	cout << "\n\t He So Luong  : ";
	cin >> HsLuong;
}

void NVQuanLi::Xuat()
{
	NhanVien::Xuat();
	cout << "\n\t Luong Co Ban : " << LuongCb;
	cout << "\n\t He So Luong  : " << HsLuong;
}

float NVQuanLi::TinhLuong()
{
	return LuongCb*HsLuong;
}

NVQuanLi::NVQuanLi()
{
}


NVQuanLi::~NVQuanLi()
{
}
