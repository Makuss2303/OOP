#include "DongCoA.h"
#include<iostream>
using namespace std;

void DongCoA::nhap()
{
	DongCo::nhap();
	cout << "Ma so dong co: ";
	cin.ignore();
	getline(cin, MsDongCo);
	cout << "Hang san xuat dong co: "; getline(cin, HangSxDongCo);
}

string DongCoA::GetMsDongCo()
{
	return MsDongCo;
}

int DongCoA::GetGiaDongCo()
{
	return 500;
}

string DongCoA::GetHangSxDongCo()
{
	return HangSxDongCo;
}

void DongCoA::xuat()
{
	cout << MsDongCo << " | " << "Dong co loai A" << " | " << HangSxDongCo << " | " << this->GetGiaDongCo();
}

string DongCoA::getString()
{
	string getGia;
	getGia = to_string(this->GetGiaDongCo());
	return MsDongCo + " | " + "Dong co loai A" + " | " + HangSxDongCo
		+ " | " + getGia + "\n";
}