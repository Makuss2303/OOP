#pragma once
#include "XeMay.h"
#include "XeMayDepend.h"
#include<iostream>
using namespace std;
class CongTy
{
protected:
public:
	int sl;
	XeMay** dsxm;
	CongTy();
	void nhap();
	void xuat();
	string getString();
	~CongTy();
};