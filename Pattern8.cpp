#include <iostream>
using namespace std;

void print1(int n)
{
    for(int i=0; i<n; i++)
    {
        //Space
        for(int j=0; j<i; j++) //Since on 0th row there are 0 spaces J loop must run exactly i time that is 
        {
            cout << " "; //equal to number of rows if 1 space then i must run exactly 1 times and print space
        }

        //Star
        for(int j=0; j<2*n - (2 * i + 1); j++)
        {
            cout << "*";

        } 


        //Space
        for(int j=0; j<i ; j++)
        {
            cout << " ";
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