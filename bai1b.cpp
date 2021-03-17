#include <iostream>
using namespace std;

class PhanSo{
private:
	int Tu;
	int Mau;

public:
	PhanSo();
	PhanSo(int t, int m){
		Tu = t;
		Mau = m;
	}
	void Nhap(); 
	void Xuat();
	void SoSanh(PhanSo a);
};

PhanSo::PhanSo(){
	Tu = 0;
	Mau = 1;
}

void PhanSo::Nhap(){
	cout <<"Nhap Tu So: "; cin >>Tu;
	cout <<"\nNhap Mau So: "; cin >>Mau;
}

void PhanSo::Xuat(){
	cout <<Tu <<"/" <<Mau <<endl;
}

void PhanSo::SoSanh(PhanSo a){
	if ((float)Tu/(float)Mau > (float)a.Tu/(float)a.Mau) cout <<Tu <<"/" <<Mau;
	else cout <<a.Tu <<"/" <<a.Mau;
}

int main(){
	PhanSo a[2], b;

	for (int i =0; i < 2; i++){
		cout <<"Phan so thu " <<i <<endl;
		a[i].Nhap();
	}

	b = a[0];
	b.SoSanh(a[1]);

	return 0;
}

