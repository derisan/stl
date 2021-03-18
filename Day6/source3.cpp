// [����] int num�� ���ڷ� �޾� �޸𸮸� num ����Ʈ �Ҵ�޾�
// ������ ���ĺ� �ҹ��ڷ� ä��� Ŭ���� String�� �ڵ��϶�.


#include <iostream>
#include <random>
#include <memory>
#include <algorithm>
#include <vector>

using namespace std;

mt19937 engine;
random_device rd;
uniform_int_distribution<int> uid{ 'a', 'z' };

class String
{
public:
	String() = default;
	String(size_t size)
		: size{ size }
		, data{ new char[size] }
	{
		for( size_t i{ 0 }; i < size; ++i )
			data[i] = static_cast<char>(uid( engine ));
	}

	~String()
	{
		if( data )
			delete[] data;
	}

	size_t GetSize() const { return size; }

	String( const String& other )
		: size{ other.size }
	{
		data = new char[size];
		memcpy( data, other.data, sizeof( char ) * size );
	}

	String( String&& other ) noexcept
		: size{ other.size }
	{
		data = other.data;
		other.data = nullptr;
	}

	String& operator=( const String& other )
	{
		size = other.size;
		data = new char[size];
		memcpy( data, other.data, sizeof( char ) * size );

		return *this;
	}

	String& operator=( String&& other ) noexcept
	{
		size = other.size;
		data = other.data;
		other.data = nullptr;

		return *this;
	}

	friend ostream& operator<<( ostream& os, const String& str );

private:
	size_t size{ 0 };
	char* data{ nullptr };
};

ostream& operator<<( ostream& os, const String& str )
{
	size_t perLine{ 10 }, count{ 0 };

	for( size_t i{ 0 }; i < str.size; ++i )
	{
		os << str.data[i] << " ";

		if( ++count % perLine == 0 ) os << endl;
	}

	return os;
}

int main()
{
	engine.seed( rd() );

	vector<String> t{ 20, 23, 3 };

	for( const auto& elem : t )
		cout << elem << endl << endl;

	sort( begin( t ), end( t ), [](const String& s1, const String& s2) {
		return s1.GetSize() < s2.GetSize();
		} );

	for( const auto& elem : t )
		cout << elem << endl << endl;
}