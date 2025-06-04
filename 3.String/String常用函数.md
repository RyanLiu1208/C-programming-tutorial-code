size() / length()：返回字符串长度
empty()：判断字符串是否为空
at(pos)：返回指定位置的字符（带边界检查）
operator[]：返回指定位置的字符（不带边界检查）
append(str)：在末尾追加字符串
insert(pos, str)：在指定位置插入字符串
insert(pos, n, ch)：在指定位置插入 n 个字符 ch
erase(pos, len)：删除从 pos 开始的 len 个字符
replace(pos, len, str)：用 str 替换从 pos 开始的 len 个字符
substr(pos, len)：返回子串
find(str)：查找子串，返回首次出现的位置
rfind(str)：反向查找子串
compare(str)：比较字符串
c_str()：返回 C 风格字符串（const char*）
push_back(ch)：在末尾添加一个字符
pop_back()：删除末尾一个字符
clear()：清空字符串

stoi(num)：把字符串 num 转换为整数（stoi 是 string to int 的缩写）。
sum += ...：把转换后的整数加到 sum 上。
作用：把当前累积的数字字符串 num 转成整数，并加到总和 sum 里。
比如 num 是 "12"，执行后 sum 就加上 12。