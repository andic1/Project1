//#include<iostream>
//using namespace std;
//typedef struct lnode {//单链表
//	int data;
//	struct lnode* next;
//}londe,*linklist;
//void a(linklist &l) {//初始化
//	l = new lnode;//头节点
//	l->next = NULL;
//}
//void ax1(linklist& l, int n) {//创建  前插逆
//	linklist& p = l;
//	for (int a = 0; a < n; a++) {
//		p = new londe;
//		cin >> p->data;
//		p->next = l->next;
//		l->next = p;
//	}
//}
//	void ax2(linklist & l, int n) {//后插正!!!
//		linklist& p = l;
//		linklist &r = l;
//		for (int i = 0; i < n; i++) {
//			p = new londe;
//			cin >> p->data;
//			p->next = NULL;
//			r->next = p;
//			r = p;
//		}
//	}
//void b(linklist& l,int i,int &e) {//取值,p指向第i个节点
//	linklist p = l->next;
//	 int j = 1;//第1个节点
//	 while (j < i) {//第i个
//		 p = p->next;
//		 j++;
//	 }
//	 e = p->data;
//}
//void c(linklist& l, int i,int e) {//插入 第i个插入e
//	linklist& p = l->next;
//	int j = 1;
//	while (j < i -1) {
//		p = p->next;//p指向第i-1个
//		j++;
//	}
//	linklist s = new lnode;
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//}
//int main() {
//	linklist l;
//	a(l);
//	ax1(l, 4);
//
//}