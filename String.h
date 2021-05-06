//-----------------------------------------------------------------------------
// String.h - STL ���� ������ �����ϱ� ���� ���� �ڿ��� Ȯ���ϴ� Ŭ����
//
// 2021. 3. 30									Programmed by wulong
//-----------------------------------------------------------------------------
#pragma once

#include <iostream>
#include <random>
#include <cstring>
#include <algorithm>
#include <string>
#include <iterator>

using std::cout;
using std::endl;

#define ����
#undef ����

std::default_random_engine dre{ std::random_device{}() };
std::uniform_int_distribution<> uidAlpha{ 'a', 'z' };

/**
* String�� �ܺο� �����ϴ� �ݺ���
* 
*/
class String_Iterator
	//: public std::iterator<std::random_access_iterator_tag, char>
{
public:
	using value_type = char;

	String_Iterator() = default;

	String_Iterator(char* p) : p{p} {}

	char& operator*() { return *p; }

	const char& operator*() const { return *p; }

	char* get() { return p; }

	String_Iterator& operator++()
	{
		++p;
		return *this;
	}

	String_Iterator operator++(int)
	{
		auto ret = *this;
		++(*this);

		return ret;
	}

	String_Iterator& operator--()
	{
		--p;
		return *this;
	}

	String_Iterator operator--(int)
	{
		auto ret = *this;
		--(*this);

		return ret;
	}


	friend bool operator==(const String_Iterator& lhs, const String_Iterator& rhs)
	{
		return lhs.p == rhs.p;
	}

	friend bool operator!=(const String_Iterator& lhs, const String_Iterator& rhs)
	{
		return lhs.p != rhs.p;
	}

	int operator-(const String_Iterator& rhs) const
	{
		return p - rhs.p;
	}

	String_Iterator operator-(int n) const
	{
		return String_Iterator{p + n};
	}

	String_Iterator operator+(int n) const
	{
		return String_Iterator{p + n};
	}

	bool operator<(const String_Iterator& rhs) const
	{
		return p < rhs.p;
	}

private:

	char* p{nullptr};
};

class String_Reverse_Iterator
{
public:

	String_Reverse_Iterator(char* p) : p{p} {}

	char& operator*() { return *(p - 1); }

	String_Reverse_Iterator& operator++()
	{
		--p;
		return *this;
	}

	String_Reverse_Iterator operator++(int)
	{
		auto ret = *this;
		--(*this);

		return ret;
	}

	String_Reverse_Iterator& operator--()
	{
		++p;
		return *this;
	}

	String_Reverse_Iterator operator--(int)
	{
		auto ret = *this;
		++(*this);

		return ret;
	}


	friend bool operator==(const String_Reverse_Iterator& left, const String_Reverse_Iterator& right)
	{
		return left.p == right.p;
	}

	friend bool operator!=(const String_Reverse_Iterator& left, const String_Reverse_Iterator& right)
	{
		return left.p != right.p;
	}


private:

	char* p{nullptr};
};


class String {
public:
	using iterator = String_Iterator;
	using reverse_iterator = String_Reverse_Iterator;

	String() {
#ifdef ����
		cout << "������() (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif
	}

	String( size_t n ) : num{ n }, p{ new char[num] } {
#ifdef ����
		cout << "������(int) (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif

		for( size_t i = 0; i < num; ++i )
			p[i] = uidAlpha( dre );
	}

	String( const char* p )
		: num{ strlen( p ) }
		, p{ new char[num] }
	{
		memcpy( this->p, p, num );

#ifdef ����
		cout << "������(const char*) (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif
	}

	~String() {
#ifdef ����
		cout << "�Ҹ��� (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif
		delete[] p;
	}

	// ���������
	String( const String& other ) : num{ other.num }, p{ new char[num] } {
		memcpy( p, other.p, num );

#ifdef ����
		cout << "��������� (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif
	}

	// �����Ҵ翬����
	String& operator=( const String& other ) {
		if( this != &other ) {
			delete[] p;
			num = other.num;
			p = new char[num];
			memcpy( p, other.p, num );
		}

#ifdef ����
		cout << "�����Ҵ翬���� (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif

		return *this;
	}

	// �̵�������
	String( String&& other ) noexcept : num{ other.num } {
		p = other.p;
		other.p = nullptr;
		other.num = 0;

#ifdef ����
		cout << "�̵������� (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif
	}

	// �̵��Ҵ翬����
	String& operator=( String&& other ) noexcept {
		if( this != &other ) {
			delete[] p;
			num = other.num;
			p = other.p;

			other.num = 0;
			other.p = nullptr;
		}

#ifdef ����
		cout << "�̵��Ҵ翬���� (this:" << this << ") - ����: "
			<< num << ", ��ġ:" << (void*)p << endl;
#endif

		return *this;
	}

	size_t size() const {
		return num;
	}
	
	std::string getString() const { return std::string{ p }; }

	iterator begin() { return iterator{ p }; }
	iterator begin() const { return iterator{ p }; }
	iterator end() { return iterator{ p + num }; }
	iterator end() const { return iterator{ p + num }; }

	reverse_iterator rbegin() { return reverse_iterator{p + num}; }
	reverse_iterator rbegin() const { return reverse_iterator{p + num}; }
	reverse_iterator rend() { return reverse_iterator{p}; }
	reverse_iterator rend() const { return reverse_iterator{p}; }


	bool operator==(const String& rhs) const
	{
		if(num != rhs.num)
			return false;

		for(int i = 0; i < num; ++i)
		{
			if(p[i] != rhs.p[i])
				return false;
		}

		return true;
	}

	void MakeFromString(const std::string& s)
	{
		num = s.size();

		if(p)
		{
			delete[] p;
		}

		p = new char[num];

		for(int i = 0; i < s.size(); ++i)
		{
			p[i] = s[i];
		}
	}

private:
	size_t num{ 0 };							// Ȯ���� �ڿ��� ��
	char* p{ nullptr };							// Ȯ���� �ڿ��� ��ġ

	friend std::ostream& operator<<( std::ostream&, const String& );
	friend std::istream& operator>>(std::istream&, String&);
};

std::ostream& operator<<( std::ostream& os, const String& s )
{
	for( size_t i = 0; i < s.num; ++i )
		os << s.p[i];
	return os;
}

std::istream& operator>>(std::istream& is, String& s)
{
	std::string str;
	is >> str;
	s.MakeFromString(str);
	return is;
}