#include <iostream>
#include <unistd.h>
#include <string>
	using namespace std;
	int main(){

char grade;
	bool validator;
	while(validator == true){
	cout << "Please input the student grade: ";
cin >> grade;
	switch(grade){

		case 'A' :
 case 'a':
cout << "Perfect" << std::endl;
sleep(2);
	break;


 case 'B':
	case 'b': 
	 case 'C':
 	case 'c':
 cout << "Well Done" << std::endl;
sleep(2);
break;

	case 'D':
 	case 'd':
cout << "Passed" << std::endl;
sleep(2);
break;

 case 'F':
	case 'f':
cout << "Not Passed" << std::endl;
sleep(2);
break;

	case 'Q':
	case 'q':

char confirm;
cout << "Are you sure Y/n?" << endl;
	cin >> confirm;
	if(confirm == 'Y' or confirm == 'y'){
		validator = false;
		return 0;
	}

default:
cout << "Invalid Entry" << std::endl;
cout << "Enter with Q/q if you want to exit" << std::endl;
}


		}
	}

