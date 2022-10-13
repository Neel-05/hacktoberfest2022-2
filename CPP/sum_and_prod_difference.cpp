#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int a)
{
    int sum = 0;
    while(a!=0)
    {
        int d = a%10;
        sum+=d;
        a/=10;
    }
    return sum;
}

int product(int b)
{
    int prod = 1;
    while(b!=0)
    {
        int d = b%10;
        prod*=d;
        b/=10;
    }
    return prod;
}

int main()
{
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    int s = sum(n);
    cout<<"Sum of the digits : "<<s<<endl;
    int p = product(n);
    cout<<"Product of the digits : "<<p<<endl;
    cout<<"Difference between Sum and Product : "<<s-p<<endl;
}
