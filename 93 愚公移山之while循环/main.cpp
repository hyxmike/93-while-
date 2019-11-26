#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//1+2+3+...+100=?
int main(void) {
	int i;
	int s;

	i = 1;//表示加数
	s = 0;

	while (i<=100) {
		s += i;// s = s + i;
		i++;//i=i+1 改变循环控制变量
	}

	cout << s << endl;

	system("pause");
	return 0;
}