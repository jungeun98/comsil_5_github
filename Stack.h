#include "LinkedList.h"

//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

template <class T>
//LinkedList class�� ��ӹ���

class Stack : public LinkedList<T> {
public:
	bool Delete(T& element);
};

template <class T>
bool Stack<T>::Delete(T &element){

		int first;
		this->first = first;
		int current_size;
		this->current_size = current_size;

		//first�� 0�̸� false��ȯ
	if (first == 0)
				return false;


	Node<T>* current = first;
	
	element = first->data;
	first = first->link;
	delete current;
	current_size--;

			// LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����

		return true;
	
};
