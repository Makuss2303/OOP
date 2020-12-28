#pragma once
#include<string>
using namespace std;
class BanhXe
{
protected:
	string MsBanhXe, HangSxBanhXe;
	int GiaBanhXe, LoaiBanhXe;
public:
	BanhXe() {};
	virtual void nhap();
	virtual string GetMsBanhXe();
	virtual string GetHangSxBanhXe();
	virtual int GetGiaBanhXe();
	virtual void xuat();
	virtual string getString();
	~BanhXe() {};
};

