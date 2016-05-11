#include "Ngay.h"

bool KiemTraNamNhuan(int nam) {
	if ((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0))) {
		return true;
	}
	else
	{
		return false;
	}
}

void Ngay::NhapNgay()
{
	cout << "\n  Nam :  ";
	cin >> nam;
	do {
		cout << " \n Thang : ";
		cin >> thang;
		if (thang < 1 || thang>12) {
			cout << "Vui Long Nhap Thang Chinh Xac !!!";
		}
	} while (thang < 1 || thang>12);
	bool check;
	do {
		check = true;
		cout << " \n Ngay : ";
		cin >> ngay;
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: {
			if (ngay > 31) {
				cout << " Vui long nhap dung ngay !!!";
				check = false;
			}
			break;

		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if (ngay > 30) {
				cout << " Vui Long Nhap Dung Ngay!!!";
				check = false;
			}
		}
		case 2:
		{
			if (KiemTraNamNhuan(nam) == true) {
				if (ngay > 29) {
					cout << "Vui long nhap dung ngay !!!";
					check = false;
				}
			}
			else
			{
				if (ngay > 28) {
					cout << "Vui long nhap dung ngay !!!";
					check = false;
				}
			}
			break;
		}
		default:
			break;
		}
	} while (check == false);
}

void Ngay::XuatNgay()
{
	cout << " \n Ngay " << ngay << " Thang " << thang << " Nam " << nam;
}

Ngay::Ngay()
{
}


Ngay::~Ngay()
{
}
