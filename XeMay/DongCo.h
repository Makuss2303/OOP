#pragma once
#include<string>
using namespace std;
class DongCo
{
protected:
    string MsDongCo, HangSxDongCo, LoaiDongCo;
    int GiaDongCo;
public:
    DongCo() {};
    virtual void nhap();
    virtual int GetGiaDongCo();
    virtual string GetMsDongCo();
    virtual string GetHangSxDongCo();
    virtual void xuat();
    virtual string getString();
    ~DongCo() {};
};

