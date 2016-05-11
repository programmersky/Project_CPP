#include "QuanLinh.h"
void QuanLinh::Nhap(fstream &FileIn)
{
	//FileIn >> m_Name;
	FileIn >> m_Code;
	FileIn >> m_Attack;
	FileIn >> m_Defend;
	FileIn >> m_Equipment;
	FileIn >> m_Strength;
}

void QuanLinh::Xuat()
{
	
	//cout << "\n\n\t Name :  " <<  m_Name;
	cout << "\n\n\t Code :" <<  m_Code;
	cout << "\n\n\t ATKK :" <<  m_Attack;
	cout << "\n\n\t DEFF :" <<  m_Defend;
	cout << "\n\n\t EQUI :" <<  m_Equipment;
	cout << "\n\n\t STRe :" <<  m_Strength;
}

void QuanLinh::SetAttack(double atk)
{
	m_Attack = atk;

}

double QuanLinh::GetAttack()
{
	return m_Attack;
}

void QuanLinh::SetDefend(double def)
{
	m_Defend = def;
}

double QuanLinh::GetDefend()
{
	return m_Defend;
}

void QuanLinh::SetStregth(double stre)
{
	m_Strength = stre;
}

double QuanLinh::GetStregth()
{
	return m_Strength;
}

string QuanLinh::GetEquip()
{
	return m_Equipment;
}

void QuanLinh::SetEquip(string str)
{
	m_Equipment = str;
}
string QuanLinh::GetName()
{
	return m_Name;
}

void QuanLinh::SetName(string str)
{
	m_Name = str;
}

void QuanLinh::SetExp(double ex)
{
}

double QuanLinh::GetExp()
{
	return 0;
}

string QuanLinh::GetCode()
{
	return m_Code;
}

void QuanLinh::SetCode(string str)
{
	m_Code = str;
}

void QuanLinh::TrangBi()
{
	
}

QuanLinh::QuanLinh()
{
}


QuanLinh::~QuanLinh()
{
}

