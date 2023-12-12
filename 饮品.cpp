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
//		cout << "煮水" << endl;
//	}
//	void pao() {
//		cout << "泡水" << endl;
//
//	}
//	void putcup() {
//		cout << "倒入" << endl;
//
//	}
//	void getsomething() {
//		cout << "加糖" << endl;
//
//	}
//};
//class tea :public drink
//{
//public:
//	void zhu() {
//		cout << "煮水" << endl;
//	}
//	void pao() {
//		cout << "泡水" << endl;
//
//	}
//	void putcup() {
//		cout << "倒入" << endl;
//
//	}
//	void getsomething() {
//		cout << "加111" << endl;
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