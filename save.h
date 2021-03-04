// save.h

#pragma once

#include <ctime>

#include <iostream>
#include <string_view>
#include <filesystem>
#include <fstream>

using namespace std;

void Save( string_view fileName )
{
	// � ������ �����ϴ��� ȭ�鿡 ����Ѵ� - ���� �̸��� ũ��
	cout << "����: " << fileName << " " << ", ũ��: " << filesystem::file_size( fileName ) << " Byte" << endl;

	ofstream out( "../���Ƿ�.txt", ios::app );
	ifstream in( fileName );

	out << endl << endl;

	// ������ ����� �ð��� ����.
	time_t t = time( nullptr );
	out.imbue( locale( "korean" ) );
	out << "===================================================" << endl;
	out << "���� �ð�: " << put_time( localtime( &t ), "%c %A" ) << endl;
	out << "===================================================" << endl;

	// ������ ��(-1, EOF). char�δ� ǥ���� �� ���⿡ int
	int c;
	while( (c = in.get()) != EOF )
		out.put( c );

	// out�� in�� ���� �����̱⿡ �˾Ƽ� ������
	// RAII Resource Acquisition Is Initialization
}