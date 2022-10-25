#include <iostream>
using namespace std;

int fibonacci(int n, int ult, int penult)
{
    cout << ult << " ";
    if (ult + penult < n)
       return fibonacci(n, ult + penult, ult);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n,1,0);
}