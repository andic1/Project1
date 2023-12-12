//#include<iostream>
//#include<string>
//using namespace std;
//
//class person {
//public:
//	person(string name,int age) {
//		m_name = name;
//		m_age = age;
//	}
//	int m_age;
//	string m_name;
//
//	bool operator==(person& p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//			return true;
//		else 
//			return false;
//	}
//	bool operator!=(person& p) {
//		if (this->m_age != p.m_age || this->m_name != p.m_name)
//			return true;
//		else
//			return false;
//	}
//};
//
//void text1() {
//	person p1("tom", 18);
//	person p2("tim", 18);
//	if (p1 != p2)
//		cout << "不相同的" << endl;
//	else
//		cout << "相同的" << endl;
//}
//int main() {
//	text1();
//}