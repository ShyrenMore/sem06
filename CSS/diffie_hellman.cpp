#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int modular_power(long long x, unsigned int y, int p)
{
    int res = 1; 
    x = x % p; // Update x if it is more than or
    // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

void diffieHellman(int p, int q, int x, int y)
{
    int r1 = modular_power(q, x, p);
    int r2 = modular_power(q, y, p);

    cout << "\nr1 :: " << r1;
    cout << "\nr2 :: " << r2;

    int k1 = modular_power(r2, x, p);
    int k2 = modular_power(r1, y, p);
    cout << "\nk using R2, x, p :: " << k1;
    cout << "\nk using R1, y, p :: " << k2;
}

int main()
{
    long long int p, q, x, y;
    cin >> p >> q >> x >> y;
    diffieHellman(p, q, x, y);
    return 0;
}