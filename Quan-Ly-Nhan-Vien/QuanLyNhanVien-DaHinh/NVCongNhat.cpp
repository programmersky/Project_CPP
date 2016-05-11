#include "NVCongNhat.h"



void NVCongNhat::Nhap()
{
	NhanVien::Nhap();
	cout << " \n\t Ngay Cong : ";
	cin >> NgayCong;


}

void NVCongNhat::Xuat()
{
	NhanVien::Xuat();
	cout << " \n\t Ngay Cong : " << NgayCong;

}

float NVCongNhat::TinhLuong()
{
	return NgayCong*100;
}

NVCongNhat::NVCongNhat()
{
}


NVCongNhat::~NVCongNhat()
{
}
