#pragma once
#include "NhanVien.h"
class NhanVienBC: public NhanVien
{
private:
	double fixed_salary;
public:
	NhanVienBC();
	NhanVienBC(string, string, string, double);
	bool setFixedsalary(double);
	double getFixedsalary()const;
	double getSalary()const;
	~NhanVienBC();
};
NhanVienBC::NhanVienBC(){}
NhanVienBC::NhanVienBC(string id, string name, string tax, double salary)
{
	id=id;
	fullname=name;
	taxcode=tax;
	this->fixed_salary=salary;
}
bool NhanVienBC::setFixedsalary(double salary)
{this->fixed_salary = salary; return true;}
double NhanVienBC::getFixedsalary()const
{return this->fixed_salary;}
double NhanVienBC::getSalary()const
{return getFixedsalary();}
NhanVienBC::~NhanVienBC(){}