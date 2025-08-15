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

//Power function - Logarithmic
#include<iostream>
using namespace std;
int power(int a, int b) {
    if(b == 0) return 1;
    int half = power(a, b/2);
    if(b % 2 == 0) return half * half;
    else return a * half * half;
}
int main() {
    int a, b;
    cout << "enter base: ";
    cin >> a;
    cout << "enter exponent: ";
    cin >> b;
    cout << power(a, b);
}

