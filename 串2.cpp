//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#define max 100
//
//typedef struct a {
//    char ch[max];
//    struct a* next;
//    int length;
//} sstring;
//
//int a(sstring s, sstring t, int pos) {
//    int i = pos;
//    int j = 0;
//    while (i < s.length && j < t.length) { // 将 j 与 t.length 进行比较
//        if (s.ch[i] == t.ch[j]) {
//            i++;
//            j++;
//        }
//        else {
//            i = i - j + 1;
//            j = 0;
//        }
//    }
//    if (j == t.length) { // 将判断条件更改为 j == t.length
//        return i - t.length;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    sstring s;
//    sstring t;
//
//    strcpy_s(s.ch, sizeof(s.ch), "abcdefghijk");
//    strcpy_s(t.ch, sizeof(t.ch), "defgh");
//    s.length = strlen(s.ch);
//    t.length = strlen(t.ch);
//    int result = a(s, t, 0);
//    cout << "子串起始位置: " << result << endl;
//
//    return 0;
//}