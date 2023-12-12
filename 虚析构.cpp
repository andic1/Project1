//#include<iostream>
//#include<string>
//using namespace std;
//class Animal {
//public:
//	Animal() {
//		cout << "animal的构造" << endl;
//	}
//	virtual void speak() = 0;
//	//两种都可以解决
//	//virtual ~ Animal() {
//	//	cout << "animal的析构" << endl;
//
////	}
//	virtual ~Animal() = 0;
//};
////有纯虚析构不可以实例化
//
//Animal:: ~Animal() {//用纯虚析构必须在类外写实现（解决时用）
//	cout << "animal的析构" << endl;
//}
//
//class Cat :public Animal
//{//子类有属性开辟堆区时，父类指针在释放时无法调用到子类的析构代码
//	//用父类虚析构，纯虚析构 都可以解决
//	//但是都要有代码实现
//public:
//	Cat(string name) {
//		cout << "cat的构造" << endl;
//		m_name = new string(name);
//	}
//
//	void speak() {
//		cout << *m_name<<"小猫在说话" << endl;
//	 }
//	~Cat() {
//		if (m_name != NULL) {
//			cout << "cat的析构" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	string *m_name;
//};
//
//
//
// void text1() {
//	 Animal* animal = new Cat("tom");
//	 animal->speak();
//	 delete animal;
//}
// 
// int main() {
//	 text1();
// }