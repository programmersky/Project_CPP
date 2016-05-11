#pragma once
#include"ANPHAM.h"



class CD   :public ANPHAM
{
private	:
	string MoTaNd;
	int NamXb;

public:
	void NhapCD();
	void XuatCD();

	
	CD();
	~CD();
};

