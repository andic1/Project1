//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
////相当于链表
////在尾，头操作
//using namespace std;
//void text1() {
//	vector<int> v1;
//	int num = 0;
//	int* p = NULL;
//	//所以利用reserve预留空间,只要开辟1次
//	v1.reserve(10000);
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//		if (p != &v1[0]) {
//			p = &v1[0];
//			num++;
//		}
//	}
//	//不断开辟新内存，再把之前的复制到新内存中
//	
//	cout << num;
//}
//int main() {
//	text1();
//}