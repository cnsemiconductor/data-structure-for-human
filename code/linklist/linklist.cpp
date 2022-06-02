#include "linklist.h"

linklist& creLinklist_with_head()
{
	linklist L = new Lnode;
	return L;
}

void insLinklist(linklist& L, int val)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return;
	}

	Lnode *temp = new Lnode;
	temp->val = val;
	temp->next = L->next;
	L->next = temp;

	++L->val;
	return;
}

int lenLikelist(linklist& L)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return -1;
	}
	return L->val;
}

bool isinLinklist(linklist& L, int a)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return false;
	}
	linklist p = L->next;
	while (p)
	{
		if (p->val == a) {
			return true;
		}
		p = p->next;
	}
	return false;
}

int posLinklist(linklist& L, int a)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return -1;
	}
	int pos = 1;
	linklist p = L->next;
	while (p)
	{
		if (p->val == a) {
			return pos;
		}
		p = p->next;
		++pos;
	}
	return -1;
}

void printLinklist(linklist& L)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return;
	}
	linklist p = L->next;
	if (!p) {
		std::cout << "linklist is empty" << std::endl;
		return;
	}
	while (p)
	{
		std::cout << p->val << " ";
		p = p->next;
	}
	std::cout << std::endl;
	return;
}

void delLinklist(linklist& L, int a)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return;
	}
	linklist p = L;
	while (p)
	{
		if (p->next->val == a) {
			linklist k = p->next;
			p->next = k->next;
			delete k;
			return;
		}
		std::cout << a << " is not in the linklist " << std::endl;
		return;
	}
	return;
}

void sortLinklist(linklist& L)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return;
	}
	linklist p = L->next;
	while (p->next)
	{
		linklist i = p->next;
		while (i)
		{
			if (p->val > i->val) {
				int temp = 0;
				temp = p->val;
				p->val = i->val;
				i->val = temp;
			}
			i = i->next;
		}
		p = p->next;
	}
	return;
}

void revLinklist(linklist& L)
{
	if (L == nullptr) {
		perror("linklist is not exit\n");
		return;
	}
	linklist b = nullptr;
	linklist p = L->next;
	linklist k = p->next;
	while (k)
	{
		p->next = b;
		b = p;
		p = k;
		k = k->next;
	}
	p->next = b;
	L->next = p;
	return;
}

void destroyLinklist(linklist& L)
{
	while (L)
	{
		linklist p = L;
		L = L->next;
		delete p;
		p = nullptr;
		
	}
	return;
}
