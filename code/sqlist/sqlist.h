#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//�����鳤��
template <typename T>
int getArraylen(T& Arr) {
	return sizeof(Arr) / sizeof(Arr[0]);
}

//�������Ա�[����ֱ�Ӵ�����]
struct sqlist {
	int* elem = nullptr;
	int length = 0;			//��ǰ����
	int listsize = 0;		//��ǰ����
};

//�����������
constexpr int Max_size = 100;

//��ʼ�����Ա�
void initsqlist(sqlist &L,int a[],int a_len,int n_size);

//��ӡ����˳���
void printsqlist(sqlist& L);

//�����Ա����Ԫ��
void addsqlist(sqlist& L, int a);

//���ĳԪ���Ƿ���������Ա���
bool isinsqlist(sqlist& L, int a);

//������λ�ò���Ԫ�أ���1������
void insertsqlist(sqlist& L, int pos,int val);

//ɾ������λ�õ�Ԫ��,�����ر�ɾ����ֵ
int deltsqlist(sqlist& L, int pos);

//�������Ԫ�ص�ǰ���ͺ�̣�����У�
void frandntsqlist(sqlist& L, int a);

//�����Ա�����,Ĭ�ϴӴ�С,��ʱð������
void sortsqlist(sqlist& L);



