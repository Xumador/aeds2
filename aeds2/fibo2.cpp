#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int t1 = 0, t2 = 1;
    int prox = t1 + t2;
    cout << t1 << " " << t2;
    for (int i = 3; i < n; ++i)
    {
        cout << " " << prox;
        t1 = t2;
        t2 = prox;
        prox = t1 + t2;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}