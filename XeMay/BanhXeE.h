#pragma once
#include "BanhXe.h"
class BanhXeE :
    public BanhXe
{
public:
    BanhXeE() {};
    void nhap();
    string GetMsBanhXe();
    string GetHangSxBanhXe();
    int GetGiaBanhXe();
    void xuat();
    string getString();
    ~BanhXeE() {};
};

