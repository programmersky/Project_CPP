#include "Knight.h"
void Knight::SetAttack(double atk)
{
	m_Attack = atk;

}

double Knight::GetAttack()
{
	return m_Attack;
}

void Knight::SetDefend(double def)
{
	m_Defend = def;
}

double Knight::GetDefend()
{
	return m_Defend;
}

void Knight::SetStregth(double stre)
{
	m_Strength = stre;
}

double Knight::GetStregth()
{
	return m_Strength;
}

int Knight::CheckEquip()
{
	if (m_Equipment == "YES") {
		return 1;
	}
	else
	{
		return 0;
	}
}
string Knight::GetName()
{
	return m_Name;
}
void Knight::Nhap(fstream &FileIn)
{
	QuanLinh::Nhap(FileIn);
}
void Knight::Xuat()
{
	QuanLinh::Xuat();
}
string Knight::GetCode()
{
	return m_Code;
}

void Knight::SetCode(string str)
{
	m_Code = str;
}
void Knight::SetName(string str)
{
	m_Name = str;
}

void Knight::SetExp(double ex)
{
}

double Knight::GetExp()
{
	return -1;
}
void Knight::TrangBi()
{
	if ( m_Equipment == "YES") {
		m_Attack = m_Attack * 3;
		m_Defend = m_Defend * 3;
	}
}
Knight::Knight()
{
}


Knight::~Knight()
{
}
