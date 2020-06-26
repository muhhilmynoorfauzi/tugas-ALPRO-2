#include<iostream>
#include<conio.h>
using namespace std;

struct data
    {
        char nim[12], nama[20];
        int tugas, kuis, mid, uas;
        double nilai_akhir;
    };

int main ()
{
	struct data mahasiswa[20];
	
	cout<<"................................................."<<endl;
	cout<<"     Tugas Akhir Algoritma dan Pemrograman"<<endl;
	cout<<"................................................."<<endl;
	int a,b;
	cout<<"Masukan Jumlah Mahasiswa : ";
	cin>>b;
	for(a=0;a<b;a++)
	{
		cout<<"Masukan Nama Mahasiswa   : ";
	    cin>>mahasiswa[a].nama;
	    cout<<"Masukan NPM Mahasiswa    : ";
	    cin>>mahasiswa[a].nim;
	    cout<<"Masukan Nilai Tugas      : ";
	    cin>>mahasiswa[a].tugas;
	    cout<<"Masukan Nilai Kuis       : ";
	    cin>>mahasiswa[a].kuis;
	    cout<<"Masukan Nilai UTS        : ";
	    cin>>mahasiswa[a].mid;
	    cout<<"Masukan Nilai UAS        : ";
	    cin>>mahasiswa[a].uas;
	    cout<<endl;
	}
	cout<<endl;
	cout<<"............................................................"<<endl;
	cout<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Tugas"<<"\t"<<"Kuis"<<"\t"<<"UTS"<<"\t"<<"UAS"<<"\t"<<"Nilai Akhir"<<"\t"<<endl;
	cout<<"............................................................"<<endl;
	for(a=0;a<b;a++)
	{
	    mahasiswa[a].nilai_akhir=(mahasiswa[a].tugas*20/100)+(mahasiswa[a].kuis*20/100)+(mahasiswa[a].mid*30/100)+(mahasiswa[a].uas*40/100);
		cout<<mahasiswa[a].nama<<"\t"<<mahasiswa[a].nim<<"\t"<<mahasiswa[a].tugas<<"\t"<<mahasiswa[a].kuis<<"\t"<<mahasiswa[a].mid<<"\t"<<mahasiswa[a].uas<<"\t"<<mahasiswa[a].nilai_akhir;

		if (mahasiswa[a].nilai_akhir>85)
    	cout<<" A  (4.00)";
		else if (mahasiswa[a].nilai_akhir>=81)
	    	cout<<" A- (3.75)";
		else if (mahasiswa[a].nilai_akhir>=76)
	    	cout<<" B+ (3.50)";
		else if (mahasiswa[a].nilai_akhir>=71)
	    	cout<<" B  (3.00)";
		else if (mahasiswa[a].nilai_akhir>=66)
	    	cout<<" B- (2.75) ";
	    else if (mahasiswa[a].nilai_akhir>=61)
	    	cout<<" C+ (2.50)";
	    else if (mahasiswa[a].nilai_akhir>=51)
	    	cout<<" C  (2.00)";
	    else if (mahasiswa[a].nilai_akhir>=45)
	    	cout<<" D  (1.00)";
	    else if (mahasiswa[a].nilai_akhir<45)
	    	cout<<" E  (0.00)";
	    cout<<endl;
	}
	cout<<endl;
	}
