#pragma once
#include<string>
#include"XeMayDepend.h"
using namespace std;
class XeMay
{
protected:
	DongCo *dc;
	KhungXe *kx;
	BanhXe *bx1, *bx2;
	string MsXe;
public:
	XeMay() {};
	virtual void nhap();
	virtual void xuat();
	string GetString();
	int GiaXe() { return dc->GetGiaDongCo() + kx->GetGiaKhungXe() 
		+ bx1->GetGiaBanhXe() + bx2->GetGiaBanhXe(); }
	~XeMay() {};
};

