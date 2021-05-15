#include <unistd.h>
/*
void printf(char *str)
{
	char *pwned = "yes!";
}

void puts(char *str)
{
	static int cnt = 0;
	
	if (cnt == 0)
	{
		write(1, "--> Please make me win!\n", 24);
	}
	cnt++;
}
*/
int rand(void)
{
	static int cnt = 0;
	
	cnt++;

	if (cnt == 1)
		return 8;
	if (cnt == 2)
		return 8;
	if (cnt == 3)
		return 7;
	if (cnt == 4)
		return 9;
	if (cnt == 5)
		return 23;
	if (cnt == 6)
		return 74;

	return cnt;
}
