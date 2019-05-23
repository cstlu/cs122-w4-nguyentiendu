#pragma once
#include "NhanVien.h"
class NhanVienHD : public NhanVien
{
private:
    double base_time;
    double base_salary;

public:
    NhanVienHD();
    NhanVienHD(string, string, string, double, double);
    double getbase_time() const;
    double getbase_salary() const;
    double getSalary() const;
    ~NhanVienHD();
};
NhanVienHD::NhanVienHD(){}
NhanVienHD::NhanVienHD(string id, string name, string tax, double time, double salary)
{
    id=id;
    fullname=name;
    taxcode=tax;
    this->base_salary=salary;
    this->base_time=time;
}
double NhanVienHD::getbase_time()const
{return this->base_time;}
double NhanVienHD::getbase_salary()const
{return this->base_salary;}
double NhanVienHD::getSalary()const
{return getbase_time()*getbase_salary();}
NhanVienHD::~NhanVienHD(){}