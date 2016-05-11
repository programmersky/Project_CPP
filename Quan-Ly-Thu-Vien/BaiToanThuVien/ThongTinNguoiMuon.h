#pragma once
#include"ThongTinLienLac.h"
class ThongTinNguoiMuon
{
private : 
	string Cnmd, HoTen;
	ThongTinLienLac ThongTinLLNguoiMuon;

public:
	void NhapTTNM();
	void XuatTTNM();
	ThongTinNguoiMuon();
	~ThongTinNguoiMuon();
};

