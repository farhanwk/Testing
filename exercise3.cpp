#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int s1, s2, s3;
    int i=0;

    cout<<("Input side 1: ");
    cin>>s1;
    cout<<("Input side 2: ");
    cin>>s2;
    cout<<("Input side 3: ");
    cin>>s3;

    if(s1==s2){
        i++;
    }

    if(s1==s3){
        i++;
    }

    if(s2==s3){
        i++;
    }

    cout<<""<<endl;
    switch(i){
    case 0 : cout<<"Scalene";
        break;
    case 1 : cout<<"Isosceles";
        break;
    case 3 : cout<<"Equilateral";
        break;
    }
}
