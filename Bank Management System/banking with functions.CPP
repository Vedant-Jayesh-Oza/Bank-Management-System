#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip.h>

int mainMenu();
int menu();
void displayBalance();
void withdrawFunds();
void depositFunds();

double balance = 250000.00;


int main()
{


    int ac_number = 258647;
    int pin = 33284;


    //Prompts user to enter Account number and PIN
    cout<<"\n**********************************************************"<<endl;
    cout<<"\n THE 1st CHOICE INTERNATIONAL BANK\n\n\t\t\t ------* WELCOME *------"<<endl;
    cout<<"\n**********************************************************\n\n";
    cout<<"\nUSER LOGIN";
    cout<<"\n------ Enter Account Number: ";
    cin>>ac_number;
    cout<<"\n------ Enter PIN: ";
    cin>>pin;
    cout<<"\n";


    while(ac_number != 258647 || pin != 33284)
    {
        system("cls");

        cout<<"\n**********************************************************"<<endl;
        cout<<"\nTHE 1st CHOICE INTERNATIONAL BANK ------* WELCOME *------";
        cout<<"\n**********************************************************";
        cout<<"\nUSER LOGIN";
        cout<<"\nINVALID ACCOUNT NUMBER OR PIN WAS ENTERED\n" << endl;
        cout<<"\n------ Enter Account Number: ";
        cin>>ac_number;
        cout<<"\n------ Enter PIN: ";
        cin>>pin;
        cout<<"\n";
    }


    system("cls");
    menu(); //function call
}//end main()


/*------------------------------------------------------------------------------------------------*/
int menu()
{


    switch (mainMenu())
    {

        case 1:
            system("cls");
            displayBalance();
            menu(); //function call
            break;

        case 2:
            system("cls");
            withdrawFunds();
            menu(); //function call
            break;


        case 3:
            system("cls");
            depositFunds();
            menu(); //function call
            break;


        case 4:
            exit(0);
            break;


        default:
            cout << "\nINVALID ENTRY.... Please Select numbers 1 - 4\n" << endl << endl;
            system("pause");
            menu(); //function call
            break;

    }//end switch


    system("pause");
    return 0;


}//end menu()


/*---------------------------------*****function definition*****---------------------------------------*/
int mainMenu()
{

    system("cls");


    int input;

    cout << "\t____________________________________________\n" << endl         /* Main menu begins here*/
        << "\t" << "     *************  MENU  *************" << endl           /*prompts user to make choice*/
        << "\t____________________________________________\n\n" << endl;


    cout << "\tPlease Enter the number for the Transaction\n" << endl
        << "\t\tPress 1. ----->> Balance Inquiry\n" << endl
        << "\t\tPress 2. ----->> Withdrawal\n" << endl
        << "\t\tPress 3. ----->> Deposit\n" << endl
        << "\t\tPress 4. ----->> Exit\n" << endl;

    cout << "\t_________________________________________\n" << endl
        << "\t ENTER TRANSACTION NUMBER:- ";
    cin >> input;


    return input;
}//end mainMenu()


/* --------------------------------*****function definition*****--------------------------------------*/
void displayBalance()
{

    cout << "\nAccount Balance is: $" << balance << "\n" << endl;


    system("PAUSE");
    system("CLS");
}//end displayBalance()


/*------------------------------------*****function definition*****------------------------------------*/
void withdrawFunds()
{
 

    double withdraw = 0.0;


    /* Withdraw Menu beings here & prompts user to make chice*/
    cout << "\tYou have opted to withdraw money\n" << endl
        << " Please Enter amount you with to withdraw --Type 0 to return to menu: $";
    cin >> withdraw;
    cout << "\n";


    system("cls");

    if (withdraw == 0)
    {

        system("cls");

        menu(); //function call
    }  //end if


    else if (withdraw != 0)
    {

        if (withdraw > balance)
        {

            system("CLS");


            cout << "Value Exceeds Current balance Please enter smaller amount\n" << endl
                << "Please Enter Amount you Wish to Withdraw: $";
            cin >> withdraw;
            system("CLS");


            if (withdraw == 0)
            {

                system("cls");

                menu(); //function call
            } //end if


            cout << "\nYou Have Withdrawn: $" << withdraw << " From your Accout" << "\n" << endl;
            balance = balance - withdraw;
            cout << "Balance is now: $" << balance << "\n" << endl;

            system("PAUSE");
            system("CLS");
        } //end if


        else
        {

            cout << "\nYou Have Withdrawn: $" << withdraw << " From your Accout" << endl;
            balance = balance - withdraw;
            cout << "\nBalance is now: $" << balance << "\n" << endl;

            system("PAUSE");
            system("CLS");
        } //end else
    }//end else if
}//end withdrawFunds()


/*-----------------------------------*****function definition*****--------------------------------------*/
void depositFunds()
{


    double deposit = 0.0;


    /* Deposit Menu beings here & prompts user to make chice*/
    cout << "\tYou Have Opted to Deposit Money\n" << endl
        << " Please Enter Amount You Wish to Deposit --Type 0 to return to Menu: $";
    cin >> deposit;
    cout << "\n";


    system("cls");

    if (deposit == 0)
    {

        system("cls");

        menu(); //function call
    }

    else if (deposit != 0)
    {


        balance = balance + deposit;

        cout << "You Have Successfully added $" << deposit << " to your Account\n" << endl;
        cout << "Balance is Now $" << balance << "\n" << endl;


        system("pause");
        system("cls");
    }
}//end depositFunds()