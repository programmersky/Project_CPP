#pragma once
#include"Ngay.h"
#include"ThongTinNguoiMuon.h"
#include"Sach.h"
#include"TapChi.h"
#include"CD.h"
#include<vector>
class PhieuMuon
{
private:
	string MaPhieuMuon;
	Ngay NgayMuon, NgayTra;
	ThongTinNguoiMuon ThongTin;
	vector<Sach> DsSach;
	vector<CD> DsCD;
	vector<TapChi> DsTc;

public:
	void NhapPhieuMuon();
	void XuatPhieuMuon();
	PhieuMuon();
	~PhieuMuon();
};

