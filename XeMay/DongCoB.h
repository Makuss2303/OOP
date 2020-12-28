#pragma once
#include<string>
#include "DongCo.h"
using namespace std;
class DongCoB :
    public DongCo
{
private:
    int TieuChuan;
public:
    DongCoB() {};
    void nhap();
    string GetMsDongCo();
    int GetGiaDongCo();
    string GetHangSxDongCo();
    int GetTieuChuan();
    void xuat();
    string getString();
    ~DongCoB() {};
};

