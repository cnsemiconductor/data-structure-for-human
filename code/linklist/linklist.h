#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//����������
struct Lnode
{
	struct Lnode* next = nullptr;
	int val = 0;
};
typedef Lnode *linklist;

//������ͷ��������
linklist& creLinklist_with_head();

//������ͷ������ڵ�
void insLinklist(linklist& L, int val);

//ͳ������ǰ����
int lenLikelist(linklist& L);

//�ж�Ԫ���Ƿ���������
bool isinLinklist(linklist& L, int a);

//����Ԫ��a���б�ڼ����ڵ�,�������򷵻�-1
int posLinklist(linklist& L,int a);

//��ӡ����
void printLinklist(linklist& L);

//ɾ���ض�Ԫ��
void delLinklist(linklist& L, int a);

//���򣨴�С����
void sortLinklist(linklist& L);

//��ת����
void revLinklist(linklist& L);

//������������
void destroyLinklist(linklist& L);

//
