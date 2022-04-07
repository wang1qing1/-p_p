#include"ST.h"

void StactPrin(ST*stact)
{
	assert(stact);
	for (int i = 0; i < stact->top; i++)
	{
		printf("%d ", stact->a[i]);
	}

}

void StactInit(ST* stact)
{
	assert(stact);
	stact->a = NULL;
	stact->capacity = 0;
	stact->top = 0;
}

void StactDestry(ST* stact)
{
	assert(stact);
	free(stact->a);
	stact->a = NULL;
	stact->capacity = 0;
	stact->top = 0;
}

void StactPush(ST* stact, STDATATYPE x)
{
	assert(stact);
	 
	if (stact->capacity == stact->top)
	{
		int newcapacity = stact->capacity == 0 ? 4 : stact->capacity * 2;
		STDATATYPE* aa = (STDATATYPE*)realloc(stact->a, sizeof(STDATATYPE) * newcapacity);
		if (aa == NULL)
		{
			printf("realloc false!!!\n");
			exit(-1);
		}
		stact->a = aa;
		stact->capacity = newcapacity;
	}
	stact->a[stact->top] = x;
	stact->top++;
}