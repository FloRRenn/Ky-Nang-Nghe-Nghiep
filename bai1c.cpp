#include <iostream>
using namespace std;

class PhanSo{
private:
	int Tu;
	int Mau;
	int UCLN(int a, int b);
public:
	PhanSo();
	PhanSo(int a, int b){
		Tu = a;
		Mau = b;
	}
	void Nhap();
	void Xuat();
	void Cong(PhanSo a);
	void Tru(PhanSo a);
	void Nhan(PhanSo a);
	void Chia(PhanSo a);
	void RutGon();
};

PhanSo::PhanSo(){
	Tu = 0;
	Mau = 1;
}

void PhanSo::Nhap(){
	do{
		cout <<"Nhap Tu So: "; cin >>Tu;
		cout <<"Nhap Mau So: "; cin >>Mau;

		if (Mau == 0) cout <<"Mau so KHONG duoc bang 0" <<endl;
	} while (Mau == 0);
	cout <<endl;
}

void PhanSo::Xuat(){
	cout <<"Ket Qua: ";

	if (Tu == Mau) cout <<Tu <<endl;
	else if (Tu == 0) cout <<Mau <<endl;
	else if (Mau < 0) cout <<(-1)*Tu <<"/" <<(-1)*Mau <<endl;
	else cout <<Tu <<"/" <<Mau <<endl;

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
	Tu /=SoChia;
	Mau /=SoChia;
}

void PhanSo::Cong(PhanSo a){
	PhanSo b;

	b.Tu = Tu*a.Mau + Mau*a.Tu;
	b.Mau = Mau*a.Mau;

	*this = b;
}

void PhanSo::Tru(PhanSo a){
	PhanSo b;

	b.Tu = Tu*a.Mau - Mau*a.Tu;
	b.Mau = Mau*a.Mau;

	*this = b;
}

void PhanSo::Nhan(PhanSo a){
	PhanSo b;

	b.Tu = Tu*a.Tu;
	b.Mau = Mau*a.Mau;

	*this = b;
}

void PhanSo::Chia(PhanSo a){
	PhanSo b;

	b.Tu = Tu*a.Mau;
	b.Mau = Mau*a.Tu;

	*this = b;
}
int main(){
	PhanSo a[2], b;

	for (int i =0; i < 2; i++){
		cout <<"Phan so thu " <<i <<endl;
		a[i].Nhap();
	}

	b = a[0];
	b.Cong(a[1]);
	b.RutGon();
	cout <<"Tong: ";
	b.Xuat();

	b = a[0];
	b.Tru(a[1]);
	b.RutGon();
	cout <<"Tru: ";
	b.Xuat();

	b = a[0];
	b.Nhan(a[1]);
	b.RutGon();
	cout <<"Nhan: ";
	b.Xuat();

	b = a[0];
	b.Chia(a[1]);
	b.RutGon();
	cout <<"Chia: ";
	b.Xuat();

	return 0;
}