#include "NVSanXuat.h"



void NVSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "\n\t So San Pham : ";
	cin >> SoSanPham;
}

void NVSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "\n\t So San Pham : " << SoSanPham;
}

float NVSanXuat::TinhLuong()
{
	return SoSanPham*50;
}

NVSanXuat::NVSanXuat()
{
}


NVSanXuat::~NVSanXuat()
{
}
