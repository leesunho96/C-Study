#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "기본생성자" << endl;
	name = "SGA";
	hp = 10;


	temp = new int;
}

Character::Character(string name, int hp)
	:name(name)
{
	cout << "파라미터 있는 생성자" << endl;

	this->name = name;
	this->hp = hp;

	(*this).name;

	temp = new int;
}

Character::Character(Character && src)
{
	cout << "이동생성자" << endl;
	name = src.name;
	hp = src.hp;

	// src의 힙 영역 메모리 소유권 이동
	temp = src.temp;

	//src에서는 소유권 포기해야됨.
	src.temp = nullptr;
}

string Character::getname()
{
	return name;
}

Character::~Character()
{
	cout << "기본 소멸자 호출" << endl;
}
