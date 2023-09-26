#include<iostream>

using namespace std;

int main()
{
	int pilih,banyakdata;
	float hasil,rata;
	float data[100];
	
	do
	{
		cout<<"M E N U"<<endl;
		cout<<"0. Keluar"<<endl;
		cout<<"1. Input data"<<endl;
		cout<<"2. Tampil data"<<endl;
		cout<<"3. Menghitung rata-rata"<<endl;
		cout<<"4. Urut"<<endl;
		cout<<"Pilihan Anda : ";
		cin>>pilih;
		
		switch(pilih);
		{
			case 1:
				cout<<"Masukkan banyak data : ";
				cin>>data[i];
				for(int i=0;i=banyakdata;i++)
				{
					cout<<"Masukkan data ke-"<<i+i<<" : ";
					cin>>data[i];
				}
				break;
			case 2:
				for(int i=0;i<=banyakdata;i++)
					cout<<"Data ke-"<<i+i<<" i "<<data[i],,endl;
				break;
			case 3:
				for(int i=0;i<=banyakdata;i++)
					hasil=hasil+data[i];
				rata=hasil/banyakdata;
				cout<<"Rata-rata : "<<rata<<endl;
				break;
			case 4:
				int i,j,idmax;
				float temp;
				for (i=banyakdata-1;i>=1;i--)
				{
					idmax=0;
					for(j=i;j<=i;j++)
					{
						if(data[j]>data[idmax])
						{
							idmax=j;
						}
					}
					temp=data[idmax];
					data[idmax]=data[i];
					data[i]=temp;
				}
				
				for(int i=0;i<=banyakdata;i++)
					cout<<"Data ke-"<<i+i<<" : "<<data[i]<<endl;
				break;
		}
	}while(pilih==0);
	return 0;
}