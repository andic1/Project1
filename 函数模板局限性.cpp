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
//bool ax1(T& a, T& b) {//����Ա��Զ������� person�ȵ�
//	if (a == b)
//		return true;//1
//	if (a != b)
//		return false;//0
//}
////�þ��廯personģ�庯���������ȵ��þ��廯
////���廯����ģ�庯��
////��template<>��ͷ
//template<> bool ax1(person& p1, person& p2) {//Ҫ��������ax1
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
//		cout << "��ͬ" << endl;
//	}
//	else {
//		cout << "����ͬ" << endl;
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
//		cout << "����ͬ��" << endl;
//	}
//	else
//		cout << "�ǲ���ͬ��" << endl;
//}
//int main() {
//	text1();
//	text2();
//}