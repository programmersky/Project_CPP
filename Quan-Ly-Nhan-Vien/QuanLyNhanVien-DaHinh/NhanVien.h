#pragma once
#include"Ngay.h"
class NhanVien
{
protected:
	string Ma, HoTen, DiaChi;
	Ngay ngaysinh;

public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong() {
		cout << "\n Khong Co Luong : ";
		return 0;
	};
	void SetMa(string);
	string GetMa();
	NhanVien();
	~NhanVien();
};

