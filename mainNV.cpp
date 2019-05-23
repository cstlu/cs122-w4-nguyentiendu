#include<iostream>
#include "NhanvienBC.h"
#include "NhanvienHH.h"
#include "NhanvienHHDB.h"
#include "NhanVienHD.h"
using namespace std;
int main()
{
    NhanVienBC nv1("0123", "Nguyen Van A", "1111", 3);
    NhanVienHD nv2("1234", "Nguyen Van B", "2222", 3, 30);
    NhanVienHH nv3("2345", "Nguyen Van C", "3333", 1000, 100);
    NhanVienHHDB nv4("3456", "Nguyen Van D", "4444", 1000, 100, 30);
    cout<<nv1.getSalary()<<" "<<nv2.getSalary()<<" "<<nv3.getSalary()<<" "<<nv4.getSalary()<<endl;
    return 0;
}