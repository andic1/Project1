//#include<iostream>
//#include<string>
//using namespace std;
//class base {//��̬�����ַ��ʷ�ʽ
//public:
//	static void func() {
//		cout << "base��̬" << endl;
//	}
//	static int m_a;
//};
//int base::m_a = 100;
//
//class son: public base
//{
//public:
//	static void func() {
//		cout << "son��̬" << endl;
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
//	//����son  ������base
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