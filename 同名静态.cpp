//#include<iostream>
//#include<string>
//using namespace std;
//class base {//静态有两种访问方式
//public:
//	static void func() {
//		cout << "base静态" << endl;
//	}
//	static int m_a;
//};
//int base::m_a = 100;
//
//class son: public base
//{
//public:
//	static void func() {
//		cout << "son静态" << endl;
//	}
//
//	static int m_a;
//};
//int son::m_a = 200;
//
//void text1() {
//	son s;
//	cout << s.m_a << endl;
//	cout << s.base::m_a << endl;
//	cout << son::m_a << endl;
//	cout << base::m_a << endl;
//	cout <<son:: base::m_a << endl;
//	//类名son  作用域base
//}
//void text2() {
//	son s;
//	s.func();
//	s.base::func();
//	son::func();
//}
//
//int main() {
//	//text1();
//	text2();
//}