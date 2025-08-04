//pascal triangle

#include <iostream>
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
int ncr(int n, int r)
{
    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);
    return a / (b * c);
}
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}

//Swap
//method 1(temp)
#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 4;
    int temp = 0;
    cout << a << " " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}

//method 2(maths)
#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 4;
    cout << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
    return 0;
}
