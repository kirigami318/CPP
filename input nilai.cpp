#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o, z;
	string op;
	do {
		system("cls");
		cout<<"Masukkan Nilai PABP: ";
		cin>>a;
		cout<<"Masukkan Nilai PKN: ";
		cin>>b;
		cout<<"Masukkan Nilai Bahasa Indonesia: ";
		cin>>c;
		cout<<"Masukkan Nilai Matematika Wajib: ";
		cin>>d;
		cout<<"Masukkan Nilai Sejarah Indonesia: ";
		cin>>e;
		cout<<"Masukkan Nilai Bahasa Inggris: ";
		cin>>f;
		cout<<"Masukkan Nilai Seni Budaya: ";
		cin>>g;
		cout<<"Masukkan Nilai Olahraga: ";
		cin>>h;
		cout<<"Masukkan Nilai PKWU: ";
		cin>>i;
		cout<<"Masukkan Nilai Bahasa Daerah: ";
		cin>>j;
		cout<<"Masukkan Nilai Matematika MIPA: ";
		cin>>k;
		cout<<"Masukkan Nilai Biologi: ";
		cin>>l;
		cout<<"Masukkan Nilai Fisika: ";
		cin>>m;
		cout<<"Masukkan Nilai Kimia: ";
		cin>>n;
		cout<<"Masukkan Nilai Sastra Inggris: ";
		cin>>o;
		float x,y;
		x = a+b+c+d+e+f+g+h+i+j+k+l+m+n+o;
		y = x/15;
		if (y<70){
			cout<<"\nKamu Remidi"<<"\n\nTotal Nilai Kamu Adalah: "<<x<<"\nRata-Rata Nilai Kamu Adalah: "<<x/15;
		}
		else {
			cout<<"\nKamu Lulus"<<"\n\nTotal Nilai Kamu Adalah: "<<x<<"\nRata-Rata Nilai Kamu Adalah: "<<x/15;
		}
		cout<<"\n\nApakah Ingin Mengulang? [y/n]"<<endl;
		cin>>op;
	}
	while (op=="y");
	cout<<"Program Selesai"<<endl;
	system("pause");
	return 0;
}
