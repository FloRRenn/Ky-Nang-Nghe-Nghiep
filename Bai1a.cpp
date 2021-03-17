#include <iostream>
using namespace std;

class PhanSo{
private:
	int Tu;
	int Mau;

	int UCLN(int a, int b);

public:
	PhanSo();

	void Nhap();
	void Xuat();

	void RutGon();
};

PhanSo::PhanSo(){
	Tu = 0;
	Mau = 1;
}

void PhanSo::Nhap(){
	cout <<"Nhap Tu so: "; cin >>Tu;
	cout <<"\nNhap Mau so: "; cin >>Mau;
}

void PhanSo::Xuat(){
	cout <<"Ket qua la: " <<Tu <<"/" <<Mau;
}

int PhanSo::UCLN(int a, int b){
	if (a==0 ||b==0) return a+b; 

    while (a !=b) { 
        if(a>b)
            a=a-b;
        else
            b=b-a;
        }
    return a;
}

void PhanSo::RutGon(){
	int SoChia = UCLN(Tu, Mau);

	Tu /= SoChia;
	Mau /= SoChia;
}

int main(){
	PhanSo a;

	a.Nhap();
	a.RutGon();
	a.Xuat();

	return 0;
}