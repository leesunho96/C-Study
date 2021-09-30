#include "stdafx.h"
#include "Character.h"
#include "Super.h"
#include "Sub.h"

class Animal
{
protected:
	// 순수가상함수가 하나라도 포함된 클래스는 추상클래스이다.
	// 자체적으로 객체화가 불가능 : 순수가상함수는 정의부가 존재하지 않음.
	// 반드시 자식 클래스 생성 이후, 오버라이딩 필수.
	// 순수 가상함수로만 이루어진 클래스를 인터페이스 클래스라 함.
	virtual void eat() = 0;
	virtual void sleep() { cout << "잠" << endl; };
};


class Dog : public Animal
{
public:
	virtual void bark() { cout << "개소리" << endl; };
	virtual void eat() override { cout << "개먹음" << endl; };
};

class Bird : public Animal
{
public:
	virtual void Chrisp() { cout << "새소리" << endl; };
	virtual void eat() override { cout << "새먹음" << endl; };
};


// virtual 상속 : 다이아몬드 형태 이중상속 모호성 문제 해결해줌.
class DogBird : public virtual Dog, public virtual Bird
{
public:
	// Dog, Bird  모두 eat method를 가짐 : eat를 호출시 어떤 eat인지 모호함
	// 명시적으로 호출하거나 재정의.
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
	// 필요한 요소만 재정의 하는 경우 private virtual 선언가능.
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

	// static 메소드는 컴파일 타임에 영향을 미침
	// 전역 변수/메소드는 데이터 영역에 저장.
	// 컴파일 타임에 결정이 나기 때문에 컴파일 타임에 참조하는 경우에만 영향을 미침.
	// static은 
	mySubStatic.BeStatic();
	mySuperStatic.BeStatic();

	return 0;
}