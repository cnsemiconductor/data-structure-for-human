#include "linklist.h"

int main(int argc, char const ** argv) {

	//创建
	linklist L = creLinklist_with_head();
	printLinklist(L);

	//插入
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

	//查询节点位置
	{
		int pos = posLinklist(L, 3);
		if (pos > 0) { std::cout << "3 is located in " << pos << std::endl; }
		else { std::cout << "3 is not exit" << std::endl; }

		pos = posLinklist(L, 20);
		if (pos > 0) { std::cout << "20 is located in " << pos << std::endl; }
		else { std::cout << "20 is not exit" << std::endl; }
	}

	//删除特定元素
	insLinklist(L, 100);
	printLinklist(L);
	delLinklist(L, 200);
	delLinklist(L,100);
	printLinklist(L);

	//查询当前链表长度
	std::cout << "the linklist has " << lenLikelist(L) << " elems" << std::endl;

	//排序
	sortLinklist(L);
	printLinklist(L);

	//反转
	revLinklist(L);
	printLinklist(L);

	//销毁
	destroyLinklist(L);
	printLinklist(L);

	system("pause");
	return 0;
}