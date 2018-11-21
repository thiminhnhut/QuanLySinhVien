#ifndef QuanLySinhVien_h
#define QuanLySinhVien_h
#include <vector>
#include <fstream>
#include "SinhVien.h"

class QuanLySinhVien {
    private:
        vector<SinhVien> dsSinhVien;
    public:
        QuanLySinhVien();
        void nhapDanhSach();
        void xuatDanhSach(ostream &os);
        void timDiemTrungBinhLonHon5(ostream &os);
        void timDiemTrungBinhLonNhat(ostream &os);
        void timDiemTrungBinhNhoNhat(ostream &os);
        void timSinhVien(ostream &os);
        void soluongSinhVien();
};

#endif
