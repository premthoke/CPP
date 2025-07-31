//Patterns
//(same logic to print * only change is cout<<" * ";)

//ABCD
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64);
        }
        cout << endl;
    }
    return 0;
}


//1111-2222-3333-4444
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout <<i;
        }
        cout << endl;
    }
    return 0;
}

//1234-1234-1234
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}


// StarPlus
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int mid = n/2+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==mid || j==mid) cout <<"* ";
            else cout<<"# ";
        }
        cout << endl;
    }
    return 0;
}
