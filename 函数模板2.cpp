//#include<iostream>
//#include<string>
//using namespace std;
//void ax1(int a, int b) {
//	cout << "用的普通函数" << endl;
//
//}
//template <typename T>
//void ax1(T a, T b) {
//	cout << "用的模板函数" << endl;
//}
//template <typename T>
//int ax1(T a, T b,T c) {
//	cout << "用的模板函数（重载）" << endl;
//}
//void text1() {
//	int a = 12;
//	int b = 56;
//	ax1(a, b);//两个都有，会优先调用普通函数
//	ax1<>(a, b);//可以用空模板强制调用模板函数
//	char c = 'w';
//	char d = 'r';
//	ax1(c, d);//如果函数模板更加匹配就调用函数模板
//}
//int main() {
//	text1();
//}