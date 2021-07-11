#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    string command = "G()()()()(al)";
    string result;
    string o = "O";

    for (int i = 0; i < command.length(); i++)
    {
        if (command[i] == '(' && command[i + 1] == ')')
        {
            result.push_back('o');
            i++;
            
        }
        else if (command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')')
        {
            result.push_back('a');
            result.push_back('l');

            i + 3;
        }
        else if(command[i]=='G')
        {
            result.push_back('G');
        }
    }
    
    return result;
}