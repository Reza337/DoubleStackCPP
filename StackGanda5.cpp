#include<iostream>
#define n 7
using namespace std;

//Inisialisasi Awal
struct Stack{
	int top1, top2, data[n];
}tumpukan;

//Kondisi Awal
void AWAL()
{
	tumpukan.top1 = -1;
	tumpukan.top2 = n;
}

//Proses PUSH1
void PUSH1()
{
	if(tumpukan.top2-tumpukan.top1>1)
	{
		tumpukan.top1++;
		cout<<"Masukan data:";
		cin>>tumpukan.data[tumpukan.top1];
		cout<<"Data "<<tumpukan.data[tumpukan.top1]<<" Masuk Stack 1\n";
	}else
	cout<<"Stack 1 Penuh\n";
}

//Proses POP1
void POP1()
{
	if(tumpukan.top1>-1)
	{
		cout<<"Data "<<tumpukan.data[tumpukan.top1]<<" Dihapus dari Stack 1\n";
		tumpukan.top1--;	
	}else
	cout<<"Stack 1 Kosong\n";
}

//Proses PUSH2
void PUSH2()
{
	if(tumpukan.top2-tumpukan.top1>1)
	{
		tumpukan.top2--;
		cout<<"Masukan data:";
		cin>>tumpukan.data[tumpukan.top2];
		cout<<"Data "<<tumpukan.data[tumpukan.top2]<<" Masuk Stack 2\n";
	}else
	cout<<"Stack 2 Penuh\n";
}

//Proses POP2
void POP2()
{
	if(tumpukan.top2<n)
	{
		cout<<"Data "<<tumpukan.data[tumpukan.top2]<<" Dihapus dari Stack 2\n";
		tumpukan.top2++;	
	}else
	cout<<"Stack 2 Kosong\n";
}

//Proses Cetak Stack 1
void CETAK1()
{
	if(tumpukan.top1>-1)
	{
		for(int i=0; i<=tumpukan.top1; i++)
		cout<<tumpukan.data[i]<<" ";
	}else
	cout<<"Stack 1 Kosong";
}

//Proses Cetak Stack 2
void CETAK2()
{
	if(tumpukan.top2<n)
	{
		int i;
		for(i<tumpukan.top2; i<n; i++) //menyimpan data kesebelah kiri
		cout<<tumpukan.data[i]<<" ";
	}else
	cout<<" Stack 2 Kosong";
}

//Program Utama
int main()
{
	int pilihan;
	AWAL();
	do{
		cout<<"=====================================================\n";
		cout<<"Nama		: Muhammad Reza Fadilah\n";
		cout<<"Nim		: 211011402020\n";
		cout<<"Kelas		: 03TPLE003\n";
		cout<<"=====================================================\n";
		CETAK1();
		CETAK2();
		cout<<"\n===================================================\n";
		cout<<"MENU:\n"
			<<"1. PUSH1\n"
			<<"2. POP1\n"
			<<"3. PUSH2\n"
			<<"4. POP2\n"
			<<"5. Keluar\n";
		cout<<"Masukan Pilihan: ";
		cin>>pilihan;
		switch(pilihan)
		{
			case 1:
				PUSH1();
				break;
			case 2:
				POP1();
				break;
			case 3:
				PUSH2();
				break;
			case 4:
				POP2();
				break;
			case 5:
				return 0;
				break;
			default:
				cout<<"Pilihan tidak tersedia\n";
				break;
		}
	}while(pilihan!=5);
}

















