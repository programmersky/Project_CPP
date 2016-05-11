#pragma once
#include"ArCher.h"
#include"Knight.h"
#include"Valiant.h"
#include"ArmyGarena.h"
#include"QuanLinh.h"
#include<vector>
class XuLyFile
{
	fstream FileIn;
private: 
	vector<QuanLinh*> QA;
	vector<QuanLinh*> QB;
	vector<string> infoteam; 
public:

	void XuLy();
	void Dau();
	
	XuLyFile();

	~XuLyFile();
};

