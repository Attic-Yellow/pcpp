// day6 백준 스택 문제 풀이
// 23.05.18
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;

    vector<int> stack;

    for (int i = 0; i < num; i++)
    {
        string command;
        cin >> command;

        if (command == "push")
        {
            int x;
            cin >> x;
            stack.push_back(x);
        }
        else if (command == "pop")
        {
            if (stack.size() != 0)
            {
                cout << stack.back() << endl;
                stack.pop_back();
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (command == "size")
        {
            cout << stack.size() << endl;
        }
        else if (command == "empty")
        {
            if (stack.size() == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (command == "top")
        {
            if (stack.size() != 0)
            {
                cout << stack.back() << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
