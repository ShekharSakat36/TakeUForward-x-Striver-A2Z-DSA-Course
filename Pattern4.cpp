#include <iostream>
using namespace std;

void print1(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i  << " ";
        }

        cout << endl;

    }
}

int main()
{
    int n,t;
    cin >> t;
    while(t--)
    {   
        cin >> n;
        print1(n);
    }
    return 0;
}
