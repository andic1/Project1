//#include<iostream>
//#include<string>
//using namespace std;
//template<class T>
//class Myarray {
//	friend void text1();
//	friend void text2();
//
//	Myarray(int capacity) {//����
//		cout << "�вε���" << endl;
//		this->m_Capacity = capacity;
//			this->m_Size = 0;//ʵ�ʸ���
//		//һ������
//		this->paddress = new T[this->m_Capacity];
//	}
//	~Myarray() {
//		if(paddress!=NULL)
//		{
//			cout << "��������" << endl;
//
//			delete[]paddress;
//			//delete paddress;
//			paddress = NULL;
//		}
//	}
//	Myarray(const Myarray& arr) {
//		cout << "��������" << endl;
//
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->paddress = new T[arr.m_Capacity];
//		for (int i = 0; i < this->m_Size; i++) 
//		{
//			this->paddress[i] = arr.paddress[i];
//		}
//	}
//	//����a1=a2,a1=a2=a3
//	Myarray& operator=(const Myarray& arr)
//	{
//		if (this->paddress1 = NULL)
//		{
//			delete[]this->paddress;
//			this->paddress = NULL;
//			this->m_Capacity = 0;
//			this->m_size = 0;
//		}
//		//���
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->paddress = new T[arr.m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->paddress[i] = arr.paddress[i];
//		}
//		return *this;
//	}
//	//β��
//	void push(const T& val)
//	{
//		if (m_Size == m_Capacity)
//			return 0;
//		this->paddress[this->m_Size] = val;
//		this->m_Size++;
//	}
//	//βɾ
//	void pop() {
//		if (this->m_Size == 0)
//			return 0;
//		this->m_Size--;
//		//����ӻḲ��
//	}
//	//index�±����˼
//	T& operator[](int index) {
//		return this->paddress[index];
//	}
//	//��&˵�������Զ����ֵ�Ķ�������ֵ
//	//eg:arr[2]=100;
//
//private:
//	T* paddress;
//	int m_Capacity;
//		int  m_Size;
//		
//};
