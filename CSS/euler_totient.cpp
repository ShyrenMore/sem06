#include <iostream>
#include <set>
#include <math.h>
using namespace std;

bool isPrime(int no)
{
    int i = 1;
    for (i = 2; i * i <= no; i++)
    {
        if (no % i == 0)
            return false;
    }

    return true;
}

float getTotient(int n)
{
    if (n == 1)
        return 1;
    else if (isPrime(n))
        return (n - 1);

    float res = n;

    set<int> primeFactors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            primeFactors.insert(i);
            n = n / i;
        }
    }

    if (n != 1)
        primeFactors.insert(n);

    for (auto x : primeFactors)
    {
        res *= (1 - (float)((float)1 / (float)x));
    }
    return res;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << "->" << getTotient(i) << "\n";
    }
}
