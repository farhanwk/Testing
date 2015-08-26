#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    double x1, x2;

    cout<<("Input a: ");
    cin>>a;
    cout<<("Input b: ");
    cin>>b;
    cout<<("Input c: ");
    cin>>c;

    x1=((-1*b) + (sqrt((b * b) - (4 * a * c)))) / (2 *a);
    x2=((-1*b) - (sqrt((b * b) - (4 * a * c)))) / (2 *a);

    cout<<("")<<endl;
    cout<<("===HASIL===")<<endl;
    cout<<("X1 = ")<<x1<<endl;
    cout<<("X2 = ")<<x2;
    cout<<("")<<endl;
    return 0;
}

