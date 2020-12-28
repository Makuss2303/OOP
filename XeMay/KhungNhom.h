#pragma once
#include<string>
#include "KhungXe.h"
using namespace std;

class KhungNhom :
    public KhungXe
{
public:
    KhungNhom() { LoaiKhungXe = 1; };
    void nhap();
    string GetMsKhungXe();
    int GetGiaKhungXe();
    string GetHangSxKhungXe();
    void xuat();
    string getString();
    ~KhungNhom() {};
};
