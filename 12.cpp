//Library Function

//new header file

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << sqrt(10) << endl;
    cout << cbrt(10) << endl;
    cout << min(10, 6) << endl;
    cout << max(10, 6) << endl;
    cout << pow(10, 6) << endl;
}

//Combination & permutation

//combination

#include <iostream>
#include <cmath>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int r;
    cout << "enter r" << endl;
    cin >> r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);
    cout << a / (b * c);
}


//Permutation 
//homework
