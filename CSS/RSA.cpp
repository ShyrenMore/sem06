#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
bool is_integer(float k)
{
    return floor(k) == k;
}

long int exponentiation(long int base,
                        long int exp, long int N)
{
    if (exp == 0)
        return 1;

    if (exp == 1)
        return base % N;

    long int t = exponentiation(base, exp / 2, N);
    t = (t * t) % N;

    // if exponent is even value
    if (exp % 2 == 0)
        return t;

    // if exponent is odd value
    else
        return ((base % N) * t) % N;
}

void calcRSA(int p, int q, int m)
{
    int n = p * q;
    int tot = (p - 1) * (q - 1);
    int i;
    for (i = 2; i < tot; i++)
    {
        if (__gcd(tot, i) == 1)
            break;
    }

    float e = i;

    int k = 1;
    while (true)
    {
        if (is_integer((1 + k * tot) / e))
        {
            // cout << "k: " << k << "\n";
            break;
        }
        k++;
    }

    int d = ((1 + k * tot) / e);

    cout << "\nPublic key: (" << e << "," << n << ")";
    cout << "\nPrivate key: (" << d << "," << n << ")";

    cout << "\nplain text:: " << m << "\n";
    int cipher_text = (fmod(pow(m, e), n));
    cout << "\ncipher text:: " << cipher_text << "\n";
    cout << "\ndecrypted text:: " << (exponentiation(cipher_text, d, n)) << "\n";
}

int main()
{
    int p, q, m;
    cout << "Enter p and q :: ";
    cin>>p>>q;
    cout << "Enter plain text M :: ";
    cin >> m;
    calcRSA(p, q, m);

    return 0;
}
