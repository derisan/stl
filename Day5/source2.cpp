//#include <iostream>
//#include <random>
//#include <vector>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//
//default_random_engine dre;
//uniform_int_distribution<> uid;
//
//class Dog
//{
//public:
//	Dog()
//		: mName{ "Dog"s + to_string( cnt ) }
//	{
//		++cnt;
//	}
//
//	void Print() const
//	{
//		cout << "Dog's name: " << mName << endl;
//		cout << "Dog's id: " << mId << endl;
//	}
//
//	const string& GetName() const { return mName; }
//
//	friend ostream& operator<<( ostream& os, const Dog& dog );
//	friend istream& operator>>( istream& is, Dog& dog );
//
//private:
//	string	mName{ "default" };
//	int		mId{ uid( dre ) };
//
//	static int cnt;
//};
//
//ostream& operator<<( ostream& os, const Dog& dog )
//{
//	os << dog.mName << endl;
//	os << dog.mId;
//	return os;
//}
//
//istream& operator>>( istream& is, Dog& dog )
//{
//	is >> dog.mName >> dog.mId;
//	return is;
//}
//
//int Dog::cnt{ 1 };
//
//int main()
//{
//	vector<Dog> dogs( 10 );
//
//	//ofstream out( "test", ios::binary );
//	//copy( begin( dogs ), end( dogs ), ostream_iterator<Dog>( out, "\n" ) );
//
//	ifstream in( "test", ios::binary );
//	copy( istream_iterator<Dog>( in ), istream_iterator<Dog>(), back_inserter( dogs ) );
//
//	for( const auto& dog : dogs )
//		dog.Print();
//}