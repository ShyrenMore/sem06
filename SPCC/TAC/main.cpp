#include <iostream>
#include <stack>
#include <string>
using namespace std;

int getPrecedence(char c)
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    return 1;
}

string infixToPostfix(string ip)
{
    string res;
    stack<char> st;
    int n = ip.length();
    for (int i = 0; i < n; i++)
    {
        if ((ip[i] >= 'A' && ip[i] <= 'Z') || (ip[i] >= 'a' && ip[i] <= 'z'))
            res.push_back(ip[i]);
        else if(ip[i] == '(')
            st.push('(');
        else if(ip[i] == ')')
        {
            while(st.top() != '(')
            {
                res.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else  
        {
            while(!st.empty() && getPrecedence(ip[i]) <= getPrecedence(st.top())) 
            {
                res.push_back(st.top());
                st.pop();
            }
            st.push(ip[i]);
        }
    }

    while(!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }

    // cout << res;
    return res;
}

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void TAC(string postfix, string input)
{
    stack<string> s;
    cout << "\nTAC statements :: \n";

    int ct = 1;
    for (int i = 0; i < postfix.length(); i++)
    {
        if(!isOperator(postfix[i]))
            s.push(string(1, postfix[i]));
        else 
        {
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();

            string intr_rhs = (op1) + postfix[i] + (op2);
            string intr_lhs = 't' + to_string(ct) ;

            cout << ct << ". " << intr_lhs << " = "<< intr_rhs<<"\n";
            ++ct;

            s.push(intr_lhs);
        }
    }

    cout << ct << ". " << input[0] << " = " << s.top() << "\n";
    s.pop();
    return;
}

int main()
{
    string ip = "a=b*c+e";
    string infix = ip.substr(2, ip.length() - 1);
    string postfix = infixToPostfix(infix);
    TAC(postfix, ip);
    // cout << postfix;
}