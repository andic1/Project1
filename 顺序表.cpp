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
//void a(sqlist& l) {//��ʼ��
//	l.num = 0;
//	l.elem = new ax[100];
//}
//void b(sqlist& l) {//����
//	for (int i = 0; i < 4; i++) {
//		cout << "������id��name:" << endl;
//		cin >> l.elem[i].id , l.elem[i].name;
//		l.num++;
//		cout << "���ӳɹ���" << endl;
//	}
//}
//int c(sqlist &l,string e){//����
//	for (int i = 0; i < l.num; i++) {
//		if (l.elem[i] .id== e) return i + 1;//c++�����ԱȽϽṹ��ʵ���Ƿ���� 
//		return -1;
//	}
//}
//void d(sqlist& l, int i, ax e) {//��i������e
//	for (int j = l.num - 1; j >= i - 1; j--) {//i-1Ҫ���� ���Ե�i-1Ϊͣ
//		l.elem[j + 1] = l.elem[j];
//	}
//	l.elem[i - 1] = e;//��i����e
//	l.num++;
//}
//void e(sqlist& l, int i) {//ɾ��
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
