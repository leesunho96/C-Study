#include "stdafx.h"
#include "Character.h"
#include "Super.h"
#include "Sub.h"

class Animal
{
protected:
	// ���������Լ��� �ϳ��� ���Ե� Ŭ������ �߻�Ŭ�����̴�.
	// ��ü������ ��üȭ�� �Ұ��� : ���������Լ��� ���Ǻΰ� �������� ����.
	// �ݵ�� �ڽ� Ŭ���� ���� ����, �������̵� �ʼ�.
	// ���� �����Լ��θ� �̷���� Ŭ������ �������̽� Ŭ������ ��.
	virtual void eat() = 0;
	virtual void sleep() { cout << "��" << endl; };
};


class Dog : public Animal
{
public:
	virtual void bark() { cout << "���Ҹ�" << endl; };
	virtual void eat() override { cout << "������" << endl; };
};

class Bird : public Animal
{
public:
	virtual void Chrisp() { cout << "���Ҹ�" << endl; };
	virtual void eat() override { cout << "������" << endl; };
};


// virtual ��� : ���̾Ƹ�� ���� ���߻�� ��ȣ�� ���� �ذ�����.
class DogBird : public virtual Dog, public virtual Bird
{
public:
	// Dog, Bird  ��� eat method�� ���� : eat�� ȣ��� � eat���� ��ȣ��
	// ��������� ȣ���ϰų� ������.
	//virtual void eat() override { Dog::eat(); };
	using Dog::eat;
	virtual void Chrisp() override { Bird::Chrisp(); };
	virtual void sleep() override { Animal::sleep(); };
};

////////////////////////////////////////////////////////////////////////////////////
class MilesEstimator
{
	int mGallonLeft;
	virtual int GetMilesPerGallon() const { return 20; };
public:
	virtual int GetMilesLeft() const
	{
		return GetMilesPerGallon() * GetGallonLeft();
	}

	virtual void SetGallonLeft(int inValue) { mGallonLeft = inValue; };
	virtual int GetGallonLeft() const { return mGallonLeft; };
};

class EfficientCarMilesEstimator : public MilesEstimator
{
	// �ʿ��� ��Ҹ� ������ �ϴ� ��� private virtual ���𰡴�.
private:
	virtual int GetMilesPerGallon() const override { return 35; };
};


class SuperStatic
{
public:
	static void BeStatic()
	{
		cout << "Superstatic being Static" << endl;
	}
};

class SubStatic : public SuperStatic
{
public:
	static void BeStatic()
	{
		cout << "SubStatic keepin i it static." << endl;
	}
};

int main()
{
	////DogBird dogbird;
	////dogbird.eat();
	//MilesEstimator myMilesEstimator;
	//myMilesEstimator.SetGallonLeft(2);
	//cout << "I can go " << myMilesEstimator.GetMilesLeft() << " more miles" << endl;

	//EfficientCarMilesEstimator myEfficientEstimator;
	//myEfficientEstimator.SetGallonLeft(2);
	//cout << "I can go " << myEfficientEstimator.GetMilesLeft() << " more miles" << endl;

	SubStatic mySubStatic;
	mySubStatic.SuperStatic::BeStatic();


	SubStatic::BeStatic();
	SuperStatic::BeStatic();


	SuperStatic& mySuperStatic = mySubStatic;

	// static �޼ҵ�� ������ Ÿ�ӿ� ������ ��ħ
	// ���� ����/�޼ҵ�� ������ ������ ����.
	// ������ Ÿ�ӿ� ������ ���� ������ ������ Ÿ�ӿ� �����ϴ� ��쿡�� ������ ��ħ.
	// static�� 
	mySubStatic.BeStatic();
	mySuperStatic.BeStatic();

	return 0;
}