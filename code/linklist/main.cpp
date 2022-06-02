#include "linklist.h"

int main(int argc, char const ** argv) {

	//����
	linklist L = creLinklist_with_head();
	printLinklist(L);

	//����
	insLinklist(L, 1);
	insLinklist(L, 2);
	insLinklist(L, 3);
	insLinklist(L, 4);
	insLinklist(L, 5);
	insLinklist(L, 6);
	insLinklist(L, 7);
	insLinklist(L, 8);
	insLinklist(L, 9);
	printLinklist(L);

	//��ѯ�ڵ�λ��
	{
		int pos = posLinklist(L, 3);
		if (pos > 0) { std::cout << "3 is located in " << pos << std::endl; }
		else { std::cout << "3 is not exit" << std::endl; }

		pos = posLinklist(L, 20);
		if (pos > 0) { std::cout << "20 is located in " << pos << std::endl; }
		else { std::cout << "20 is not exit" << std::endl; }
	}

	//ɾ���ض�Ԫ��
	insLinklist(L, 100);
	printLinklist(L);
	delLinklist(L, 200);
	delLinklist(L,100);
	printLinklist(L);

	//��ѯ��ǰ������
	std::cout << "the linklist has " << lenLikelist(L) << " elems" << std::endl;

	//����
	sortLinklist(L);
	printLinklist(L);

	//��ת
	revLinklist(L);
	printLinklist(L);

	//����
	destroyLinklist(L);
	printLinklist(L);

	system("pause");
	return 0;
}