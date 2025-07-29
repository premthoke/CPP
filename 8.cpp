//While Loop

//count digits
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number!";
    cin >> n;
    int count;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "count of digits : " << count;
}
