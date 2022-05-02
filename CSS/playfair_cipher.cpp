#include <iostream>
#include <map>
using namespace std;
void getCaesarCipher()
{
    map <char, int> mapChar;
    map<int, char> cntMap;
    int cnt = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        mapChar[c] = cnt;
        cntMap[cnt] = c;
        cnt += 1;
    }
    int type;
    cin >> type;
    int toBeEncrypted = 1;
    int toBeDecrypted = 2;
    if (type == toBeEncrypted)
    {
        // Encryption
        string input;
        cin >> input;
        int key;
        cin >> key;
        string decrypted = "";
        int encryptedLength = input.length();
        for (int i = 0; i < encryptedLength; i++)
        {
            if (input[i] == ' ')
                continue;
            decrypted += (cntMap[(mapChar[input[i]] + key) % 26]);
        }
        cout << decrypted << endl;
    }
    else
    {
        // Decryption
        string input;
        cin >> input;
        int key;
        cin >> key;
        string encrypted = "";
        int decryptedLength = input.length();
        for (int i = 0; i < decryptedLength; i++)
        {
            if (input[i] == ' ')
                continue;
            int curr = mapChar[input[i]] - key;
            if (curr < 0)
            {
                curr += 26;
            }
            encrypted += (cntMap[curr]);
        }
        cout << encrypted << endl;
    }
    cout << endl;
}
int main()
{
    getCaesarCipher();
    return 0;
}