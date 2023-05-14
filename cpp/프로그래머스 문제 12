//day3 최빈값 구하기 프로그래머스 문제 풀이
//23.05.14

#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int solution(vector<int> array) {
    int answer = 0;
    int num = 0;
    int count = 0;
    sort(array.begin(), array.end());
        
    
    for( int i = 0; i < array.size(); i++)
    {
        count++;
        if(i == array.size() || array[i] != array[i + 1])
        {
            if(count > num)
            {
                num = count;
                answer = array[i];
            }
            else if(count == num)
            {
                answer = -1;
            }
            count = 0;
        }
    }
    
    return answer;
}
