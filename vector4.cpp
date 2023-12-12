//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//template <typename T>
//void printfvector(vector<T>&v) {
//	//记住typename vector<T>
//	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//void text1() {
//	vector<int> v1;//默认构造
//	for (int i = 1; i <=10; i++) {
//		v1.push_back(i);
//	}
//	printfvector(v1);
//	
//	vector<int> v2(v1.begin(), v1.end());//复制
//	//赋值也可以 v2=v1
//	//重要
//	printfvector(v2);
//	vector<int> v3(10, 5);
//	//构造10个5数据
//	printfvector(v3);
//
//	vector<int>v4(v3);
//	printfvector(v4);
//	vector<int> v5;
//	v5.assign(v1.begin(), v1.end());
//	//以这个为区间拷贝赋值给v5
//	//左闭右开
//	vector<int> v6;
//	v6.assign(10, 4);
//	//vector只有assion
//	//string 有assion(赋值) append（追加）
//	printfvector(v6);
//
//}
//
//int main() {
//	text1();
//	system("pause");
//}