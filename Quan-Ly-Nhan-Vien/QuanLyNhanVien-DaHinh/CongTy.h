#pragma once
#include"NVCongNhat.h"
#include"NVQuanLi.h"
#include"NVSanXuat.h"
#include<vector>
class CongTy
{
private:
	vector<NhanVien * > DsNhanVien;

public:
	void NhapDs();
	void XuatDs();
	void LuongTangDan();
	CongTy();
	~CongTy();
};

