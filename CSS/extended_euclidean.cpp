#include <iostream>
using namespace std;
int main()
{
    cout << "*** Implementation of Extended Euclidean algorithm * **\n\n ";
    int a, b, r, r1, r2, s, s1, s2, t, t1, t2, q, gcd;
    s1 = t2 = 1;
    s2 = t1 = 0;
    cout << "Enter values of a and b: ";
    cin >> a >> b;
    r1 = a;
    r2 = b;
    cout << "\nq\tr1\tr2\tr\tt1\tt2\tt\n";
    while (r2 > 0)
    {
        q = r1 / r2;
        r = r1 - q * r2;
        r1 = r2;
        r2 = r;
        s = s1 - q * s2;
        s1 = s2;
        s2 = s;
        t = t1 - q * t2;
        t1 = t2;
        t2 = t;
        cout << q << "\t" << r1 << "\t" << r2 << "\t" << r << "\t"
             << t1 << "\t" << t2 << "\t" << t << "\n";
    }
    gcd = r1;
    s = s1;
    t = t1;
    t1 = (t1 + 100) % 100;
    cout << "\nGCD(" << a << "," << b << "): " << gcd << "\n";
    cout << "\nInverse: " << t1 << "\n";

}