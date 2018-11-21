#include "QuanLySinhVien.h"

QuanLySinhVien::QuanLySinhVien() {

}

void QuanLySinhVien::nhapDanhSach() {
    SinhVien sinhVien;
    int chon;
    do {
        system("cls");
        cout << "1. Nhap Thong Tin" << endl;
        cout << "2. Tro ve" << endl;

        cin >> chon;
        switch (chon) {
            case 1:
                sinhVien.nhap();
                dsSinhVien.push_back(sinhVien);
                break;
            case 2:
                break;
            default:
                break;
        }
    } while (chon != 2);
}

void QuanLySinhVien::xuatDanhSach(ostream &os) {
    for (unsigned int i = 0; i < dsSinhVien.size(); i++) {
        dsSinhVien[i].xuat(os);
    }
}

void QuanLySinhVien::timDiemTrungBinhLonHon5(ostream &os) {
    ofstream outfile;
    outfile.open("DiemTB.txt");
    for (unsigned int i = 0; i < dsSinhVien.size(); i++) {
        if (dsSinhVien[i].diemTrungBinh() >= 5) {
            dsSinhVien[i].xuat(outfile);
            dsSinhVien[i].xuat(os);
        }
    }
    outfile.close();
}

void QuanLySinhVien::timDiemTrungBinhLonNhat(ostream &os) {
    SinhVien tmp = dsSinhVien[0];
    for (unsigned int i = 1; i < dsSinhVien.size(); i++) {
        if (tmp.diemTrungBinh() < dsSinhVien[i].diemTrungBinh()) {
            tmp = dsSinhVien[i];
        }
    }
    os << "Sinh vien co diem trung binh lon nhat" << endl;
    tmp.xuat(os);
}

void QuanLySinhVien::timDiemTrungBinhNhoNhat(ostream &os) {
    SinhVien tmp = dsSinhVien[0];
    for (unsigned int i = 1; i < dsSinhVien.size(); i++) {
        if (dsSinhVien[i].diemTrungBinh() < tmp.diemTrungBinh()) {
            tmp = dsSinhVien[i];
        }
    }
    os << "Sinh vien co diem trung binh nho nhat" << endl;
    tmp.xuat(os);
}

void QuanLySinhVien::timSinhVien(ostream &os) {
    string mssv;

    fflush(stdin);
    cout << "Nhap MSSV cua SV can tim: ";
    cin >> mssv;
    for (unsigned int i = 0; i < dsSinhVien.size(); i++) {
        if (dsSinhVien[i].getID() == mssv) {
            os << "Thong tin sinh vien: " << endl;
            dsSinhVien[i].xuat(os);
            return;
        }
    }
    cout << "Sinh vien can tim khong co trong danh sach" << endl;
}

void QuanLySinhVien::soluongSinhVien() {
    cout << "Danh sach gom " << dsSinhVien.size() << " sinh vien" << endl;
}
