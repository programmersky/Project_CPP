#include "NhanVien.h"



void NhanVien::Nhap()
{
	cin.ignore(100, '\n');
	cout << endl;
	cout << "\t Ten     : ";
	getline(cin, HoTen);
	cout << endl;
	ngaysinh.NhapNgay();
	cout << "\n\t Dia Chi : ";
	cin.ignore(100, '\n');
	getline(cin, DiaChi);
}

void NhanVien::Xuat()
{
	cout << "\n\t  Ten :  " << HoTen << endl;
	cout << " \n\t DiaChi : " << DiaChi<<endl ;
	ngaysinh.XuatNgay();
}

void NhanVien::SetMa(string str)
{
	Ma = str;
}

string NhanVien::GetMa()
{
	return Ma;
}

NhanVien::NhanVien()
{
}


NhanVien::~NhanVien()
{
}
