// day4 백준 최댓값 문제 풀이
// 23.05.16

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int> > height;
    int a = 0;
    int max = 0;
    int x, y;

    for (int i = 0; i < 9; i++)
    {
        vector<int> width;
        for (int j = 0; j < 9; j++)
        {
            cin >> a;
            width.push_back(a);
            height.push_back(width);
            if (a > max)
            {
                max = a;
                x = i + 1;
                y = j + 1;
            }
        }
        
    }

    cout << max << "\n" << x << " " << y;
}
