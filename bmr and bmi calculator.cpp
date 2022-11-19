#include<iostream>
#include<cstring>
using namespace std;

void bmi(float z){
	float bb,tb;
	string lp;
	cout<<"\nmasukkan berat badan: ";
	cin>>bb;
	cout<<"\nmasukkan tinggi badan: ";
	cin>>tb;
	float x;
	float y=tb*0.01;
	z=y*y;
	x=bb/z;
	if (x<19){
		lp="Kurus";
	}
	else if(19<x,x<25){
		lp="Normal";
	}
	else if(25<x,x<30){
		lp="Kegemukan";
	}
	else if(x>30,x<40){
		lp="Obesitas Ringan";
	}
	else if(x>40){
		lp="Obesitas Berat";
	}
	cout<<"\nBody Mass Index: "<<x<<"\ndengan Kriteria: "<<lp;
}
void bmrlk(float a){
	float bb,tb,umr;
	cout<<"\nmasukkan berat badan: ";
	cin>>bb;
	cout<<"\nmasukkan tinggi badan: ";
	cin>>tb;
	cout<<"\nmasukkan umur: ";
	cin>>umr;
	float x=13.7*bb;
	float y=5*tb;
	float z=6.8*umr;
	a=66+x+y-z;
	cout<<"\nBasal Metabolism Rate: "<<a;
}
void bmrpr(float a){
	float bb,tb,umr;
	cout<<"\nmasukkan berat badan: ";
	cin>>bb;
	cout<<"\nmasukkan tinggi badan: ";
	cin>>tb;
	cout<<"\nmasukkan umur: ";
	cin>>umr;
	float x=9.6*bb;
	float y=1.8*tb;
	float z=4.7*umr;
	a=665+x+y-z;
	cout<<"\nBasal Metabolism Rate: "<<a;
}
int main(){
	float z,a;
	string xc;
	do{
		system("cls");
		string ch;
		cout<<"bmi atau bmr?"<<endl;
		cin>>ch;
		if (ch=="bmi"){
			bmi(z);
		}
		else if(ch=="bmr"){
			string pr;
			cout<<"\nBMR pria atau wanita? [pria/wanita]"<<endl;
			cin>>pr;
			if (pr=="pria"){
				bmrlk(a);
			}
			else if(pr=="wanita"){
				bmrpr(a);
			}
		}
		cout<<"\n\napakah anda ingin mengulang? [y/n]"<<endl;
		cin>>xc;
	}
	while(xc=="y");
	cout<<"\nprogram selesai";
	return 0;
}
