#pragma once
#include "NhanVien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;
public:
	NhanVienHH();
	NhanVienHH(string, string, string, double,double);
	double getTongdoanhthu()const;
    double getMucthuong()const;
	double getSalary()const;
	~NhanVienHH();
};
NhanVienHH::NhanVienHH(){}
NhanVienHH::NhanVienHH(string id, string name, string tax, double tongdoanhthu, double mucthuong)
{
	id=id;
	fullname=name;
	taxcode=tax;
	tongdoanhthu=tongdoanhthu;
	mucthuong=mucthuong;
}
double NhanVienHH::getTongdoanhthu()const
{return this->tongdoanhthu;}
double NhanVienHH::getMucthuong()const
{return this->mucthuong;}
double NhanVienHH::getSalary()const
{return getTongdoanhthu() * getMucthuong() / 100;}
NhanVienHH::~NhanVienHH(){}