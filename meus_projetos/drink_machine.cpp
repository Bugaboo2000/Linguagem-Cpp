#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    bool validator = true;
    while(validator) {
    int choice;
    cout << "Available Option:" << std::endl;
    cout << "Option 1: Coffee" << std::endl;
    cout << "Option 2: Tea" << std::endl;
    cout << "Option 3: Water" << std::endl;
    cout << "Option 4: close the program" << std::endl;
    cout << "Choose your Option: ";
    cin >> choice;
   if(choice == 1) {
        cout << "Your cofee as been prepared" << std::endl;
        sleep(3);
    }
    else if(choice == 2) {
            cout << "Your Tea as been prepared" <<std::endl;
            sleep(3);
    }
    else if(choice == 3) {
        cout << "Here is your Water" << std::endl;
        sleep (3);
        }
   else if(choice == 4){
            validator = false;
        }
    else {
        cout << "Invalid Choice"<< std::endl;
        sleep(3);
    }
}
    }
        

