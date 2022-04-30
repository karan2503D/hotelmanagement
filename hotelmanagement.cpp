#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake = 0, Qchicken = 0;
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0,Sshake = 0,Schicken = 0;
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken = 0;

    cout << "\n\tQuantity of Items";
    cout << "\n Rooms Avaliable";
    cin >> Qrooms;
    cout << "\n Quantity of Burgers";
    cin >> Qburger;
    cout << "\n Quantity of Chickens";
    cin >> Qchicken;
    cout << "\n Quantity of Noodles";
    cin >> Qnoodles;
    cout << "\n Quantity of Pasta";
    cin >> Qpasta;
    cout << "\n Quantity of Shake";
    cin >> Qshake;

    m:
    cout << "\n\t\t\t Please Select from the given options";
    cout << "\n\n1) Rooms";
    cout << "\n\n2) Pasta";
    cout << "\n\n3) Burger";
    cout << "\n\n4) Noodles";
    cout << "\n\n5) Shake";
    cout << "\n\n6) Chicken";
    cout << "\n\n7) Information Regarding Sales and Collection";
    cout << "\n\n8) Exit";

    cout << "\n\nEnter Your Choice";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "\n\n Enter the number of rooms you want:";
        cin >> quant;
        if (Qrooms - Srooms >= quant) {
            Srooms = Srooms + quant;
            total_rooms = total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "rooms have been alloted to you";
        }
        else
        {
            cout << "\n\tOnly" << Qrooms - Srooms << "Rooms Remaining in Hotel";
            break;
        }

    case 2:
        cout << "\n\n Enter Pasta Quantity:";
        cin >> quant;
        if (Qpasta - Spasta >= quant) {
            Spasta = Spasta + quant;
            total_pasta = total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << "pasta is the order";
        }
        else
        {
            cout << "\n\tOnly" << Qpasta - Spasta << "Past Remaining in Hotel";
            break;
        }

    case 3:
        cout << "\n\n Enter Burger Quantity:";
        cin >> quant;
        if (Qburger - Sburger >= quant) {
            Sburger = Sburger + quant;
            total_burger = total_burger + quant * 120;
            cout << "\n\n\t\t" << quant << "burger is the order";
        }
        else
        {
            cout << "\n\tOnly" << Qburger - Sburger << "Burgers Remaining in Hotel";
            break;
        }

    case 4:
        cout << "\n\n Enter Noodles Quantity:";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant) {
            Snoodles = Snoodles + quant;
            total_noodles = total_noodles + quant * 120;
            cout << "\n\n\t\t" << quant << "noodles is the order";
        }
        else
        {
            cout << "\n\tOnly" << Qnoodles - Snoodles << "Noodles Remaining in Hotel";
            break;
        }

    case 5:
        cout << "\n\n Enter Shakes Quantity:";
        cin >> quant;
        if (Qshake - Sshake >= quant) {
            Sshake = Sshake + quant;
            total_shake = total_shake + quant * 100;
            cout << "\n\n\t\t" << quant << "shakes is the order";
        }
        else
        {
            cout << "\n\tOnly" << Qshake - Sshake << "Shakes Remaining in Hotel";
            break;
        }

    case 6:
        cout << "\n\n Enter Chicken Roll Quantity:";
        cin >> quant;
        if (Qchicken - Schicken >= quant) {
            Schicken = Schicken + quant;
            total_chicken = total_chicken + quant * 180;
            cout << "\n\n\t\t" << quant << "chicken roll is the order";
        }
        else
        {
            cout << "\n\tOnly" << Qchicken - Schicken << "Chicken Rolls Remaining in Hotel";
            break;
        }

    case 7:
        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\nNumber of Rooms:" << Qrooms;
        cout << "\n\nNumber of Rooms on rent:" << Srooms;
        cout << "\n\nRemaining Rooms:" << Qrooms-Srooms;
        cout << "\n\nTotal Rooms collection for the day:" << total_rooms;

        cout << "\n\nNumber of Pastas:" << Qpasta;
        cout << "\n\nNumber of Rooms Sold:" << Spasta;
        cout << "\n\nRemaining Pastas:" << Qpasta - Spasta;
        cout << "\n\nTotal Pasta collection for the day:" << total_pasta;

        cout << "\n\nNumber of Burgers:" << Qburger;
        cout << "\n\nNumber of Burgers Sold:" << Sburger;
        cout << "\n\nRemaining Burgers:" << Qburger - Sburger;
        cout << "\n\nTotal Burgers collection for the day:" << total_burger;

        cout << "\n\nNumber of Noodles:" << Qnoodles;
        cout << "\n\nNumber of Noodles Sold:" << Snoodles;
        cout << "\n\nRemaining Noodles:" << Qnoodles - Snoodles;
        cout << "\n\nTotal Noodles collection for the day:" << total_noodles;

        cout << "\n\nNumber of Shakes:" << Qshake;
        cout << "\n\nNumber of Shakes Sold:" << Sshake;
        cout << "\n\nRemaining Shakes:" << Qshake - Sshake;
        cout << "\n\nTotal Shakes collection for the day:" << total_shake;

        cout << "\n\nNumber of Chicken Roll:" << Qchicken;
        cout << "\n\nNumber of Chicken Roll Sold:" << Schicken;
        cout << "\n\nRemaining Chicken Roll:" << Qchicken - Schicken;
        cout << "\n\nTotal Chicken Roll collection for the day:" << total_chicken;

    case 8:
        exit(0);

    default:
        cout << "\n Please Select the numbers mentioned above!";


    }
    goto m;
}
