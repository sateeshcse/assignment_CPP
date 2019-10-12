#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
     ifstream fin;
     fin.open("FIRST.TXT");
     ofstream fout;
     fout.open("SECOND.TXT");
     char ch;
     while(!fin.eof())
     {
     fin.get(ch);
     ch=toupper(ch);
     fout<<ch;
	} 
fin.close();
fout.close();
return 0;
}
