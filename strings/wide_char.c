#include <stdio.h>
#include <wchar.h>

int main()
{
	wchar_t *p = L"Hello world!";
	 wprintf(L"%lc\n", p);

//	printf("%s\n", p);
	return 0;
}
