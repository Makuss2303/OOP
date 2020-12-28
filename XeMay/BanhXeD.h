#pragma once
#include "BanhXe.h"
class BanhXeD :
    public BanhXe
{
public:
    BanhXeD() {};
    void nhap();
    string GetMsBanhXe();
    string GetHangSxBanhXe();
    int GetGiaBanhXe();
    void xuat();
    string getString();
    ~BanhXeD() {};
};

