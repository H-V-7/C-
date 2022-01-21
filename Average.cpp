#include <iostream>
#include <cstdio>

using namespace std;



int main()
{
    int a{},b{},c{}; //list initialization
    cout << "Enter 3 numbers:" <<endl; //double quotes reserves space for input
    cin >> a >> b >> c;
    int sum = a + b + c;
    float avg = a+b+c/3;
    printf("%d\n",sum);
    printf("%f\n",avg);
    return 0;
}
