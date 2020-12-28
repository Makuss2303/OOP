#include "DongCoB.h"
#include<iostream>
using namespace std;

void DongCoB::nhap()
{
	DongCo::nhap();
	cout << "Ma so dong co: ";
	cin.ignore();
	getline(cin, MsDongCo);
	cout << "Nhap tieu chuan dong co: "; cin >> TieuChuan;
	cout << "Hang san xuat dong co: "; 
	cin.ignore();
	getline(cin, HangSxDongCo);
}

string DongCoB::GetMsDongCo()
{
	return MsDongCo;
}

int DongCoB::GetGiaDongCo()
{
	if (this->GetTieuChuan() == 1)
		return 600;
	if (this->GetTieuChuan() == 2)
		return 700;
	if (this->GetTieuChuan() == 3)
		return 800;
}

string DongCoB::GetHangSxDongCo()
{
	return HangSxDongCo;
}

int DongCoB::GetTieuChuan()
{
	return TieuChuan;
}

void DongCoB::xuat()
{
	cout << MsDongCo << " | " << "Dong co loai B" << " | Tieu chuan " << TieuChuan << " | "
		<< HangSxDongCo << " | " << this->GetGiaDongCo();
}

string DongCoB::getString()
{
	string getGia, getTieuchuan;
	getGia = to_string(this->GetGiaDongCo());
	getTieuchuan = to_string(this->GetTieuChuan());
	return MsDongCo + " | " + "Dong co loai B" + " | Tieu chuan " + getTieuchuan + " | "
		+ HangSxDongCo + " | " + getGia;
}