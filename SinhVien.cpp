#include "SinhVien.h"

SinhVien::SinhVien() {

}

void SinhVien::nhap() {
    system("cls");
    cout << "Nhap thong tin sinh vien" << endl;

    fflush(stdin);
    cout << "MSSV: ";
    getline(cin, id);

    cout << "Ho ten sinh vien: ";
    getline(cin, hoTen);

    cout << "Lop: ";
    getline(cin, lop);

    cout << "Diem Cau truc du lieu: ";
    cin >> diemCTDL;

    if (diemCTDL > 10) {
        diemCTDL = 10;
    }

    cout << "Diem Lap trinh huong doi tuong: ";
    cin >> diemLTHDT;

    if (diemLTHDT > 10) {
        diemLTHDT = 10;
    }

    cout << "Diem Thiet ke he thong thong tin: ";
    cin >> diemTKHTTT;

    if (diemTKHTTT > 10) {
        diemTKHTTT = 10;
    }

}

void SinhVien::xuat(ostream &os) {
    os << "MSSV: " << id << " - Sinh vien: " << hoTen << " - Lop: " << lop << " - Diem CTDL: " << diemCTDL << " - Diem LT HDT: " << diemLTHDT << " - Diem TK HTTT: " << diemTKHTTT << " - Diem TB: " << diemTrungBinh() << endl;
}

float SinhVien::diemTrungBinh() {
    return (diemCTDL + diemLTHDT + diemTKHTTT)/3.0f;
}

string SinhVien::getID() {
    return id;
}
