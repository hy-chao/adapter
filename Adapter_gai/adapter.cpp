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
	cout << "前锋" << name << "进攻" << endl;
}
void Forwards::Defence()
{
	cout << "前锋" << name << "防守" << endl;
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
	cout << "外籍中锋 " << name << "进攻" << endl;
}
void ForeignCenter::fangshou()
{
	cout << "外籍中锋" << name << "防守" << endl;
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