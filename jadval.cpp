#include<iostream>
using namespace std;

int main(void)
{
   
    int n, m;
    cin >> n >> m;
    for (int c = 1; c <= n; c++)
    {
        cout << c << "| ";
        for (int i = 1; i<= m; i++)
        {
            cout << i * c << '\t';
        }
        cout << endl;
    }
    return 0;
}