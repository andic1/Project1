//#include<iostream>
//#include<string>
//using namespace std;
//template <class T1,class T2>
//class person {
//	//全局函数
//	//必须有friend 不然就是person里的
//	friend void func(person<T1,T2> p) {
//		cout << p.m_name << "  " << p.m_age << endl;
//	}
//public:
//	person(T1 name, T2 age) {
//		m_name = name;
//		m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//void text1() {
//	person<string, int>p("tom", 17);
//	func(p);
//}
//int main() {
//	text1();
//}