#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class QuanLinh
{
	fstream FileIn;
protected:
	string m_Name,m_Code, m_Equipment;
	double  m_Attack, m_Defend, m_Strength;
public :
	virtual void Nhap(fstream &FileIn);
	virtual void Xuat();
	// Xử lý xự kiện thay đổi chỉ số tấn công phòng thủ
	virtual void   SetAttack(double);
	virtual double  GetAttack();
	virtual void   SetDefend(double);
	virtual double  GetDefend();
	virtual void   SetStregth(double);
	virtual double  GetStregth();
	virtual string GetEquip();
	virtual void   SetEquip(string);
	virtual string GetName();
	virtual void   SetName(string);
	virtual void   SetExp(double);
	virtual double  GetExp();
	virtual string GetCode();
	virtual void   SetCode(string);
	virtual void TrangBi();
	
	QuanLinh();
	~QuanLinh();
};

