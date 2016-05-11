#pragma once
#include<iostream>
#include<string>
using	namespace std;

class ThongTinLienLac
{
private : 
	string DiaChi, DienThoai, Email;

public:
	void NhapTT();
	void XuatTT();

	ThongTinLienLac();
	~ThongTinLienLac();
};

