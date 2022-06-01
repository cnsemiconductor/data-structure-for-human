#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//求数组长度
template <typename T>
int getArraylen(T& Arr) {
	return sizeof(Arr) / sizeof(Arr[0]);
}

//定义线性表[假设直接存整形]
struct sqlist {
	int* elem = nullptr;
	int length = 0;			//当前长度
	int listsize = 0;		//当前容量
};

//定义最大容量
constexpr int Max_size = 100;

//初始化线性表
void initsqlist(sqlist &L,int a[],int a_len,int n_size);

//打印整个顺序表
void printsqlist(sqlist& L);

//往线性表添加元素
void addsqlist(sqlist& L, int a);

//检测某元素是否存在于线性表中
bool isinsqlist(sqlist& L, int a);

//在任意位置插入元素（从1计数）
void insertsqlist(sqlist& L, int pos,int val);

//删除任意位置的元素,并返回被删除的值
int deltsqlist(sqlist& L, int pos);

//输出任意元素的前驱和后继（如果有）
void frandntsqlist(sqlist& L, int a);

//给线性表排序,默认从大到小,暂时冒泡排序
void sortsqlist(sqlist& L);



