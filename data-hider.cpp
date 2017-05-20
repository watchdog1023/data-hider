#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>

using namespace std;

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