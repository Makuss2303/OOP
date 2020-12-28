#include "KhungNhom.h"
#include<iostream>
using namespace std;

void KhungNhom::nhap()
{	
	KhungXe::nhap();
	cout << "Ma so khung xe: ";
	cin.ignore();
	getline(cin, MsKhungXe);
	cout << "Hang san xuat khung xe: ";
	getline(cin, HangSxKhungXe);
}

string KhungNhom::GetMsKhungXe()
{
	return MsKhungXe;
}

int KhungNhom::GetGiaKhungXe()
{
	return 500;
}

string KhungNhom::GetHangSxKhungXe()
{
	return HangSxKhungXe;
}

void KhungNhom::xuat()
{
	cout << MsKhungXe << " | " << "Khung nhom" << " | " << HangSxKhungXe
		<< " | " << this->GetGiaKhungXe() << endl;
}

string KhungNhom::getString()
{
	string getGia;
	getGia = to_string(this->GetGiaKhungXe());
	return MsKhungXe + " | " + "Khung nhom" + " | " + HangSxKhungXe
		+ " | " + getGia + "\n";
}