#include <iostream>
using namespace std;

void sum(int _a)
{
	int d = 10;
	int result = 0;
	__asm
	{
		mov eax, _a

	begin_while:
		cdq
			div d
			add result, edx
			cmp eax, 0
			jne begin_while

		
	}
	std::cout << result;
}

int main()
{
	int a;

	cin >> a;
	sum(a);
	return(0);

}
