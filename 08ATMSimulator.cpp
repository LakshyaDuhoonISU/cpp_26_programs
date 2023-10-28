//program to simulate a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement
#include<iostream>
using namespace std;
int main()
{
    double balance=50000.0, deposit, withdraw;
    int choice;
    while (true)
    {
        cout<<"Welcome to XYZ Bank!"<<endl<<"Please select your choice."<<endl<<"1.Balance"<<endl;
        cout<<"2.Deposit"<<endl<<"3.Withdraw"<<endl<<"4.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Your account balance is: "<<balance<<endl<<endl;
            break;
            case 2:
            cout<<"Enter amount to deposit: ";
            cin>>deposit;
            if (deposit<=0)
            {
                cout<<"Error! Invalid deposit amount!"<<endl<<endl;
            }
            else
            {
                balance+=deposit;
                cout<<"Successfully deposited amount "<<deposit<<endl<<endl;
            }
            break;
            case 3:
            cout<<"Enter amount to withdraw: ";
            cin>>withdraw;
            if (withdraw<=0 || withdraw>balance)
            {
                cout<<"Error! Invalid withdraw amount!"<<endl<<endl;
            }
            else
            {
                balance-=withdraw;
                cout<<"Successfully withdrew amount "<<withdraw<<endl<<endl;
            }
            break;
            case 4:
            cout<<"Exiting ATM...Have a nice day!"<<endl;
            return 0;
            break;
            default:
            cout<<"Choose a valid choice!"<<endl<<endl;
        }
        }
        return 0;
}