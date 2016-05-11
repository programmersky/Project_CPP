#pragma once
#include"QuanLinh.h"
class ArmyGarena	: public QuanLinh
{
private :
	double m_Exp;

public:
	void Nhap(fstream &FileIn);
	void Xuat();
	void  SetAttack(double);
	double GetAttack();
	void  SetDefend(double);
	double GetDefend();
	void  SetStregth(double);
	double GetStregth();
	string GetName();
	void   SetName(string);
	void   SetExp(double);
	double  GetExp();
	 string GetEquip();
	 void   SetEquip(string);
	 void TrangBi();
	ArmyGarena();
	~ArmyGarena();
};

