#pragma once
#include<string>
#include "DongCo.h"
using namespace std;
class DongCoC :
    public DongCo
{
public:
    DongCoC() {};
    void nhap();
    string GetMsDongCo();
    int GetGiaDongCo();
    string GetHangSxDongCo();
    void xuat();
    string getString();
    ~DongCoC() {};
};

