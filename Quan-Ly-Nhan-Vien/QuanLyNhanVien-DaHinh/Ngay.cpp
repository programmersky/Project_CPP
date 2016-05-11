#include "Ngay.h"



void Ngay::NhapNgay()
{
	cout << " \t Ngay : ";
	cin >> ngay;
	cout << " \n\t Thang : ";
	cin >> thang;
	cout << " \n\t Nam : ";
	cin >> nam;

}

void Ngay::XuatNgay()
{
	cout << " \n\t Ngay " << ngay << " Thang " << thang << " Nam " << nam; 
}

Ngay::Ngay()
{
}


Ngay::~Ngay()
{
}
