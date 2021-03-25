//// [����] int num�� ���ڷ� �޾� �޸𸮸� num ����Ʈ �Ҵ�޾�
//// ������ ���ĺ� �ҹ��ڷ� ä��� Ŭ���� String�� �ڵ��϶�.
//
//
//#include <iostream>			// ǥ�� ��Ʈ��
//#include <random>			// mt19937, random_device, uniform_int_distribution
//#include <algorithm>		// sort()
//#include <vector>			// vector �����̳�
//
//using namespace std;
//
//mt19937 engine;
//random_device rd;
//uniform_int_distribution<int> uid{ 'a', 'z' };
//
//#define DEBUG
//#undef DEBUG
//
//class String
//{
//public:
//	String() = default;
//	String( size_t size )
//		: size{ size }
//		, data{ new char[size] }
//	{
//		for( size_t i{ 0 }; i < size; ++i )
//			data[i] = static_cast<char>(uid( engine ));
//	}
//
//	~String()
//	{
//		if( data )
//			delete[] data;
//	}
//
//	size_t GetSize() const { return size; }
//
//	String( const String& other )
//		: size{ other.size }
//	{
//		data = new char[size];
//		memcpy( data, other.data, sizeof( char ) * size );
//	}
//
//	String( String&& other ) noexcept
//		: size{ other.size }
//	{
//#ifdef DEBUG
//		cout << "MOVE CONSTRUCTOR" << endl;
//#endif
//
//		data = other.data;
//		other.data = nullptr;
//		other.size = 0;
//	}
//
//	String& operator=( const String& other )
//	{
//		if( this != &other ) {
//			delete[] data;
//
//			size = other.size;
//			data = new char[size];
//			memcpy( data, other.data, sizeof( char ) * size );
//		}
//
//		return *this;
//	}
//
//	String& operator=( String&& other ) noexcept
//	{
//#ifdef DEBUG
//		cout << "MOVE ASSIGNMENT" << endl;
//#endif
//		if( this != &other ) {
//			delete[] data;
//
//			size = other.size;
//			data = other.data;
//			other.data = nullptr;
//			other.data = 0;
//		}
//		return *this;
//	}
//
//	bool operator<( const String& other ) const
//	{
//		size_t len = min( size, other.size );
//
//		for( size_t i{ 0 }; i < len; ++i )
//			return data[i] < other.data[i];
//	}
//
//	friend ostream& operator<<( ostream& os, const String& str );
//
//private:
//	size_t size{ 0 };
//	char* data{ nullptr };
//};
//
//ostream& operator<<( ostream& os, const String& str )
//{
//	size_t perLine{ 10 }, count{ 0 };
//
//	for( size_t i{ 0 }; i < str.size; ++i )
//	{
//		os << str.data[i] << " ";
//
//		if( ++count % perLine == 0 ) os << endl;
//	}
//
//	return os;
//}
//
//int main()
//{
//	engine.seed( rd() );
//
//	vector<String> t{ 4, 5, 3, 6, 7, 8, 9, 10 };
//
//	for( const auto& elem : t )
//		cout << elem << endl << endl;
//
//	//cout << "\n\n----------AFTER SORTING(by size)----------" << endl;
//	//sort( begin( t ), end( t ), []( const String& s1, const String& s2 ) {
//	//	return s1.GetSize() < s2.GetSize();
//	//	} );
//
//	// �� String�� ��(������)
//	cout << "\n\n----------AFTER SORTING(lexicographical order)----------" << endl;
//	sort( begin( t ), end( t ), []( const String& s1, const String& s2 ) {
//		return s1 < s2;
//		} );
//
//	for( const auto& elem : t )
//		cout << elem << endl << endl;
//}