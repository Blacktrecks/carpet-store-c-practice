#include <iostream>

using namespace std;

int main()
{
    cout << "Hello sir, welcome to Blacktrecks Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?  ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {34};
    const double sales_tax {0.04};
    const int estimate_expiry {28}; //days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms. " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
  er_room*number_of_rooms*sales_tax << endl;
    cout << "################  cout << "Cost: $" << price_per_room*number_of_rooms << endl;
    cout << "Tax $" <<price_p#########################" << endl;
    cout << "Total estimate: $" << (price_per_room*number_of_rooms)+(price_per_room*number_of_rooms*sales_tax) << endl;
    cout << "This estimated cost is valid for " << estimate_expiry  <<" days" << endl;
    cout << "#########################################" << endl;


    cout << endl;
    return 0; 
}
