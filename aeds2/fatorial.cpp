#include <iostream>
using namespace std;

int fatorial(int n)
{
    int fat = 1;
    if (n < 0)
        return -1;
    while (n > 1)
    {
        fat = fat * n;
        n--;
    }
    return fat;
}
int recfat(int n)
{
    if (n < 2)
        return 1;
    else
        return n * recfat(n - 1);
}
int main()
{
    int n, ft;
    cout << "Cálculo do Fatorial" << endl;
    cout << "Digite o valor de n: ";
    cin >> n;
    cout << "Resultado: " << fatorial(n) << endl;
    cout << recfat(n);
}