//#include<iostream>
//#include<math.h>
//#define max 100
//using namespace std;
//typedef struct a {
//	int* base;//����ַ
//	int front;//ͷ
//	int rear;
//}sqqueue;
//void a(sqqueue &q) {
//	q.base = new int[max];//��100�����ݿռ�
//	q.front = q.rear == 0;
//}
//int b(sqqueue& q) {
//	return abs(q.rear-q.front);//����ֵ
//}
//int c(sqqueue& q,int &e) {//���
//	if ((q.rear + 1) % max == q.front)//m���ռ�m-1��������
//		return 0;
//	q.base[q.rear] = e;
//	q.rear = (q.rear + 1) % max;
//}
//int d(sqqueue& q, int& e) {
//	if (q.front == q.rear) return 0;
//	e = q.base[q.front];
//	q.front = (q.front + 1) % max;
//}
//int main() {
//	sqqueue q;
//}