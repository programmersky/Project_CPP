#include "ANPHAM.h"



void ANPHAM::NhapAP()
{
	cout << " \n Ma So AP                    : ";
	cin >> MaSoAP;
	cin.ignore(100, '\n');
	cout << " \n Tua                         : ";
	cin >> Tua;
	cin.ignore(100, '\n');
	cout << " \n Nam Xuat Ban                : ";
	cin >> NamXb;
	cout << " \n Tinh Trang 1. Co / 2. Khong : ";
	cin >> TinhTrang;

}

void ANPHAM::XuatAP()
{
	cout << " \n Ma So AP                    : ";
	cout << MaSoAP;
	cout << " \n Tua                         : ";
	cout << Tua;
	cout << " \n Nam Xuat Ban                : ";
	cout << NamXb;
	cout << " \n Tinh Trang                  : ";
	cout << TinhTrang;
}

ANPHAM::ANPHAM()
{
}


ANPHAM::~ANPHAM()
{
}
