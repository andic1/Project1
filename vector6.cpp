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
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printfvector(v1);
//	v1.pop_back();//尾删
//	printfvector(v1);
//	v1.insert(v1.begin(), 100);//插入
//	printfvector(v1);
//	v1.insert(v1.begin(), 2,100);//插入2个100
//	printfvector(v1);
//	v1.erase(v1.begin());//删除
//	printfvector(v1);
//	v1.erase(v1.begin(),v1.begin()+3);//删除
//	//左闭右开
//	printfvector(v1);
//
//	v1.clear();//清空
//	printfvector(v1);
//
//}
//int main() {
//	text1();
//}