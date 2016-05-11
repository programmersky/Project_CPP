#include "ArmyGarena.h"

string ArmyGarena::GetEquip()
{
	return m_Equipment;
}

void  ArmyGarena::SetEquip(string str)
{
	m_Equipment = str;
}
void ArmyGarena::TrangBi()
{
}
string ArmyGarena::GetName()
{
	return m_Name;
}
void ArmyGarena::SetName(string str)
{
	m_Name = str;
}
void ArmyGarena::SetExp(double ex)
{
	m_Exp = ex;
}
void ArmyGarena::Nhap(fstream &FileIn)
{	
	QuanLinh::Nhap(FileIn);
	FileIn >> m_Exp;
}
void ArmyGarena::Xuat()
{
	QuanLinh::Xuat();
	cout << " \n\n\t EXP : "<< m_Exp;
}
void ArmyGarena::SetAttack(double atk)
{
	m_Attack = atk;

}
double ArmyGarena::GetAttack()
{
	return m_Attack;
}
void ArmyGarena::SetDefend(double def)
{
	m_Defend = def;
}

double ArmyGarena::GetDefend()
{
	return m_Defend;
}

void ArmyGarena::SetStregth(double stre)
{
	m_Strength = stre;
}

double ArmyGarena::GetStregth()
{
	return m_Strength;
}
double ArmyGarena::GetExp()
{
	return m_Exp;
}
ArmyGarena::ArmyGarena()
{
}


ArmyGarena::~ArmyGarena()
{
}
