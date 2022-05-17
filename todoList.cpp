#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

vector<string> list;
int key;
string str;

void help()
{
    cout << "  Enter 1 to ADD          " << endl;
    cout << "  Enter 2 to REMOVE TASK  " << endl;
    cout << "  Enter 0 to EXIT         " << endl;
    cout << endl;
}
void todoList()
{
    cout << "              ------------------------------------" << endl;
    cout << "              |          TO DO LIST              |" << endl;
    cout << "              ------------------------------------" << endl;
    cout << "\n";
    for (size_t i = 0; i < list.size(); i++)
    {
        cout << "            " << i + 1 << " " << list.at(i) << endl;
    }
    cout << "              -----------------------------------" << endl;
    cout << "\n";
}
void management()
{
    todoList();
    while (1)
    {

        if ((key == 1 || (key == 2)) && list.size() != 0)
        {

            todoList();
        }

        help();

        cout << "Enter a key: ";
        cin >> key;

        if (key == 1)
        {
            cout << "Enter your task: ";
            getline(cin >> ws, str);
            list.push_back(str);
        }
        else if (key == 2 && list.size() == 0)
        {
            cout<<endl;
            cout << "No task added" << endl;
            cout<<endl;
        }
        else if (key == 2)
        {
            list.erase(list.begin());
            if (list.size() == 0)
            {
                system("clear");
                todoList();
            }
        }
        else if (key == 0)
        {

            system("clear");
            break;
        }
        else
        {
            cout<<endl;
            cout << "Invalid Input!" << endl;
            cout<<endl;
        }
        if ((key == 1 || (key == 2)) && list.size() != 0)
        {

            system("clear");
        }
    }
    todoList();
}

int main()
{
    management();
    return 0;
}