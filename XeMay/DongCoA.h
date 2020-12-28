#pragma once
#include<string>
#include "DongCo.h"
using namespace std;

class DongCoA :
    public DongCo
{
public:
    DongCoA() {};
    void nhap();
    string GetMsDongCo();
    int GetGiaDongCo();
    string GetHangSxDongCo();
    void xuat();
    string getString();
    ~DongCoA() {};
};