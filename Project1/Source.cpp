#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) 
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

void getTabl(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '\t';
        }
    }
    cout << str << endl;
}


int main() {

    setlocale(LC_ALL, "");

    string str = "Ko ro va";

    if (isPalindrome(str)) 
    {
        cout << "Строка является палиндромом" << endl;
    }
    else 
    {
        cout << "Строка не является палиндромом" << endl;
    }
    cout << endl;
    getTabl(str);

    return 0;




    return 0;
}