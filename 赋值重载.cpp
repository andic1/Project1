//#include<iostream>
//#include<string>
//using namespace std;
//
//class person {
//public:
//
//	person(int age) {
//		m_age = new int(age);
//	}
//
//	~person() {
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//	int *m_age;
//	person& operator=(person& p) {//p指右侧!!!!!!!!
//		if (m_age != NULL) {//释放p2
//			delete m_age;//被调用者p2
//			m_age = NULL;
//		}
//		 m_age = new int(*p.m_age);
//		 return *this;
//	}
//};
//
//void text1() {
//	person p1(10);
//	person p2(15);
//	person p3(16);
//	p2 = p1;
//	//p3=p2=p1 也可以
//	cout <<*p1.m_age << endl;
//	cout <<*p2.m_age << endl;
//	//cout << *p3.m_age << endl;
//
//
//}
//
//int main() {
//	text1();
//}
