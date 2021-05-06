//-----------------------------------------------------------------------------
// String.h - STL 내부 동작을 관찰하기 위해 만든 자원을 확보하는 클래스
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

#define 관찰
#undef 관찰

std::default_random_engine dre{ std::random_device{}() };
std::uniform_int_distribution<> uidAlpha{ 'a', 'z' };

/**
* String이 외부에 제공하는 반복자
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
#ifdef 관찰
		cout << "생성자() (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif
	}

	String( size_t n ) : num{ n }, p{ new char[num] } {
#ifdef 관찰
		cout << "생성자(int) (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif

		for( size_t i = 0; i < num; ++i )
			p[i] = uidAlpha( dre );
	}

	String( const char* p )
		: num{ strlen( p ) }
		, p{ new char[num] }
	{
		memcpy( this->p, p, num );

#ifdef 관찰
		cout << "생성자(const char*) (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif
	}

	~String() {
#ifdef 관찰
		cout << "소멸자 (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif
		delete[] p;
	}

	// 복사생성자
	String( const String& other ) : num{ other.num }, p{ new char[num] } {
		memcpy( p, other.p, num );

#ifdef 관찰
		cout << "복사생성자 (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif
	}

	// 복사할당연산자
	String& operator=( const String& other ) {
		if( this != &other ) {
			delete[] p;
			num = other.num;
			p = new char[num];
			memcpy( p, other.p, num );
		}

#ifdef 관찰
		cout << "복사할당연산자 (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif

		return *this;
	}

	// 이동생성자
	String( String&& other ) noexcept : num{ other.num } {
		p = other.p;
		other.p = nullptr;
		other.num = 0;

#ifdef 관찰
		cout << "이동생성자 (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
#endif
	}

	// 이동할당연산자
	String& operator=( String&& other ) noexcept {
		if( this != &other ) {
			delete[] p;
			num = other.num;
			p = other.p;

			other.num = 0;
			other.p = nullptr;
		}

#ifdef 관찰
		cout << "이동할당연산자 (this:" << this << ") - 갯수: "
			<< num << ", 위치:" << (void*)p << endl;
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
	size_t num{ 0 };							// 확보한 자원의 수
	char* p{ nullptr };							// 확보한 자원의 위치

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