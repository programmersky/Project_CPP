#pragma once
#include"NhanVien.h"

class NVCongNhat : public NhanVien
{
private :
	int NgayCong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	NVCongNhat();
	~NVCongNhat();
};

