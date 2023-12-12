//#include<iostream>
//#include<string>
//using namespace std;
//class Base {
//public:
//	//纯虚函数
//	//只要有一个纯虚就属于抽象类
//	//抽象类特点
//	//无法实例化对象
//	//子类要重写父类的纯虚，不然子类也是抽象类
//	virtual void func() = 0;
//};
//class Son :public Base
//{
//	void func() {
//		cout << "son" << endl;
//		
//	}
//};
//void text1() {
//	Base* base = new Son;
//	base->func();
//}
//int main() {
//	text1();
//}