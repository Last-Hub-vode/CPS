#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()


{
 int activation;
int active;
int typer;
int maper;
int filer;
cout << "Welcome to CPS" << endl;
cin >> activation;	
switch (activation)
{   
    case 2346:
	cout <<"Sucessfully activated" << endl;
	active=1;
	break;
	default:
	cout << "Invaild entry." << endl;
	break;
		case 3277:
	cout <<"Sucessfully activated" << endl;
	active=1;
	break;
		case 7627:
	cout <<"Sucessfully activated" << endl;
	active=1;
 }			

switch (active)
{
  case 1:
  cout << "1.Downloads checker" << endl;
cout << "2.Simple key value database" << endl;
  cin >> typer;
  
   }										

switch (typer)
{
case 1:
filer=1;
break;
case 2:
maper=1;

}

switch (maper)
{
case 1:
{
	map<string, string> db;
	cout << "Welcome to the simplest key-value database" << endl;
	while (1)
	{
		cout << "What do you want to do?" << endl;
		cout << "Enter P to [P]ut, G to [G]et or L to [L]ist" << endl;
		cout << "Or enter Q to [Q]uit" << endl;
		string action;
		getline(cin, action);
		if (action == "P")
		{
			string key;
			string data;
			cout << "Enter key: ";
			getline(cin, key);
			cout << "Enter data: ";
			getline(cin, data);
			db[key] = data;
		}
		if (action == "G")
		{
			cout << "Enter key: ";
			string key;
			getline(cin, key);
			if (db.find(key) != db.end())
			{
				cout << "Your data: " << db[key] << endl;
			}
			else
				cout << "No such key" << endl;
		}
		if (action == "L")
		{
			cout << "DB contents:" << endl;
			for (auto it = db.begin(); it != db.end(); it++)
			{
				cout << it->first << ": " << it->second << endl;
			}
		}
		if (action == "Q")
		{
			cout << "Bye" << endl;
			break;
		}
		cout << endl;
	}

	return 0;
}
}
 
switch (filer)
{
case 1:
{
system("dir C:\\Users\\%USERNAME%\\Downloads");
}	




    }
return 0; 
 
}