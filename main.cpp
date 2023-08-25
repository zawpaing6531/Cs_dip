#include <iostream>
#include "lib/admin.hpp"
#include "lib/user.hpp"
#include <string>
string name , pass;
using namespace std;
int status;
int i =1;
int main(){
cout << "0.Exit" << endl;
cout << "1.admin login" << endl;
while(i == 1){
cout << ">>";
cin >> status;
// switch *****
switch (status){
case 0:
	i = 0;
	break;
case 1:
	bool ad = true;
	while(ad){
	cout << "Enter admin username : ";
	cin >> name;
	cout << "Enter admin password : ";
	cin >> pass;
 	ad = admin_login(name,pass);

}
}
}
return 0 ;
}
