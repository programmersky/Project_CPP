#pragma once
#include<iostream>
#include<string>
using namespace std;
class ANPHAM
{
protected:
	string MaSoAP, Tua;
	int NamXb, TinhTrang;
public:
	void NhapAP();
	void XuatAP();
	ANPHAM();
	~ANPHAM();
};

