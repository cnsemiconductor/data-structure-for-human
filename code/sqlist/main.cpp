#include "sqlist.h"

int main(int argc, char const ** argv) {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a_len = getArraylen(a);
	sqlist	L;

	//测试初始化输出
	initsqlist(L, a,a_len, 100);
	std::cout << L.length << std::endl;
	printsqlist(L);

	//测试添加元素输出
	addsqlist(L, 11);
	printsqlist(L);

	//测试判断是否为列表中的元素
	if (isinsqlist(L, 11)) {
		std::cout << "11 is in" << std::endl;
	}
	else
	{
		std::cout << "11 is not in" << std::endl;
	}

	//测试任意位置插入输出
	insertsqlist(L, 1, 100);
	printsqlist(L);

	//测试任意位置删除输出
	std::cout << deltsqlist(L, 1) << std::endl;
	printsqlist(L);

	//测试返回前驱后继
	frandntsqlist(L, 3);

	//测试排序
	sortsqlist(L);
	printsqlist(L);

	system("pause");
	return 0;
}