//#include<iostream>
//#include<string>
//using namespace std;
//class drink {
//public:
//	virtual void zhu() = 0;
//	virtual void pao () = 0;
//	virtual void putcup() = 0;
//	virtual void getsomething() = 0;
//	void dodrink() {
//		zhu();
//		pao();
//		putcup();
//		getsomething();
//	}
//};
//class coffee :public drink
//{
//public:
//	void zhu() {
//		cout << "��ˮ" << endl;
//	}
//	void pao() {
//		cout << "��ˮ" << endl;
//
//	}
//	void putcup() {
//		cout << "����" << endl;
//
//	}
//	void getsomething() {
//		cout << "����" << endl;
//
//	}
//};
//class tea :public drink
//{
//public:
//	void zhu() {
//		cout << "��ˮ" << endl;
//	}
//	void pao() {
//		cout << "��ˮ" << endl;
//
//	}
//	void putcup() {
//		cout << "����" << endl;
//
//	}
//	void getsomething() {
//		cout << "��111" << endl;
//
//	}
//};
//void dodrink(drink *d) {//!!!!!!!!!!!!!!!!!!!!!  !!!!!!!!!!!!!
//	d->dodrink();
//	delete d;
//}
//void text1() {
//	dodrink(new coffee);
//	cout << "------------" << endl;;
//	dodrink(new tea);
//
//}
//int main() {
//	text1();
//}