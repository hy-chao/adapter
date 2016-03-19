#include "adapter.h"

int main()
{
	Player * b = new Forwards("°ÍµÙ¶û");
	b->Attack();
	b->Defence();

	Player * ym = new Translator("Ò¦Ã÷");
	ym->Attack();
	ym->Defence();
	return 0;
}
