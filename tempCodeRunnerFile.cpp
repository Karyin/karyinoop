#include <iostream>
#include <string>
using namespace std;

void mainmenu();
void ReservationCancellation();
void ReservationCancellationManyTime();
void PaymentProcessing();
void CheckAnotherticket();

int main(void)
{
    mainmenu();
}

void mainmenu()
{
    int MenuChoice;

    cout << "Welcome to AirAsia ! \n\n";
    cout << "Main Menu\n";
    cout << "1. Seating Arrangement and Reservation\n";
    cout << "2. Ticket Generation\n";
    cout << "3. Reservation Cancellation\n";
    cout << "4. Payment Processing\n";
    cout << "5. Receipt Printing\n\n";
    cout << "Enter your choice : ";

    cin >> MenuChoice;

    switch(MenuChoice)
    {
        case 1:
            // Implement the logic for Seating Arrangement and Reservation
            break;

        case 2:
            // Implement the logic for Ticket Generation
            break;

        case 3:
            ReservationCancellation();
            break;

        case 4:
            PaymentProcessing();
            break;

        case 5:
            // Implement the logic for Receipt Printing
            break;

        default:
            cout << "Please enter a number between 1 and 5 only!\n";
            mainmenu();
    }
}

void ReservationCancellation()
{
    int booking_ID;

    system("cls");

    cout << "Enter your booking ID : ";
    cin >> booking_ID;

    if (booking_ID > 0 && booking_ID < 101)
    {
        ReservationCancellationManyTime();
    }
    else
    {
        system("cls");

        cout << "Invalid booking ID ! \n";
        cout << "Please enter a correct booking ID ! \n\n";

        ReservationCancellation();
    }
}

void ReservationCancellationManyTime()
{
    int seat;
    char cancell;
    char cancellmanytime;

    cout << "\nWhich seat do you want to cancel ? \n";
    cout << "Enter your seat number : ";

    cin >> seat;

    cout << "\nConfirm want to cancel your booking ? \n";
    cout << "Enter your answer (Y/N) : ";

    cin >> cancell;

    if (cancell == 'y' || cancell == 'Y')
    {
        system("cls");

        cout << "Your ticket was successfully canceled ! \n\n";
        cout << "Do you want to cancel another ticket ?\n";
        cout << "Enter your answer (Y/N) : ";
        
        cin >> cancellmanytime;
    }
    else if(cancell == 'n' || cancell== 'N')
    {
        system("cls");

        mainmenu();
        return;
    }
    else
    {
        system("cls");

        cout << "Please enter Y or N only!\n\n";
        ReservationCancellationManyTime();
        return;
    }

    if (cancellmanytime == 'y' || cancellmanytime == 'Y')
    {
        system("cls");

        ReservationCancellationManyTime();
    }
    else if(cancellmanytime == 'n' || cancellmanytime == 'N')
    {
        system("cls");

        mainmenu();
    }
    else
    {
        system("cls");

        cout << "Please enter Y or N only!\n\n";
        ReservationCancellationManyTime();
    }
}

void PaymentProcessing()
{
    int booking_ID;

    system("cls");

    cout << "Enter your booking ID : ";
    cin >> booking_ID;

    if (booking_ID > 0 && booking_ID < 101)
    {
        CheckAnotherticket();
    }

    else
    {
        system("cls");

        cout << "Invalid booking ID ! \n";
        cout << "Please enter a correct booking ID ! \n\n";

        PaymentProcessing();
    }
}


void CheckAnotherticket()
{
    int ticket_number;
    double price;
    char check;
    string type_of_person;

    cout << "\nWhat ticket number whould you like to check ?\n";
    cout << "Enter the number ticket : ";
    cin >> ticket_number;

    /要从你的file里面读取他是属于那一种人 ，我这个只不过是暂时写罢了/

    cout << "\n\nThis ticket is for the 4 type of person.\n";
    cout << "It is senior , adult , child and infart.\n\n\n";

    cout << "Please write the type of person : ";
    cin >> type_of_person;

    if(type_of_person == "senior")
    {
        price = 100 * 0.3;
        cout << "\nThe ticket price for number "<< ticket_number << " is RM" << price;
    }

    else if (type_of_person == "adult")
    {
        price = 100 * 0.9;
        cout << "\nThe ticket price for number "<< ticket_number << " is RM" << price;
    }

    else if (type_of_person == "child")
    {
        price = 100 * 0.5;
        cout << "\nThe ticket price for number "<< ticket_number << " is RM" << price;
    }

    else if (type_of_person == "infart")
    {
        price = 100 * 0.2;
        cout << "\nThe ticket price for number "<< ticket_number << " is RM" << price;
    }

    else
    {

        system("cls");

        cout << "Please write the correct word !\n";
        CheckAnotherticket();

    }

    cout << "\n\nWould you like to check for other ticket ?\n";
    cout << "Enter your answer (Y/N) : ";
    cin >> check;
    
    if (check == 'y' || check == 'Y')
    {
        system("cls");

        CheckAnotherticket();
    }

    else if(check == 'n' || check == 'N')
    {
        system("cls");

        mainmenu();
    }

    else
    {
        system("cls");

        cout << "Please enter Y or N only!\n";
        CheckAnotherticket();
    }

}