#include "adapter.h"
Player::Player(string n)
{
	name = n;
}

Forwards::Forwards(string na) : Player(na)
{

}
void Forwards::Attack()
{
	cout << "ǰ��" << name << "����" << endl;
}
void Forwards::Defence()
{
	cout << "ǰ��" << name << "����" << endl;
}

void ForeignCenter::SetName(string s)
{
	name = s;
}
string ForeignCenter::GetName()
{
	return name;
}
void ForeignCenter::jingong()
{
	cout << "�⼮�з� " << name << "����" << endl;
}
void ForeignCenter::fangshou()
{
	cout << "�⼮�з�" << name << "����" << endl;
}

Translator::Translator(string s) : Player(s)
{
	wjzf->SetName(s);
}
void Translator::Attack()
{
	wjzf->jingong();
}
void Translator::Defence()
{
	wjzf->fangshou();
}