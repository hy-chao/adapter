#pragma once
#include<iostream>
#include<string>
using namespace std;
//��Ա
class Player
{
protected:
	string name;
public:
	Player() {}
	Player(string);
	virtual void Attack() = 0;
	virtual void Defence() = 0;
};
//ǰ��
class Forwards : public Player
{
public:
	Forwards(string);
	void Attack();
	void Defence();
};

//�⼮�з�
class ForeignCenter
{
private:
	string name;
public:
	void SetName(string);
	string GetName();
	void jingong();
	void fangshou();
};
//��������
class Translator : public Player
{
private:
	ForeignCenter * wjzf = new ForeignCenter();
public:
	Translator(string);
	void Attack();
	void Defence();
};