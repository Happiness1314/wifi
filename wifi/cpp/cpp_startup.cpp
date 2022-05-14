#include "cpp_startup.h"
#include <string>
#include "stdio.h"
#include "main.h"

using namespace std;

void startup(void)
{
	string s1("changxuedong");
	while(1)
	{
		printf("name:%s\r\n", s1.data());
		HAL_Delay(1000);
		
	}
}
