//#include <iostream>
//#include <string>
//using namespace std;
//class Buliding {
//	//goodgay是这个的好朋友 可以随便访问本类
//	friend class goodgay;
//public:
//	string setroom;
//private:
//	string sleeproom;
//public:
//	Buliding();//可以不写内容
//};
//
//Buliding::Buliding() {//类外写函数
//	setroom = "客厅";
//	sleeproom = "卧室";
//
//};
//
//class goodgay {
//	
//public:
//	Buliding* buliding;
//	void visit() {
//		cout << buliding->setroom << endl;
//		cout << buliding->sleeproom << endl;
//
//	}
//	goodgay() {
//		buliding = new Buliding;
//	}
//};
//
//void text() {
//	goodgay gg;
//	gg.visit();
//}
//
//int main() {
//	text();
//}