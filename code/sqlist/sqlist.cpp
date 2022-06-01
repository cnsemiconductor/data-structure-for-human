#include "sqlist.h"

// ��ʼ�����Ա�
void initsqlist(sqlist &L,int a[],int a_len,int n_size) {
	//���ǰ�涨�����б���󳤶ȵĻ�,��������Լ����һ��n_size,���˱�����
	//����Ͳ�����,n_sizeΪ�������
	L.elem = new int[n_size];
	
	//����ʼ��������û�г�����
	if (a_len >= n_size) {
		perror("Your input exceeds the max_capacity\n");
		//ͬʱ�ͷŵ�ǰ��������ڴ�
		delete [] L.elem;
		return;
	}

	//С��ҵ��ǰ�������ô�Ż�

	for (int i = 0; i < a_len; i++) {
		L.elem[i] = a[i];
	}
	L.length = a_len;
	L.listsize = n_size;
	return ;
}

void printsqlist(sqlist& L)
{
	for (size_t i = 0; i < L.length; i++)
	{
		std::cout << L.elem[i] << " ";
	}
	std::cout << std::endl;
}

void addsqlist(sqlist& L, int a)
{
	if (L.length == L.listsize) {
		perror("the sqlist is already full\n");
		return;
	}
	L.elem[L.length] = a;
	++L.length;
	return;
}

bool isinsqlist(sqlist& L, int a)
{
	for (size_t i = 0; i < L.length; i++)
	{
		if (L.elem[i] == a) {
			return true;
		}
	}
	return false;
}

void insertsqlist(sqlist& L, int pos,int val)
{
	if (pos > L.listsize) {
		perror("list is already full\n");
		return;
	}
	for (size_t i = L.length; i >= pos; i--)
	{
		L.elem[i] = L.elem[i - 1];
	}
	L.elem[pos-1] = val;
	++L.length;
	return;

}

int deltsqlist(sqlist& L, int pos)
{
	if (pos > L.length) {
		perror("the value is not exit\n");
	}

	int val = L.elem[pos - 1];
	for (size_t i = pos-1; i < L.length-1; i++)
	{
		L.elem[i] = L.elem[i + 1];
	}
	--L.length;
	return val;
}

void frandntsqlist(sqlist& L, int a)
{
	for (size_t i = 0; i < L.length; i++)
	{
		if (L.elem[i] == a) {
			if (i == 0)
			{
				std::cout << "it has not front elem and the next elem is " << L.elem[i + 1] << std::endl;
				return;
			}
			else if (i == L.length - 1) {
				std::cout << " it has not next elem and the front elem is " << L.elem[i - 1] << std::endl;
				return;
			}
			else
			{
				std::cout << "the front elem is " << L.elem[i - 1] << " and the next elem is " << L.elem[i + 1] << std::endl;
				return;
			}
		}
	}
	std::cout << "the elem you input is not exit" << std::endl;
	return;
}

void sortsqlist(sqlist& L)
{
	for (size_t i = 0; i < L.length-1; i++)
	{
		int temp = 0;
		for (size_t j = i+1; j < L.length; j++)
		{
			if (L.elem[i] < L.elem[j]) {
				temp = L.elem[i];
				L.elem[i] = L.elem[j];
				L.elem[j] = temp;
			}
		}
	}
	return;
}
