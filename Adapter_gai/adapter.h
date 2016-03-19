#pragma once
#include<iostream>
#include<string>
using namespace std;
//球员
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
//前锋
class Forwards : public Player
{
public:
	Forwards(string);
	void Attack();
	void Defence();
};

//外籍中锋
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
//翻译者类
class Translator : public Player
{
private:
	ForeignCenter * wjzf = new ForeignCenter();
public:
	Translator(string);
	void Attack();
	void Defence();
};