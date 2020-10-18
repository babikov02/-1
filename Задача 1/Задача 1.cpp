#include <iostream>
using namespace std;

void output(const int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (!(a % i)) cout << i << "  ";
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cout << "Введите число: \n";
    cin >> a;
    output(a);
    return 0;
}
