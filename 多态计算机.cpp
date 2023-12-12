//#include<iostream>
//#include<string>
//using namespace std;
//class calculator {
//public:
//	virtual int result() {
//		return 0;
//	}
//	int num1;
//	int num2;
//};
//class add :public calculator
//{
//public:
//	int result() {
//		return num1 + num2;
//	}
//};
//class sub :public calculator
//{
//public:
//	int result() {
//		return num1 - num2;
//	}
//};
//class mul :public calculator
//{
//public:
//	int result() {
//		return num1 * num2;
//	}
//};
//void text1() {
//	//多态使用条件
//	//父类指针或引用指向子类对象
//	calculator* cal=new add;
//	cal->num1 = 12;
//	cal->num2 = 23;
//	int n = cal->result();
//	cout << n << endl;
//	delete cal;//只是删除了指向的地址，指针还存在，
//	//接下来可以置空，也可以指向新地址
//	cal = new sub;
//	cal->num1 = 23;
//	cal->num2 = 12;
//	cout << cal->result() << endl;
//
//}
//int main() {
//	text1();
//}