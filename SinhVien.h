#ifndef SinhVien_h
#define SinhVien_h

#include <iostream>
#include <string>
using namespace std;

class SinhVien {
    private:
        string id;
        string hoTen;
        string lop;
        float diemCTDL;
        float diemLTHDT;
        float diemTKHTTT;
    public:
        SinhVien();
        void nhap();
        void xuat(ostream &os);
        float diemTrungBinh();
        string getID();
};
#endif
