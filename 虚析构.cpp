//#include<iostream>
//#include<string>
//using namespace std;
//class Animal {
//public:
//	Animal() {
//		cout << "animal�Ĺ���" << endl;
//	}
//	virtual void speak() = 0;
//	//���ֶ����Խ��
//	//virtual ~ Animal() {
//	//	cout << "animal������" << endl;
//
////	}
//	virtual ~Animal() = 0;
//};
////�д�������������ʵ����
//
//Animal:: ~Animal() {//�ô�����������������дʵ�֣����ʱ�ã�
//	cout << "animal������" << endl;
//}
//
//class Cat :public Animal
//{//���������Կ��ٶ���ʱ������ָ�����ͷ�ʱ�޷����õ��������������
//	//�ø������������������� �����Խ��
//	//���Ƕ�Ҫ�д���ʵ��
//public:
//	Cat(string name) {
//		cout << "cat�Ĺ���" << endl;
//		m_name = new string(name);
//	}
//
//	void speak() {
//		cout << *m_name<<"Сè��˵��" << endl;
//	 }
//	~Cat() {
//		if (m_name != NULL) {
//			cout << "cat������" << endl;
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