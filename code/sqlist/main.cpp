#include "sqlist.h"

int main(int argc, char const ** argv) {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a_len = getArraylen(a);
	sqlist	L;

	//���Գ�ʼ�����
	initsqlist(L, a,a_len, 100);
	std::cout << L.length << std::endl;
	printsqlist(L);

	//�������Ԫ�����
	addsqlist(L, 11);
	printsqlist(L);

	//�����ж��Ƿ�Ϊ�б��е�Ԫ��
	if (isinsqlist(L, 11)) {
		std::cout << "11 is in" << std::endl;
	}
	else
	{
		std::cout << "11 is not in" << std::endl;
	}

	//��������λ�ò������
	insertsqlist(L, 1, 100);
	printsqlist(L);

	//��������λ��ɾ�����
	std::cout << deltsqlist(L, 1) << std::endl;
	printsqlist(L);

	//���Է���ǰ�����
	frandntsqlist(L, 3);

	//��������
	sortsqlist(L);
	printsqlist(L);

	system("pause");
	return 0;
}