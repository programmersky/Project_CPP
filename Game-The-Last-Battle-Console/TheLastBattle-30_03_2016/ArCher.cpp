#include "ArCher.h"
void ArCher::Nhap(fstream &FileIn)
{
	QuanLinh::Nhap(FileIn);
}
void ArCher::Xuat()
{
	QuanLinh::Xuat();
}
void ArCher::SetAttack(double atk)
{
	m_Attack = atk;

}

double ArCher::GetAttack()
{
	return m_Attack;
}

void ArCher::SetDefend(double def)
{
	m_Defend = def;
}

double ArCher::GetDefend()
{
	return m_Defend;
}

void ArCher::SetStregth(double stre)
{
	m_Strength = stre;
}

double ArCher::GetStregth()
{
	return m_Strength;
}

int ArCher::CheckEquip()
{
	if (m_Equipment == "YES") {
		return 1;
	}
	else
	{
		return 0;
	}
}
string ArCher::GetName()
{
	return m_Name;
}
string ArCher::GetCode()
{
	return m_Code;
}

void ArCher::SetCode(string str)
{
	m_Code = str;
}
void ArCher::SetName(string str)
{
	m_Name = str;
}

void ArCher::SetExp(double ex)
{
}

double ArCher::GetExp()
{
	return -1;
}
void ArCher::TrangBi()
{
	if (m_Equipment == "YES") {
		m_Attack = m_Attack*1.2;
	}
}
ArCher::ArCher()
{
}


ArCher::~ArCher()
{
}
