#include "CD.h"






void CD::NhapCD()
{
	ANPHAM::NhapAP();
	cout << " \n\t Mo Ta Noi Dung : ";
	cin >> MoTaNd;
	cout << " \n\t Nam Xuat Ban : ";
	cin >> NamXb;
}

void CD::XuatCD()
{
	ANPHAM::XuatAP();
	cout << " \n\t\t\t ***IN_ CD*** ";
	cout << " \n\t Mo Ta Noi Dung : ";
	cout << MoTaNd;
	cout << " \n\t Nam Xuat Ban : ";
	cout << NamXb;
}
CD::CD()
{
}
CD::~CD()
{
}
