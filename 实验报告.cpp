//#include <iostream>
//#include <algorithm>
//#include <vector> 
//using namespace std;
//
//int main() {
//    vector<int> v; // 创一个v
//
//    // 输入数字并将其添加到vector中
//    cout << "请输入一些数字（以非数字字符结束输入）：" << endl;
//    int num;
//    while (cin >> num) {
//        v.push_back(num);
//    }
//
//    cout << endl;
//
//    // sort 是c++标准库自带的玩意
//    sort(v.begin(), v.end());
//
//
//    cout << "按照从大到小的顺序输出：" << endl;
//    for (int i = 0; i < v.size(); ++i) {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//    cout << endl;
//
//    system("pause");
//    return 0;
//}