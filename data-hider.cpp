#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>

using namespace std;

//Prototypes
void encrypt();
void decrypt();
void test();


int main()
{
    cout << " |||||	   ||||| " << endl;
	cout << " |   |	   |   | " << endl;
	cout << " |||||	   ||||| " << endl;
	cout << "       ||       " << endl;
	cout << " |	      | " << endl;
	cout << "  |	     | " << endl;
	cout << "   |||||||||| " << endl;
	cout << "Welcome to the Hide" << endl;
	cout << "Done by The Watch_dog" << endl;
	string choice;
	cout << "What do you want to do" << endl;
	cout << "1)Encrypt" << endl;
	cout << "2)Test" << endl;
	cout << "3)Decrypt" << endl;
	cin >> choice;
}
void encrypt()
{
    string varpath;
    cout << "Enter the path to the file you want to hide(You can drag to the terminal)" << endl;
    cout << "hide>>";
    cin >> varpath;
    system("mkdir hide");
    system(("cp -r " + varpath + " hide/").c_str());
    system("zip -r hide.zip hide/");
    system("cat *.jpg hide.zip > output.jpg");
    system("rm -r hide");
    system("rm hide.zip");
}

void decrypt()
{
    
}

void test()
{
    string imagename;
    cout << "Input the name of the test 'image'(with extension)" << endl;
    cin >> imagename
    system("unzip -t " + imagename);
}