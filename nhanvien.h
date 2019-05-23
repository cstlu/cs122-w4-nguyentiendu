#pragma once
#include <string>
using namespace std;
class NhanVien
{
protected:
	string id;
	string fullname;
	string taxcode;
public:
	NhanVien();
	NhanVien(string, string, string);
	string getID()const;
	string getFullname()const;
	string getTax()const;
	double getSalary()const;
	~NhanVien();
};
NhanVien::NhanVien(){}
NhanVien::NhanVien(string id, string name, string tax) :id(id), fullname(name), taxcode(tax){}
string NhanVien::getID()const
{return this->id;}
string NhanVien::getFullname()const
{return this->fullname;}
string NhanVien::getTax()const
{return this->taxcode;}
double NhanVien::getSalary()const
{return 0;}
NhanVien::~NhanVien(){}