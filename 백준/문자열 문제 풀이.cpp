// 백준 9086번 문자열 문제 풀이
//23.05.15

#include <iostream>
#include <string>
using namespace std;
int main() {

    string str;
    
    int num;
    
    cin >> num;
    
    while (num--) {
    
        cin >> str;
        
        int end = str.size();
        
        cout << str[0] << str[end - 1] << '\n';
        
    }
    
}
