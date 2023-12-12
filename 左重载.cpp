//#include <iostream>
//#include <string>
//using namespace std;
//class person {
//	friend	ostream& operator<<(ostream& cout, person& p);//可以访问本类
//public:
//	person(int a, int b) {
//		m_a = a;
//		m_b = b;
//	}
//private:
//	int m_a;
//	int m_b;
//};
//
//ostream& operator<<(ostream& cout, person& p) {//输出流ostream
//	cout << p.m_a << "  " << p.m_b ;
//	return cout;//可以加endl，链式输出
//}
//
//void text() {
//	person p(10,14);
//
//	cout << p << endl;
//}
//
//int main() {
//	text();
//}