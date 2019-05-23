#pragma once
#include "NhanVienHH.h"
class NhanVienHHDB: public NhanVienHH
{
private:
	double base_salary;
public:
	NhanVienHHDB();
	NhanVienHHDB(string, string, string,double, double, double);
	double getbasesalary()const;
	double getSalary()const;
	~NhanVienHHDB();
};
NhanVienHHDB::NhanVienHHDB(){}
NhanVienHHDB::NhanVienHHDB(string id, string name, string tax, double doanhthu, double thuong, double salary)
{
	id=id;
	fullname=name;
	taxcode=tax;
	tongdoanhthu=doanhthu;
	mucthuong=thuong;
	this->base_salary=salary;
}
double NhanVienHHDB::getbasesalary()const
{return this->base_salary;}
double NhanVienHHDB::getSalary()const
{return this->tongdoanhthu * this->mucthuong / 100 + getbasesalary()*0.1;}
NhanVienHHDB::~NhanVienHHDB(){}