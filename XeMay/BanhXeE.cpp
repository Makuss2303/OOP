#include "BanhXeE.h"
#include<iostream>
using namespace std;

void BanhXeE::nhap()
{
	BanhXe::nhap();
	cout << "Ma so banh xe: "; 
	cin.ignore();
	getline(cin, MsBanhXe);
	cout << "Hang san xuat banh xe: "; getline(cin, HangSxBanhXe);
}

string BanhXeE::GetMsBanhXe()
{
	return MsBanhXe;
}

string BanhXeE::GetHangSxBanhXe()
{
	return HangSxBanhXe;
}

int BanhXeE::GetGiaBanhXe()
{
	return 300;
}

void BanhXeE::xuat()
{
	cout << MsBanhXe << " | " << "Banh xe loai E" << " | " << HangSxBanhXe << " | " << this->GetGiaBanhXe();
}

string BanhXeE::getString()
{
	string getGia;
	getGia = to_string(this->GetGiaBanhXe());
	return MsBanhXe + " | " + "Banh xe loai E" + " | " + HangSxBanhXe + " | " + getGia;
}