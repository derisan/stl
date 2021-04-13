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

using std::cout;
using std::endl;

#define ����

std::default_random_engine dre{ std::random_device{}() };
std::uniform_int_distribution<> uidAlpha{ 'a', 'z' };

class String {
public:
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

private:
	size_t num{ 0 };							// Ȯ���� �ڿ��� ��
	char* p{ nullptr };							// Ȯ���� �ڿ��� ��ġ

	friend std::ostream& operator<<( std::ostream&, const String& );
};

std::ostream& operator<<( std::ostream& os, const String& s )
{
	for( size_t i = 0; i < s.num; ++i )
		os << s.p[i];
	return os;
}