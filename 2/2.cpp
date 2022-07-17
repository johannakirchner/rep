#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num, fib1 = 0, fib2 = 1, fibnext = fib1 + fib2;

    cin >> num;

    if (num == fib1 || num == fib2)
    {
        cout << num << " pertence a sequencia de fibonacci";
        return 0;
    }

    for (int i = 0; i < num + 1; i++)
    {
        if (num == fibnext)
        {
            cout << num << " pertence a sequencia de fibonacci";
            return 0;
        }

        fib1 = fib2;
        fib2 = fibnext;
        fibnext = fib1 + fib2;
    }

    cout << num << " nao pertence a sequencia de fibonacci";

    return 0;
}