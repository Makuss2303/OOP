#include "DongCoC.h"
#include<iostream>
using namespace std;

void DongCoC::nhap()
{
	DongCo::nhap();
	cout << "Ma so dong co: "; 
	cin.ignore();
	getline(cin, MsDongCo);
	cout << "Hang san xuat dong co: "; getline(cin, HangSxDongCo);
}

string DongCoC::GetMsDongCo()
{
	return MsDongCo;
}

int DongCoC::GetGiaDongCo()
{
	return 400;
}

string DongCoC::GetHangSxDongCo()
{
	return HangSxDongCo;
}

void DongCoC::xuat()
{
	cout << MsDongCo << " | " << "Dong co loai C" << " | " << HangSxDongCo << " | " << this->GetGiaDongCo();
}

string DongCoC::getString()
{
	string getGia;
	getGia = to_string(this->GetGiaDongCo());
	return MsDongCo + " | " + "Dong co loai C" + " | " + HangSxDongCo
		+ " | " + getGia + "\n";
}