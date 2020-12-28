#pragma once
#include<string>
using namespace std;
class KhungXe
{
protected:
	int LoaiKhungXe, GiaKhungXe;
	string MsKhungXe, HangSxKhungXe;
public:
	KhungXe() {};
	virtual void nhap();
	virtual int GetGiaKhungXe();
	virtual string GetMsKhungXe();
	virtual string GetHangSxKhungXe();
	virtual void xuat();
	virtual string getString();
	~KhungXe() {};
};

