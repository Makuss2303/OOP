#include "CongTy.h"
#include<iostream>
using namespace std;
void CongTy::nhap()
{
	cout << "Nhap so luong xe may: ";
	cin >> this->sl;
	cin.ignore();
	this->dsxm = new XeMay*[this->sl];
	for (int i = 0; i < this->sl; i++)
	{
		this->dsxm[i] = new XeMay();
		this->dsxm[i]->nhap();
	}
}

void CongTy::xuat()
{
	for (int i = 0; i < this->sl; i++)
		this->dsxm[i]->xuat();
}

string CongTy::getString()
{	
	string temp = "";
	for (int i = 0; i < this->sl; i++)
		temp = temp + this->dsxm[i]->GetString();
	return temp;
}

CongTy::CongTy() :dsxm(NULL), sl(0) {}

CongTy::~CongTy() {
	if (this->dsxm != NULL) {
		for (int i = 0; i < this->sl; i++) {
			delete this->dsxm[i];
		}
		delete[] this->dsxm;
	}
}