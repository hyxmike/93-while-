#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//1+2+3+...+100=?
int main(void) {
	int i;
	int s;

	i = 1;//��ʾ����
	s = 0;

	while (i<=100) {
		s += i;// s = s + i;
		i++;//i=i+1 �ı�ѭ�����Ʊ���
	}

	cout << s << endl;

	system("pause");
	return 0;
}