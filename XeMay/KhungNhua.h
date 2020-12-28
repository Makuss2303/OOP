#pragma once
#include<string>
#include "KhungXe.h"
using namespace std;

class KhungNhua :
    public KhungXe
{
public:
    KhungNhua() { LoaiKhungXe = 2; };
    void nhap();
    string GetMsKhungXe();
    int GetGiaKhungXe();
    string GetHangSxKhungXe();
    void xuat();
    string getString();
    ~KhungNhua() {};
};

