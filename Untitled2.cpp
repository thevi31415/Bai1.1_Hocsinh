#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct DATE
{
    int n;
    int t;
    int m;
};
struct HOCSINH
{
    char MS[6];
    char TEN[31];
    DATE ngaysinh;
    char DC[51];
    char GT[4];
    double DIEM;

};
void nhap(HOCSINH A[], int &n);
void nhap1hocsinh(HOCSINH &x);
void xuat(HOCSINH A[], int n);
void xuat1hocsinh(HOCSINH A);
void dem(HOCSINH A[], int n);
int main()
{
    HOCSINH A[10000];
    int n;
    nhap(A, n);
    xuat(A, n);
    dem(A, n);
}
void nhap(HOCSINH A[], int &n) {
	
	cout << "Nhap so luong hoc sinh: "; cin >> n;
    for (int i = 0; i < n; i++)
    {  cout << "Nhap thong tin hoc sinh thu " << i+1;
        
       nhap1hocsinh(A[i]);
    }
}

void nhap1hocsinh(HOCSINH &A) {
	fflush(stdin);

    cout << "\nNhap MSHS:";
    gets(A.MS);
    cout << "Nhap ten: ";
    gets(A.TEN);
    cout << "Nhap ngay, thang, nam: \nNhap ngay: "; cin >> A.ngaysinh.n;
    cout <<"Nhap thang: "; cin >> A.ngaysinh.t;
    cout <<"Nhap nam:"; cin >> A.ngaysinh.m;
    cin.ignore();
    cout << "Nhap dia chi: "; 
    gets(A.DC);
    cout << "Nhap gioi tinh: ";
    gets(A.GT);
    cout << "Nhap diem:";
    cin >> A.DIEM;

}
void xuat(HOCSINH A[], int n){
	for(int i=0; i<n; i++){
		cout << "\nThong tin hoc sinh thu " << i+1;
		xuat1hocsinh(A[i]);
}
}
void xuat1hocsinh(HOCSINH A){
	cout << "\nMSHS: " << A.TEN << endl;
	cout << "Ngay sinh :" << A.ngaysinh.n << "/" << A.ngaysinh.t << "/" << A.ngaysinh.m << endl;
	cout << "Dia chi: " << A.DC << endl;
	cout << "Gioi tinh: " <<A.GT << endl;
	cout << "Diem : " << A.DIEM <<endl;
	
	}
void dem(HOCSINH A[], int n){
	int dem =0;
	for(int i =0; i<n; i++){
		if(A[i].DIEM >= 5){
			dem =dem +1;
	
	
	}
	
	} 
	cout << "SO HOC SINH LEN LOP LA: " << dem;
	}
