//#include<iostream>
//using namespace std;
//typedef struct a {
//	int data;
//	struct a* next;
//}qnode,*queueptr;
//typedef struct {
//	queueptr front;//头指针
//	queueptr rear;
//}linkqueue;
//int a(linkqueue &q) {
//	q.front=q.rear = new qnode;
//	q.front->next = NULL;//头节点
//}
//void b(linkqueue& q,int &e) {//链队列不用尾指向下一个
//	queueptr p = new qnode;
//	p->data = e;
//	p->next = NULL;
//	q.rear->next = p;
//	q.rear = p;
//}
//int c(linkqueue& q ) {
//	if (q.front == q.rear) return 0;
//	queueptr p= q.front->next;
//	q.front->next = p->next;
//	if (q.rear == p) q.rear = q.front;
//	delete p;
//}
//int main() {
//	linkqueue q;
//}