#include "adapter.h"

int main()
{
	Player * b = new Forwards("�͵ٶ�");
	b->Attack();
	b->Defence();

	Player * ym = new Translator("Ҧ��");
	ym->Attack();
	ym->Defence();
	return 0;
}
