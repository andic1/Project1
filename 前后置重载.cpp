//#include <iostream>
//#include <string>
//using namespace std;
//class person {//前后重载都要在类内
//	
//public:
//	person() {
//		m_a = 0;
//	}
//
//person& operator++() {
//	m_a++;
//	return *this;//this指向的是m_a
//	}
//
//person operator++(int) {//后置++
//	person temp = *this;
//	m_a++;
//	return temp;
//}
//public:
//	int m_a;
//};
//ostream& operator<<(ostream& cout, person p) {//全局
//	cout << p.m_a;
//	return cout;
//}
//void text1() {
//	person p1;
//	cout << ++p1 << endl;
//}
//void text2() {
//	person p2;
//	cout << p2++<< endl;
//	cout << p2;
//}
//int main() {
//	text1();
//	text2();
//}