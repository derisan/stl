#pragma once

#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

random_device rd{};
default_random_engine engine{ rd() };
uniform_int_distribution<int> uid_char{ 'a', 'z' };
uniform_int_distribution<int> uid_size{ 1, 10 };

#define OBSERVE


class String
{
public:
	String()
		: String( uid_size( engine ) ) 
	{
#ifdef OBSERVE
		cout << "String() ctor" << endl;
#endif
	}

	explicit String( size_t size )
		: size{ size }
		, data{ new char[size] }
	{
#ifdef OBSERVE
		cout << "String(size_t) ctor" << endl;
#endif
		for( size_t i{ 0 }; i < size; ++i )
			data[i] = static_cast<char>(uid_char( engine ));
	}

	~String()
	{
#ifdef OBSERVE
		cout << "String() dtor - p: " << (void*)data << endl;
#endif
		if( data )
			delete[] data;
	}

	size_t GetSize() const { return size; }

	void Sort()
	{
		sort( data, data + size );
	}

	String( const String& other )
		: size{ other.size }
	{
		data = new char[size];
		memcpy( data, other.data, sizeof( char ) * size );
	}

	String( String&& other ) noexcept
		: size{ other.size }
	{
#ifdef OBSERVE
		cout << "MOVE CONSTRUCTOR" << endl;
#endif

		data = other.data;
		other.data = nullptr;
		other.size = 0;
	}

	String& operator=( const String& other )
	{
		if( this != &other ) {
			delete[] data;

			size = other.size;
			data = new char[size];
			memcpy( data, other.data, sizeof( char ) * size );
		}

		return *this;
	}

	String& operator=( String&& other ) noexcept
	{
#ifdef OBSERVE
		cout << "MOVE ASSIGNMENT" << endl;
#endif
		if( this != &other ) {
			delete[] data;

			size = other.size;
			data = other.data;
			other.data = nullptr;
			other.data = 0;
		}
		return *this;
	}

	bool operator<( const String& other ) const
	{
		size_t len = min( size, other.size );

		return lexicographical_compare( data, data + size, other.data, other.data + other.size );
	}

	friend ostream& operator<<( ostream& os, const String& str );

private:
	size_t size{ 0 };
	char* data{ nullptr };
};

ostream& operator<<( ostream& os, const String& str )
{
	for( size_t i{ 0 }; i < str.size; ++i )
	{
		os << str.data[i];
	}
	return os;
}