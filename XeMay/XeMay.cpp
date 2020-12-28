#include "XeMay.h"
#include<string>
#include<iostream>
using namespace std;

void XeMay::nhap()
{
	int ChonDongCo, ChonBanhXe1, ChonBanhXe2, ChonKhungXe;
	cout << endl << "Nhap ma so xe: ";
	getline(cin, MsXe);

	cout << "\nChon dong co ( 1. Dong co A | 2. Dong co B | 3. Dong co C ): ";
	cin >> ChonDongCo;
	DongCo* x;
	switch (ChonDongCo)
	{
	case 1:
		//Dong co A
		x = new DongCoA();
		this->dc = x;
		(this->dc)->nhap();
		break;
	case 2:
		//Dong co B
		x = new DongCoB();
		this->dc = x;
		(this->dc)->nhap();
		break;
	case 3:
		//Dong co C
		x = new DongCoC();
		this->dc = x;
		(this->dc)->nhap();
		break;
	}

	cout << "\nChon loai banh xe thu 1: ( 1. Banh xe loai D | 2. Banh xe loai E ): "; cin >> ChonBanhXe1;
	BanhXe* y1;
	switch (ChonBanhXe1)
	{
	case 1:
		//Banh xe D
		y1 = new BanhXeD();
		this->bx1 = y1;
		(this->bx1)->nhap();
		break;
	case 2:
		//Banh xe E
		y1 = new BanhXeE();
		this->bx1 = y1;
		(this->bx1)->nhap();
		break;
	}

	cout << "\nChon loai banh xe thu 2: ( 1. Banh xe loai D | 2. Banh xe loai E ): "; cin >> ChonBanhXe2;
	BanhXe* y2;
	switch (ChonBanhXe2)
	{
	case 1:
		//Banh xe D
		y2 = new BanhXeD();
		this->bx2 = y2;
		(this->bx2)->nhap();
		break;
	case 2:
		//Banh xe E
		y2 = new BanhXeE();
		this->bx2 = y2;
		(this->bx2)->nhap();
		break;
	}

	cout << "\nChon khung xe ( 1. Khung nhom | 2.Khung nhua ): "; cin >> ChonKhungXe;
	KhungXe* z;
	switch (ChonKhungXe)
	{
	case 1:
		//Khung Nhom
		z = new KhungNhom();
		this->kx = z;
		(this->kx)->nhap();
		break;

	case 2:
		//Khung Nhua
		z = new KhungNhua();
		this->kx = z;
		(this->kx)->nhap();
		break;
	}
}

void XeMay::xuat()
{	
	cout << endl;
	cout << "Xe may: " << MsXe << " | " << GiaXe() << endl;
	cout << "Dong co: "; this->dc->xuat(); cout << endl;
	cout << "Banh xe 1: "; this->bx1->xuat(); cout << endl;
	cout << "Banh xe 2: "; this->bx2->xuat(); cout << endl;
	cout << "Khung xe: "; this->kx->xuat(); cout << endl;
}

string XeMay::GetString()
{
	string getGiaXe;
	getGiaXe = to_string(GiaXe());
	return "Xe may: " + MsXe + " | " + getGiaXe + "\n"
		+ "Dong co: " + this->dc->getString() + "\n"
		+ "Banh xe 1: " +  this->bx1->getString() + "\n"
		+ "Banh xe 2: " + this->bx2->getString() + "\n"
		+ "Khung xe: " + this->kx->getString() + "\n";
}