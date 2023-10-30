// 23.10.30
// 레벨3 거스름돈 문제 풀이

#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int solution(int n, vector<int> money) 
{
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < money.size(); ++i) 
    {
        for (int j = money[i]; j <= n; ++j) 
        {
            dp[j] += dp[j - money[i]];
            dp[j] %= MOD;
        }
    }

    return (int)dp[n];
}

int main()
{
    int n;
    int m;

    cin >> n >> m;

    vector<int> money(m);

    for (int i = 0; i < m; i++)
    {
        cin >> money[i];
    }

    cout << solution(n, money);
}
