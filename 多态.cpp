//#include<iostream>
//#include<string>
//using namespace std;
//class Animal {
//public:
//	virtual void speak(){//虚函数
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat :public Animal
//{
//public://子类 虚 可加可不加 virtual 
//	void speak() {//重写父函数，（返回值，函数名，参数都一样）
//		cout << "小猫在说话" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak(){
//		cout << "小狗在说话" << endl;
//	}
//};
//void dospeak(Animal &animal) {
//	animal.speak();
//}
//void text1() {
//	Cat cat;
//	dospeak(cat);
//}
//int main() {
//	text1();
//}