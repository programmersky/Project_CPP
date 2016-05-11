#include "TapChi.h"



void TapChi::NhapTC() 
{
	ANPHAM::NhapAP();
	cout << " \n So An Pham : ";
	cin >> SoAP;
}

void TapChi::XuatTC()
{
	ANPHAM::XuatAP();
	cout << " \n So An Pham : ";
	cout << SoAP;
}

TapChi::TapChi()
{
}


TapChi::~TapChi()
{
}
