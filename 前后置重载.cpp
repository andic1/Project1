//#include <iostream>
//#include <string>
//using namespace std;
//class person {//ǰ�����ض�Ҫ������
//	
//public:
//	person() {
//		m_a = 0;
//	}
//
//person& operator++() {
//	m_a++;
//	return *this;//thisָ�����m_a
//	}
//
//person operator++(int) {//����++
//	person temp = *this;
//	m_a++;
//	return temp;
//}
//public:
//	int m_a;
//};
//ostream& operator<<(ostream& cout, person p) {//ȫ��
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