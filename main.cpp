#include <iostream>
#include "lib/admin.hpp"
#include "lib/user.hpp"
#include <string>
#include <stdio.h>
string name , pass;
using namespace std;
int status;
int i =1;
int main(){
cout << "0.Exit" << endl;
cout << "1.admin login" << endl;
cout << "2.Bash Shell" << endl;
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

case 2:
	char* shell;
	while(true){
	cout << "$";
	 scanf("%s",shell);
	system(shell);





}
}	
}
return 0 ;
}
