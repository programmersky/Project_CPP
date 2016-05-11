#pragma once
#include"QuanLinh.h"
class Valiant		 : public QuanLinh
{
public:
	void Nhap(fstream &FileIn);

	void Xuat();
	string GetCode();
	void   SetCode(string);
	void  SetAttack(double);
	double GetAttack();
	void  SetDefend(double);
	double GetDefend();
	void  SetStregth(double);
	double GetStregth();
	int   CheckEquip();
	string GetName();
	void	SetName(string);
	void    SetExp(double);
	double   GetExp();
	void TrangBi();
	Valiant();
	~Valiant();
};

