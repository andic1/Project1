//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
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
//void text1() {
//	vector<person*> v;
//	    person p1("tom", 17);
//		person p2("timy", 19);
//		person p3("toaem", 15);
//		person p4("teeor", 17);
//		v.push_back(&p1);
//		v.push_back(&p2);
//		v.push_back(&p3);
//		v.push_back(&p4);
//		vector<person*>::iterator it;
//		for (it = v.begin(); it != v.end(); it++)
//				{
//					//it相当于指针
//					//（*it）类型看vector里面的类型
//					cout << (*it)->m_age << "  " << (**it).m_name << endl;
//					//(**it)相当于p
//				}
//
//}
//int main() {
//	text1();
//}