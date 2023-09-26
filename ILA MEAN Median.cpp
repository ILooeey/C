#include <iostream>
//program ila

using namespace std;

int main()
{
 int i,n;
 float rata,jum,tengah;
 int pilih,banyakdata;
 int data[100];


do
 {
  cout<<"M E N U"<<endl;
  cout<<"1. Input data"<<endl;
  cout<<"2. Tampil data"<<endl;
  cout<<"Pilihan Anda : ";
  cin>>pilih;
  
  switch(pilih)
  
  {
   case 1:
    cout<<"Masukkan banyak data : ";
    cin>>n;
    for(int i=0;i<n;i++)

   {
     cout<<"Masukkan data ke-"<<i+1<<" : ";
     cin>>data[i];
     	jum=jum+data[i];
     	
         rata=jum/n; // MEAN
    }
    { //Median
    if(n%2==0)
	 {
    tengah=(data[(n/2)]+data[(n/2)-1])/2;
	}
		else
		{
    tengah=data[(n/2)];
	}
	
		cout<<endl;
	cout<<"Nilai Tengah	 = "<<tengah;
	}
	
    break;
   case 2:
    for(int i=0;i<banyakdata;i++)
     cout<<"Data ke-"<<i+1<<":"<<data[i]<<endl;
  
   
  }
    cout<<endl;
    cout<<"Jumlah Nilai Data = "<<jum<<endl;
    cout<<"Rata-rata Nilai = "<<rata<<endl;
    break;
        }
  
  while(pilih!=0);
  
 return 0;
 }
