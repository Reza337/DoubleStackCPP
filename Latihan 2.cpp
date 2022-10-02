#include <iostream>
#define n 10
using namespace std;

//Struktur Tumpukan
struct stack{
	int top, data[n];
} tumpukan;

//Inisialisasi awal
void init(){
	tumpukan.top=-1;
}

//apakah stak bisa di isi?
bool BisaIsi(){
	return tumpukan.top<n-1;
}

//push
void push(){
	if(BisaIsi()){
		tumpukan.top++;
		cout<<"Masukan Data : ";
		cin>>tumpukan.data[tumpukan.top];
	} else
	cout<<"Stack Penuh"<<endl;
}

//apakah stack ada isinya?
bool AdaIsi(){
	return tumpukan.top>-1;
}

//pop
void pop(){
	if(AdaIsi()){
		cout<<"Data "<<tumpukan.data[tumpukan.top]<<" Telah dihapus"<<endl;
		tumpukan.top--;
	} else
	cout<<" Stack Kosong"<<endl;
}

//proses cetak
void cetak(){
	if(AdaIsi()){
		for(int i=0;i<=tumpukan.top;i++)
		cout<<tumpukan.data[i]<<" ";
	} else
	cout<<"Stack Kosong"<<endl;
}

//Proses Jumlah
void jumlah(){
	if(AdaIsi()){
		int Jumlah=0;
		for(int i=0;i<=tumpukan.top;i++)
		Jumlah = Jumlah + tumpukan.data[i];
		cout<<" Jumlah Data : "<<Jumlah<<endl;
	} else
	cout<<"Stack Kosong"<<endl;
}

int main(){
	init();
		int pilihan;
		do{
			cout<<"\n\n1. PUSH\n"
			<<"2. POP\n"
			<<"3. CETAK\n"
			<<"4. JUMLAH\n"
			<<"5. QUIT\n";
			cin>>pilihan;
			switch(pilihan){
				case 1 :
					push();
					break;
				case 2 :
					pop();
					break;
				case 3 :
					cetak();
					break;
				case 4 :
					jumlah();
					break;
				case 5 :
					return 0;
					break;
				default :
					cout<<"Pilihan Tidak Tersedia"<<endl;
			}
		}while (pilihan!=5);
}