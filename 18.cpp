//Fibonacci of Nth using recursion
#include<iostream>
using namespace std;
int fibo(int n){
if(n==1 || n==2) return 1;
return fibo(n-1)+fibo(n-2);
}
int main()
{
int n;
cout<<"enter n";
cin>>n;
fibo(n);
cout<<fibo(n);
}
