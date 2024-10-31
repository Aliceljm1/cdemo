// cdemo.cpp: 定义应用程序的入口点。
//

#include "cdemo.h"

using namespace std;


int add(int a,int b)
{
	return a + b;
}

int main(int argc,int* argv[])
{
	int c = add(1, 2);
	cout << "c=" << c<<endl;
	cout << "Hello CMake." << endl;
	return 0;
}
