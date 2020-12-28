#include "BanhXeD.h"
#include<iostream>
using namespace std;

void BanhXeD::nhap()
{
	BanhXe::nhap();
	cout << "Ma so banh xe: "; 
	cin.ignore();
	getline(cin, MsBanhXe);
	cout << "Hang san xuat banh xe: "; getline(cin, HangSxBanhXe);
}

string BanhXeD::GetMsBanhXe()
{
	return MsBanhXe;
}

string BanhXeD::GetHangSxBanhXe()
{
	return HangSxBanhXe;
}


int BanhXeD::GetGiaBanhXe()
{
	return 400;
}

void BanhXeD::xuat()
{
	cout << MsBanhXe << " | " << "Banh xe loai D" << " | " << HangSxBanhXe << " | " << this->GetGiaBanhXe();
}

string BanhXeD::getString()
{
	string getGia;
	getGia = to_string(this->GetGiaBanhXe());
	return MsBanhXe + " | " + "Banh xe loai D" + " | " + HangSxBanhXe + " | " + getGia;
}