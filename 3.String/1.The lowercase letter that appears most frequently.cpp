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
	string str;
    cin>>str;
    int count[26] = {0,};
    char letter = '!';
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++; // 更新对应字母的计数
    }
    int maxCount = 0; // 最大出现次数
    for(int j = 0; j < 26; j++){
        if(count[j] >= maxCount){
            maxCount = count[j];
            letter = j + 'a';
        }
    }
    cout<< letter;
    return 0;
}