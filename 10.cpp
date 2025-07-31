//Trangle

//1-12-123-1234
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}


//1-13-135-1357 (odd nums)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<2*j-1;
        }
        cout << endl;
    }
    return 0;
}


//1 23 456 78910
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int a=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<a<<" ";
            a++
        }
        cout << endl;
    }
    return 0;
}


