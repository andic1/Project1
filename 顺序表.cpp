//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//typedef struct ax {
//	char id[20];
//	char name[20];
//}ax;
//typedef struct axz {
//	ax* elem;
//	int num;
//}sqlist;
//
//void a(sqlist& l) {//初始化
//	l.num = 0;
//	l.elem = new ax[100];
//}
//void b(sqlist& l) {//增加
//	for (int i = 0; i < 4; i++) {
//		cout << "请输入id，name:" << endl;
//		cin >> l.elem[i].id , l.elem[i].name;
//		l.num++;
//		cout << "增加成功！" << endl;
//	}
//}
//int c(sqlist &l,string e){//查找
//	for (int i = 0; i < l.num; i++) {
//		if (l.elem[i] .id== e) return i + 1;//c++不可以比较结构体实例是否相等 
//		return -1;
//	}
//}
//void d(sqlist& l, int i, ax e) {//第i个插入e
//	for (int j = l.num - 1; j >= i - 1; j--) {//i-1要被换 所以到i-1为停
//		l.elem[j + 1] = l.elem[j];
//	}
//	l.elem[i - 1] = e;//第i个放e
//	l.num++;
//}
//void e(sqlist& l, int i) {//删除
//	for(int j = i; j<= l.num - 1; j++) {
//		l.elem[j - 1] = l.elem[j];
//	}
//	l.num--;
//}
//int main() {
//	sqlist l;
//	a(l);
//	b(l);
//	//c(l,3);
//	
//
//}
