//#include <iostream>
//#include <string>
//using namespace std;
//class Building {
//	friend void a(Building& b);//全局函数做友元，可以访问私有
//
//private:
//	string setroom;
//	string sleeproom;
//	
//public:
//	Building() {
//		this->setroom = "客厅";
//		this->sleeproom = "卧室";
//	}
//};
//  void a(Building &b) {//全局函数
//	cout <<"666"<< b.setroom << endl;
//}
//void text1() {
//	Building b;
//	a(b);
//}
//int main() {
//	text1();
//}