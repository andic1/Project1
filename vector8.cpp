//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
////相当于链表
////在尾，头操作
//using namespace std;
//
//void printfvector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//void text1() {
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	for (int i = 4; i < 13; i++) {
//		v2.push_back(i);
//	}
//	printfvector(v1);
//	printfvector(v2);
//	v1.resize(3);
//	cout << "容量" << v1.capacity()<< endl;//改大小不会变容量
//	//收缩内存
//	vector<int>(v1).swap(v1);
//	cout << "容量：" << v1.capacity() << endl;
//	cout << "大小：" << v1.size() << endl;
//	cout << v1[2] <<endl;
//
//}
//int main() {
//	text1();
//}