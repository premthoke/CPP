// if else

//even odd
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int x;
   cout<<"enter number: ";
   cin>>x;
   if(x%2==0)
   {
    cout<<endl<<"even number";
   }
   else{
    cout<<endl<<"odd number";
   }
}

//marks
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "eneter marks";
    cin >> x;
    if (x >= 80 && x <= 100)
    {
        cout << "excellent";
    }
    else if (x >= 60)
    {
        cout << "good";
    }
    else if (x >= 40)
    {
        cout << "Well well well !!";
    }
    else
    {
        cout << "FAil !";
    }
}
