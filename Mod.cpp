/*Menentukan Sisa Pembagian (Modulo) "%"
Dengan C++
*/
#include<iostream>
using namespace std;
int main()
{
    int bil, mod;

    cout << "Berikan bil anda : ";
    cin >> bil;

    mod = bil %10;

    cout<<"Sisa Pembagian dari"<<bil<<"%10 adalah :"<<mod;
    endl (cout);
    system("pause");
    return 0;
}

