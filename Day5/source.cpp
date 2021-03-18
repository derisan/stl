//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <random>
//#include <vector>
//#include <memory>
//#include <fstream>
//
//using namespace std;
//
//// [����] Dog ��ü�� ����� ���Ͽ� �����ϰ� �ٽ� �о� ������ ����(���̳ʸ� ���).
//// ID ������������ �����ؼ� ���
//// string name;
//// int id;
//
//
//// p.s. ����ü �е�
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
//	int GetID() const { return mId; }
//
//private:
//	string	mName{ "default" };
//	int		mId{ uid(dre) };
//
//	static int cnt;
//};
//
//int Dog::cnt{ 1 };
//
////Dog gDogs[1'0000];
//
//int main()
//{
//	//cout << sizeof( Dog ) << endl; // 28 byte
//
//	// ���Ͽ� ����
//	//ofstream out( "Dog ����ü.txt", ios::binary );
//	//out.write( (char*)gDogs, sizeof( Dog ) * _countof( gDogs ) );
//
//
//	// ������ �б�
//	ifstream in{ "Dog ����ü.txt", ios::binary };
//	if( !in.is_open() )
//	{
//		cout << "UNKNOWN FILE" << endl;
//		return 0;
//	}
//
//	unique_ptr<Dog[]> dogs = make_unique <Dog[]>( 10 );
//	in.read( (char*)dogs.get(), sizeof( Dog ) * 10 );
//
//
//	// ID ������������ �����Ѵ�.
//	sort( &dogs[0], &dogs[10], []( const Dog& dog1 , const Dog& dog2) {
//		return dog1.GetID() < dog2.GetID();
//		} );
//
//	for( int i{}; i < 10; ++i )
//		dogs[i].Print();
//}