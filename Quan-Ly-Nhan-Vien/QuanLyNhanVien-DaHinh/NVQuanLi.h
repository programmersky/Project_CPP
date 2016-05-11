#pragma once
#include"NhanVien.h"
class NVQuanLi	  :public NhanVien
{
private : 
	float LuongCb, HsLuong;

public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	NVQuanLi();
	~NVQuanLi();
};

