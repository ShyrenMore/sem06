#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main()
{
    int n;
    cout << "Enter number of expressions : ";
    cin >> n;

    map<string, int> mp;
    vector<string> opt;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter expression " << (i + 1) << " : ";
        string exp;
        cin >> exp;

        string rhs = "";

        // store rhs
        for (int j = 0; j < exp.length(); j++)
        {
            if(exp[j] == '=')
            {
                rhs = exp.substr(j + 1, exp.length() - j + 1);
                break;;
            }
        }

        if(mp[rhs] == 0)
        {
            opt.push_back(exp);
            mp[rhs] = 1;
        }
    }

    cout << "Optimised code :: \n";
    for (auto it : opt)
        cout << it << "\n";
    return 0;
}

/*
ip:
Enter number of expressions : 6
Enter expression 1 : t1=-c
Enter expression 2 : t2=a+b
Enter expression 3 : t3=c*d
Enter expression 4 : t4=a+b
Enter expression 5 : t5=c*t4
Enter expression 6 : t6=c*d

op:
Optimised code ::
t1=-c
t2=a+b
t3=c*d
t5=c*t4
*/