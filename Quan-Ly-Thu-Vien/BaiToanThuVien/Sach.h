#pragma once
#include"ANPHAM.h"
#include<vector>
class Sach :public ANPHAM
{
private : 
	vector<string> DsTacGia;
	string NhaXB;

public:
	void NhapS();
	void XuatS();
	Sach();
	~Sach();
};

