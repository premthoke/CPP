// print 1 to n without exta parameter

#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return; //base case
    print(n-1);      //call
    cout<<n<<endl;   //work
}
int main() {
    int n;
    cout<<"enetr n : ";
    cin>>n;
    print(n);
    return 0;
}

//print sun from  1 to n using return
#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;    
    return n + sum(n-1);
}
int main() {
    int n;
    cout<<"enetr n : ";
    cin>>n;
    cout<<sum(n);
    return 0;
}

//function which calculates 'a' raised to power 'b' using recursion
#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;    
    return a * power(a,b-1);
}
int main() {
    int a;
    cout<<"enetr a : "<<endl;
    cin>>a;
     int b;
    cout<<"enetr b : "<<endl;
    cin>>b;
    cout<<power(a,b);
    return 0;
}
