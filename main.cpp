
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
string name;
cout << "login: ";
    while(true)
    {
        getline(cin, name);

        if(!cin)
        {
            cout << "login incorrect\n";
            cin.clear();
             while(cin.get() !='\n');
        }
            else break;
    }
    cout << "Hello, " << name << endl;

    return 0;
}
