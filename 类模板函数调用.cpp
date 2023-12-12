//#include<iostream>
//#include<string>
//using namespace std;
//class person1 {
//public:
//	void func1(){
//		cout << "person1的调用" << endl;
//	}
//};
//class person2 {
//public:
//	void func2() {
//		cout << "person2的调用" << endl;
//	}
//};
//template <class T>
//class son {
//public:
//	T obj;
//	void fun1() {
//		obj.func1();
//	}
//	void fun2() {
//		obj.func2();
//	}
//};
//void text1() {//类模板中的成员函数，在调用时才会创建
//	son<person1> s;//一个对应一个
//	s.fun1();
//	son<person2> ss;
//	ss.fun2();
//}
//int main() {
//	text1();
//}