// day5 백준 2738번 행렬 덧셈 문제 풀이
// 23.05.17
//백터좋아

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    vector<vector<int> > height(x, vector<int>(y));
    vector<vector<int> > height2(x, vector<int>(y));
    vector<vector<int> > answer(x, vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> height[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> height2[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            answer[i][j] = height[i][j] + height2[i][j];
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
