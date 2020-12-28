#include "KhungNhua.h"
#include<iostream>
using namespace std;

void KhungNhua::nhap()
{
	KhungXe::nhap();
	cout << "Ma so khung xe: ";
	cin.ignore();
	getline(cin, MsKhungXe);
	cout << "Hang san xuat khung xe: ";
	getline(cin, HangSxKhungXe);
}

string KhungNhua::GetMsKhungXe()
{
	return MsKhungXe;
}

int KhungNhua::GetGiaKhungXe()
{
	return 200;
}

string KhungNhua::GetHangSxKhungXe()
{
	return HangSxKhungXe;
}

void KhungNhua::xuat()
{
	cout << MsKhungXe << " | " << "Khung nhua" << " | " << HangSxKhungXe
		<< " | " << this->GetGiaKhungXe() << endl;
}

string KhungNhua::getString()
{
	string getGia;
	getGia = to_string(this->GetGiaKhungXe());
	return MsKhungXe + " | " + "Khung nhua" + " | " + HangSxKhungXe
		+ " | " + getGia + "\n";
}