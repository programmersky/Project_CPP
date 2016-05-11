#include "Valiant.h"
void Valiant::SetAttack(double atk)
{
	m_Attack = atk;

}

double Valiant::GetAttack()
{
	return m_Attack;
}

void Valiant::SetDefend(double def)
{
	m_Defend = def;
}

double Valiant::GetDefend()
{
	return m_Defend;
}

void Valiant::SetStregth(double stre)
{
	m_Strength = stre;
}

double Valiant::GetStregth()
{
	return m_Strength;
}

int Valiant::CheckEquip()
{
	if (m_Equipment == "YES") {
		return 1;
	}
	else
	{
		return 0;
	}
}
string Valiant::GetName()
{
	return m_Name;
}
void Valiant::Nhap(fstream &FileIn)
{
	QuanLinh::Nhap(FileIn);
}
void Valiant::Xuat()
{
	QuanLinh::Xuat();
}
string Valiant::GetCode()
{
	return m_Code;
}

void Valiant::SetCode(string str)
{
	m_Code = str;
}
void Valiant::SetName(string str)
{
	m_Name = str;
}

void Valiant::SetExp(double ex)
{
}

double Valiant::GetExp()
{
	return -1;
}
void Valiant::TrangBi()
{
	if (m_Equipment == "YES") {
		m_Defend = m_Defend * 2;
	}
}
Valiant::Valiant()
{
}


Valiant::~Valiant()
{
}
