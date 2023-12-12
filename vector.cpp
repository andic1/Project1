//#include<iostream>
//#include<string>
//#include<algorithm>
////提供c++下基于迭代器的模板函数
//using namespace std;
//#include<vector>
//void text1() {
//	vector<int> v;
//	//相当于指针
//	vector<int>::iterator it;
//	for (int i = 1; i < 11; i++) {
//		v.push_back(i);
//	}
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	it -= 1;
//	cout << *it << endl;
//	//erase是删除的意思
//	v.erase(it);
//	cout << v.size() << endl;//返回容器中的实际个数
//	sort(v.begin(), v.end());
//	//也可以相反排列
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	v.insert(v.begin(), 13);
//}
//int main() {
//	text1();
//}