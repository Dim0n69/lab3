#include <vector>
#include <cstring>
#include <iostream>
#include <string>
#include <iomanip>
#include <locale.h>
#include <algorithm>
using namespace std;

vector<string> new_users()
{
    vector<string> users;
    users.push_back("username");
    users.push_back("user");
 return users;
}

int main()
{
    setlocale(LC_ALL, "rus");
string name;

vector<string> users = new_users();
cout << "vvedite login: ";
    while(true)
    {
        getline(cin, name);

        if(!cin)
        {
            cout << "login incorrect" << endl;
            cin.clear();
            while (cin.get() != '\n');
        }
            else break;
    }
        if (find(users.begin(), users.end(), name) != users.end()) {
        cout << "Hello, " << name << "!" << endl;
    } else {
        cout << "Hello, Guest!" << endl;
    }


    system("pause");
    return 0;
}
