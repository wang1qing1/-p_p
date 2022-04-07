#include"ST.h"
int main()
{
	ST stact = { 0 };
	StactInit(&stact);
	StactPush(&stact, 100);
	StactPush(&stact, 200);
	StactPush(&stact, 300);
	StactPrin(&stact);
	StactDestry(&stact);
	return 0;
}

