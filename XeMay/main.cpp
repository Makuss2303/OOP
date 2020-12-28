#include<iostream>
#include<fstream>
#include"CongTy.h"
using namespace std;

int main()
{
	CongTy ct;
	ct.nhap();
	ct.xuat();
    ofstream DsXeMay("danh_sach_xe_may.txt");
    DsXeMay << "Danh sach cac xe may: \n";
	DsXeMay << ct.getString();
    DsXeMay.close();
	system("pause");
	return 0;
}