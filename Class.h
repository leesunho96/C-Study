#pragma once

#include <iostream>

using namespace std;

template <typename T>
class Class
{
public:
	void set(T input);
	T get();

	void print();

	Class(T input);
	Class(Class<T>& input);
	Class<T>& operator = (const Class<T>& target);
	Class<T>& operator + (const Class<T>& target);

	template <typename E>
	Class<T> Class(const Class<E>& rhs);


	T getData();


	~Class();
private:
	T data;

	template<typename E>
	void copyFrom(const E& rhs);

};

template<typename T>
inline void Class<T>::set(T input)
{
	this->data = input;
}

template<typename T>
inline T Class<T>::get()
{
	return data;
}

template<typename T>
inline void Class<T>::print()
{
	cout << "print �Լ� ��� : " << data << endl;
}

template<typename T>
inline Class<T>::Class(T input)
{
	this->data = input;
}

template<typename T>
inline Class<T>::Class(Class<T>& input)
{
	copyFrom(input);
}

template<typename T>
template<typename E>
inline void Class<T>::copyFrom(const E & rhs)
{
	this->data = rhs.data;
}

template<typename T>
inline Class<T>& Class<T>::operator=(const Class<T>& target)
{
	this->data = target.data;
	return *this;
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
}

template<typename T>
inline Class<T>& Class<T>::operator+(const Class<T>& target)
{
	this->data += target.data;
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
	return *this;
}

template<typename T>
inline T Class<T>::getData()
{
	return data;
}

template<typename T>
inline Class<T>::~Class()
{
}
