#include "XuLyFile.h"
bool Solo(QuanLinh *a, QuanLinh*b) {
	if ((a->GetDefend() > b->GetAttack()) || a->GetAttack() >= b->GetDefend()) {
		return true;
	}
	else
	{
		if (a->GetStregth() > b->GetStregth()) {
			return true;
		}
		else
		{
			return false;
		}
	}
}
void ChienThang(QuanLinh*ptr) {
	ptr->SetAttack(ptr->GetAttack() - 20);
	ptr->SetDefend(ptr->GetDefend() - 20);
}
void ThuaCuoc(QuanLinh*ptr){

	ptr->SetAttack(0);
	ptr->SetDefend(0);
}
// Neu Trả về 1 tức là quân A thắng,
int TuongDanh(vector<QuanLinh*> a,vector<QuanLinh*> b, int vitriquancon) {

		int kiemtra;//1 la ket thuc 0 la tiep tuc
		int chienthang;//1 La A, 2 La B
		do {
			kiemtra = 0;
			if (Solo(a[0], b[vitriquancon]) == true) {
				ChienThang(a[0]);
				ThuaCuoc(b[vitriquancon]);
				vitriquancon++;
				if (vitriquancon > b.size() - 1) {
					if (Solo(a[0], b[0])) {
						ChienThang(a[0]);
						ThuaCuoc(b[0]);
						chienthang = 1;
						return chienthang;
						kiemtra = 1;
					}
					else
					{
						ChienThang(b[0]);
						ThuaCuoc(a[0]);
						chienthang = 0;
						return chienthang;
						kiemtra = 1;
					}
				}
			}
			else
			{
				ChienThang(b[vitriquancon]);
				ThuaCuoc(a[0]);
				chienthang = 0;
				kiemtra = 1;
			}
		} while (kiemtra != 1);
	}	
void XuLyFile::XuLy()
{
	FileIn.open("INPUT.txt", ios::in);
	string team, name, na;
	int soluong;
	// Xử Lí Lấy vào File Đội 1
	FileIn >> team;
	infoteam.push_back(team);
	FileIn >> name;
	infoteam.push_back(name);
	FileIn >> soluong;
	for (int i = 0; i < soluong; i++) {
		QuanLinh *ql1 = NULL;
		FileIn >> na;
		if (na == "AG") {
			ql1 = new ArmyGarena;
		}
		else
		{
			if (na == "K") {
				ql1 = new Knight;
			}
			else
			{
				if (na == "V") {
					ql1 = new Valiant;
				}
				else
				{
					ql1 = new ArCher;
				}
			}
		}
		ql1->Nhap(FileIn);
		QA.push_back(ql1);
	}
	// Xử Lí Lấy vào File Đội 2
	FileIn >> team;
	infoteam.push_back(team);
	FileIn >> name;
	infoteam.push_back(name);
	FileIn >> soluong;
	for (int k = 0; k < soluong; k++) {
		QuanLinh *ql2 = NULL;
		FileIn >> na;
		if (na == "AG") {
			ql2 = new ArmyGarena;
		}
		else
		{
			if (na == "K") {
				ql2 = new Knight;
			}
			else
			{
				if (na == "V") {
					ql2 = new Valiant;
				}
				else
				{
					ql2 = new ArCher;
				}
			}
		}
		ql2->Nhap(FileIn);
		QB.push_back(ql2);
	}
	for (int h = 0; h < infoteam.size(); h++) {
		cout << "\n\t " << infoteam[h];
	}
	// xử lý thay đổi do trang bị và tướng quân đội 1
	for (int i = 0; i < QA.size(); i++) {
		cout << "\n\t";
		if (QA[i]->GetExp() == 0) {
			QA[i]->SetAttack(QA[i]->GetAttack() / 2);
			QA[i]->SetDefend(QA[i]->GetDefend() / 2);
		}
		else
		{
			if (QA[0]->GetExp()>0 && QA[0]->GetExp() <= 2) {
				QA[i]->SetAttack(QA[i]->GetAttack() / 0.5);
				QA[i]->SetDefend(QA[i]->GetDefend() / 0.5);
			}
			else {
				if (QA[0]->GetExp()>2 && QA[0]->GetExp() <= 5) {
					QA[i]->SetAttack(QA[i]->GetAttack()*1.5);
					QA[i]->SetDefend(QA[i]->GetDefend()*1.5);
				}
				else
				{
					if (QA[0]->GetExp() > 5) {
						QA[i]->SetAttack(QA[i]->GetAttack() * 2);
						QA[i]->SetDefend(QA[i]->GetDefend() * 2);
					}
				}
			}

		}
		QA[i]->TrangBi();
		cout << "\n\t ======TEAM A === = =";
		QA[i]->Xuat();
	}
	// xử lý thay đổi do trang bị và tướng quân đội 2
	for (int i = 0; i < QB.size(); i++) {
		cout << "\n\t";
		if (QB[0]->GetExp() == 0) {
			QB[i]->SetAttack(QB[i]->GetAttack() / 2);
			QB[i]->SetDefend(QB[i]->GetDefend() / 2);
		}
		else
		{
			if (QB[0]->GetExp()>0 && QB[0]->GetExp() <= 2) {
				QB[i]->SetAttack(QB[i]->GetAttack() / 0.5);
				QB[i]->SetDefend(QB[i]->GetDefend() / 0.5);
			}
			else {
				if (QB[0]->GetExp()>2 && QB[0]->GetExp() <= 5) {
					QB[i]->SetAttack(QB[i]->GetAttack()*1.5);
					QB[i]->SetDefend(QB[i]->GetDefend()*1.5);
				}
				else
				{
					if (QB[0]->GetExp() > 5) {
						QB[i]->SetAttack(QB[i]->GetAttack() * 2);
						QB[i]->SetDefend(QB[i]->GetDefend() * 2);
					}
				}
			}

		}
		QB[i]->TrangBi();
		cout << "\n\t ======TEAM B === = =";
		QB[i]->Xuat();
	}
	// CHO 2 QUÂN ĐẤU  NHAU



}
void XuLyFile::Dau()
{
	int sla = QA.size();
	int slb = QB.size();
	int check = 0; // 1 là dừng 0 là tiếp
	int thuaquan; // 1 la A, 0 la B;
	int i = 1;
	int j = 1;
	do {
		check = 0;
		if (i > sla - 1) {
			check = 1;
			thuaquan = 1;
		}
		else
		{
			if (j > slb - 1) {
				check = 1;
				thuaquan = 0;
			}
			else {
				if (Solo(QA[i], QB[j]) == true) {
					ChienThang(QA[i]);
					ThuaCuoc(QB[j]);
					j++;
				}
				else
				{
					ChienThang(QB[j]);
					ThuaCuoc(QA[i]);
					i++;
				}
			}
		}
	} while (check != 1);
	// Khi tuong quan ra tran :D Goi Ham TuongDanh();
	/*if (thuaquan == 1) {
		int kiemtra;//1 la ket thuc 0 la tiep tuc
		int chienthang;//1 La A, 2 La B
		int quanb = j;
		do {
			kiemtra = 0;
			if (Solo(QA[0], QB[quanb]) == true) {
				ChienThang(QA[0]);
				ThuaCuoc(QB[quanb]);
				quanb++;
				if (quanb > QB.size() - 1) {
					if (Solo(QA[0], QB[0])) {
						ChienThang(QA[0]);
						ThuaCuoc(QB[0]);
						chienthang = 1;
						kiemtra = 1;
					}
					else
					{
						ChienThang(QB[0]);
						ThuaCuoc(QA[0]);
						chienthang = 0;
						kiemtra = 1;
					}
				}
			}
			else
			{
				ChienThang(QB[quanb]);
				ThuaCuoc(QA[0]);
				chienthang = 0;
				kiemtra = 1;
			}
		} while (kiemtra != 1);
	}
	else {

	}  */


	cout << "\n\n\n\n\n\n\n\n";
	if (thuaquan == 1) {
		if (TuongDanh(QA, QB, j) == 1) {
			cout << " \n\t Quan A thang :D";
			for (int k = 0; k < QA.size()-1; k++) {
				QA[i]->Xuat();
			}
		}
		else {
			cout << " \n\t Quan B thang :D";
			for (int k = 0; k < QB.size()-1; k++) {
				QB[i]->Xuat();
			}
		}
	}
	else
	{
		if (TuongDanh(QB, QA, i) == 1) {
			cout << " \n\t Quan B thang :D";
			for (int k = 0; k < QA.size()-1; k++) {
				QB[i]->Xuat();
			}
		}
		else {
			cout << " \n\t Quan A thang :D";
			for (int k = 0; k < QA.size()-1; k++) {
				QA[i]->Xuat();
			}
		}
	}
	// Het phuong thuc Dau
}
XuLyFile::XuLyFile()
{

}
XuLyFile::~XuLyFile()
{
}
