#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//定义链表结点
struct Lnode
{
	struct Lnode* next = nullptr;
	int val = 0;
};
typedef Lnode *linklist;

//创建带头结点的链表
linklist& creLinklist_with_head();

//向链表头部插入节点
void insLinklist(linklist& L, int val);

//统计链表当前长度
int lenLikelist(linklist& L);

//判断元素是否在链表中
bool isinLinklist(linklist& L, int a);

//返回元素a是列表第几个节点,不存在则返回-1
int posLinklist(linklist& L,int a);

//打印链表
void printLinklist(linklist& L);

//删除特定元素
void delLinklist(linklist& L, int a);

//排序（从小到大）
void sortLinklist(linklist& L);

//反转链表
void revLinklist(linklist& L);

//销毁整个链表
void destroyLinklist(linklist& L);

//
