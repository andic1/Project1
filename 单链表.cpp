//#include<iostream>
//using namespace std;
//typedef struct lnode {//������
//	int data;
//	struct lnode* next;
//}londe,*linklist;
//void a(linklist &l) {//��ʼ��
//	l = new lnode;//ͷ�ڵ�
//	l->next = NULL;
//}
//void ax1(linklist& l, int n) {//����  ǰ����
//	linklist& p = l;
//	for (int a = 0; a < n; a++) {
//		p = new londe;
//		cin >> p->data;
//		p->next = l->next;
//		l->next = p;
//	}
//}
//	void ax2(linklist & l, int n) {//�����!!!
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
//void b(linklist& l,int i,int &e) {//ȡֵ,pָ���i���ڵ�
//	linklist p = l->next;
//	 int j = 1;//��1���ڵ�
//	 while (j < i) {//��i��
//		 p = p->next;
//		 j++;
//	 }
//	 e = p->data;
//}
//void c(linklist& l, int i,int e) {//���� ��i������e
//	linklist& p = l->next;
//	int j = 1;
//	while (j < i -1) {
//		p = p->next;//pָ���i-1��
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