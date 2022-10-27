#include <iostream>
using namespace std;

int main(){
	int bus = 50,p1,p2,p3,t1,t2,t3;
	cout<<"penumpang di terminal 1 ada: ";
	cin >>p1;
	if (p1>=bus){
		t1 = 0;
		cout<<"bus terisi dengan sisa bangku: "<<t1;
	}
	else {
		t1 = bus - p1;
		cout<<"bus terisi dengan sisa bangku: "<<t1;
	}
	cout<<"\nbus akan berhenti di terminal 2"<<endl;
	cout<<"penumpang yang turun ada: ";
	cin>>p2;
	if (p2>=p1){
		cout<<"penumpang turun tidak mungkin lebih dari yang naik"<<endl;
		cin.clear();
		cin.ignore();
		cout<<"coba input lagi: ";
		cin>>p2;
		if (p2>=p1){
			cout<<"sudah dibilang penumpang turun tidak mungkin dari yang naik >:("<<endl;
			cin.clear();
			cin.ignore();
			cout<<"coba input sekali lagi: ";
			cin>>p2;
		}
	}
	cout<<"penumpang di terminal 2 ada: ";
	cin>>p3;
	t2 = t1+p2;
	if (t2<=p3){
		t3 = 0;
		cout<<"bus terisi dengan sisa bangku: "<<t3;
	}
	else {
		t3 = t2-p3;
		cout<<"bus terisi dengan sisa bangku: "<<t3;
	}
	int a1=50-t3;
	cout<<"\nbus akan berhenti di terminal akhir"<<endl;
	cout<<"penumpang yang turun berjumlah: "<<a1;
	cout<<"\nbus akan otw ke pangkalan bus";
	cout<<"\nprogram selesai....";
	return 0;
}
