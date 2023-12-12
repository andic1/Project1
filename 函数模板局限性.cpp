//#include<iostream>
//#include<string>
//using namespace std;
//class person {
//public:
//	person(string name, int age) {
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//template <typename T>
//bool ax1(T& a, T& b) {//不会对比自定义类型 person等等
//	if (a == b)
//		return true;//1
//	if (a != b)
//		return false;//0
//}
////用具体化person模板函数，会优先调用具体化
////具体化优先模板函数
////以template<>开头
//template<> bool ax1(person& p1, person& p2) {//要先有其他ax1
//	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
//		return true;
//	else
//		return false;
//
//}
//void text1() {
//	int a = 12;
//	int b = 123;
//	int n = ax1(a, b);
//	if (n) {
//		cout << "相同" << endl;
//	}
//	else {
//		cout << "不相同" << endl;
//
//	}
//
//}
//void text2() {
//	person p1("tom", 14);
//	person p2("timy", 15);
//
//	int n = ax1(p1, p2);
//	if (n) {
//		cout << "是相同的" << endl;
//	}
//	else
//		cout << "是不相同的" << endl;
//}
//int main() {
//	text1();
//	text2();
//}