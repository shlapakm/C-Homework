#include <iostream>
#include <string>
#include <vector>
int main()
{
    using namespace std;
    string s;
    vector<string> KoulunText;
    cout << "Enter original text here. At the end, write an # symbol if the text has ended" << endl;
    cin >> s;
    char LastSymbol = s[s.length() - 1];
    string StringLastSymbol = "";
    StringLastSymbol = StringLastSymbol + LastSymbol;
    while (s != "#")
    {
              switch (LastSymbol) 
            {
                case ',':
                {
                    s.pop_back();
                    KoulunText.push_back(s);
                    KoulunText.push_back(StringLastSymbol);
                    break;
                }
                case '.':
                {
                    s.pop_back();
                    KoulunText.push_back(s);
                    KoulunText.push_back(StringLastSymbol);
                    break;
                }
                case '?':
                {
                    s.pop_back();
                    KoulunText.push_back(s);
                    KoulunText.push_back(StringLastSymbol);
                    break;
                }
                case '!':
                {
                    s.pop_back();
                    KoulunText.push_back(s);
                    KoulunText.push_back(StringLastSymbol);
                    break;
                }
                case ':':
                {
                    s.pop_back();
                    KoulunText.push_back(s);
                    KoulunText.push_back(StringLastSymbol);
                    break;
                }
                case ';':
                {
                    s.pop_back();
                    KoulunText.push_back(s);
                    KoulunText.push_back(StringLastSymbol);
                    break;
                }
                default:
                {
                    KoulunText.push_back(s);
                    break;
                }

            }
        cin >> s;
        LastSymbol = s[s.length() - 1];
        StringLastSymbol = "";
        StringLastSymbol = StringLastSymbol + LastSymbol;
    }
    for (int i = 0; i < KoulunText.size(); i++)
        cout << KoulunText[i] << '\n';
    return 0;

}