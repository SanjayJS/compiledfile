#include<stdio.h>
int main()
{
	enum Sectors {Manufacturing, Administration, Finance, HR};
	enum Sectors Access;
	Access = Finance;
	printf("/n%d/n",Access);
	return 0;
}
