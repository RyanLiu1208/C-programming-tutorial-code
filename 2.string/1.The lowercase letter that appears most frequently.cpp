/************************************************************************
 * 输入一个由小写字母组成的字符串（字符数量<=100），输出出现次数最多的小写字母。
注意：如果有多个小写字母出现的次数一样多，则输出ASCII码值最大的那个字母。
Input：
一个字符串
Output：
出现次数最多的小写字母
Sample Input
aaabbbbbbbbbcdxs
Sample Output
b
 *******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[101];
    cin >> str;
    
    int count[26] = {0}; // 统计每个小写字母出现的次数
    int maxCount = 0; // 最大出现次数
    char result = 'a'; // 最终结果，初始为'a'
    
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++; // 更新对应字母的计数
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount || (count[i] == maxCount && (char)(i + 'a') > result)) {
            maxCount = count[i];
            result = (char)(i + 'a'); // 更新结果
        }
    }
    
    cout << result << endl; // 输出结果
    return 0;
}