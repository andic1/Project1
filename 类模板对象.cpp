//#include<iostream>
//#include<string>
//using namespace std;
//
//template <class T1,class T2>
//class person {
//public:
//	person(T1 name, T2 age) {
//		m_name = name;
//		m_age = age;
//	}
//	void showperson() {
//		cout << m_name << "  " << m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//
//};
////ָ����������
////�������
//void ax1(person<string, int>& p) {
//	p.showperson();
//}
//
//void text1() {
//	person<string, int> p1("tom",17);
//	ax1(p1);
//}
//
////����ģ�廯
//template <class T1,class T2>
//void ax2(person<T1, T2>& p) {
//	p.showperson();
//	cout << typeid(T1).name() << endl;//������������������
//}
////������ģ�廯
//
//template <class T>
//void ax3(T &p) {
//	p.showperson();
//}
//void text3() {
//	person<string, int> p3("tuatua", 19);
//	ax3(p3);
//}
//
//void text2() {
//	person<string, int> p2("timy", 18);
//	ax2(p2);
//}
//int main() {
//	text1();
//	text2();
//	text3();
//}