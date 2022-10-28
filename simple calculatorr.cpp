#include <iostream>
#include <cmath>
#include <math.h>
#include <cstring>
using namespace std;

void tambah(float a,float b){
	cout<<"Masukkan dua angka:"<<endl;
	cin>>a; 
	cin>>b;
	cout<<"\nHasil jumlah "<<a<<" + "<<b<<" adalah: "<<a+b<<endl;
}
void kurang(float a,float b){
	cout<<"Masukkan dua angka"<<endl;
	cin>>a;
	cin>>b;
	cout<<"\nHasil kurang "<<a<<" - "<<b<<" adalah: "<<a-b<<endl;
}
void kali(float a,float b){
	cout<<"Masukkan dua angka"<<endl;
	cin>>a;
	cin>>b;
	cout<<"\nHasil kali "<<a<<" x "<<b<<" adalah: "<<a*b<<endl;
}
void bagi(float a,float b){
	cout<<"Masukkan dua angka"<<endl;
	cin>>a;
	cin>>b;
	cout<<"\nHasil bagi "<<a<<" : "<<b<<" adalah: "<<a/b<<endl;
}
void akar(float a){
	cout<<"Masukkan angka"<<endl;
	cin>>a;
	cout<<"\nHasil akar "<<a<<" adalah: "<<sqrt(a)<<endl;
}

int main(){
	string num,x;
	do{
		system("cls");
		cout<<"Operasi matematika apa yang akan di pilih: "<<endl;
		cout<<"1. kali [a,b]\n2. bagi [a,b]\n3. tambah [a,b]\n4. kurang [a,b]\n5. akar [a]"<<endl;
		cin>>num;
		if (num=="3"){
			float a,b;
			tambah(a,b);
		}
		else if (num=="4"){
			float a,b;
			kurang(a,b);
		}
		else if (num=="1"){
			float a,b;
			kali(a,b);
		}
		else if (num=="2"){
			float a,b;
			bagi(a,b);
		}
		else if (num=="5"){
			float a;
			akar(a);
		}
		cout<<"\nApakah anda ingin mengulang [y/n]"<<endl;
		cin>>x;
	}
	while (x=="y");
	return 0;
}

