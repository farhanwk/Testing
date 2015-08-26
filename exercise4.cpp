#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int temp;

    do{
        cout<<"Masukan angka: "; cin>>n;
        if(n<temp){
            temp = n;
        }
    } while(n != 9999);

    cout<<""<<endl;
    cout<<"Angka terkecil = "<<temp;

    return 0;
}
