#include <iostream>
using namespace std;
class Account
{
    int balance;
    public:
        Account(int bal)
        {
            if(balance >= 0)
            {
                balance = bal;
            }
            else
            {
                balance = 0;
                cout<<endl<<"Invalid initial balance ";
            }
        }
        void credit()
        {
            int amount;
            cout<<endl<<"Enter amount to be credit : ";
            cin>>amount;
            balance += amount;
        }
        void debit()
        {
            int amount;
            cout<<endl<<"Enter amount to be debit : ";
            cin>>amount;
            if(amount > balance)
            {
                cout<<endl<<"Debit amount exceeded account balance. ";
            } 
            else
            {
                balance -= amount;
            }
        }
        int getBalance()
        {
            return balance;
        }
};

int main()
{
    int initial_bal;
    cout<<endl<<"Enter initial balance of Account 1 : ";
    cin>>initial_bal;

    Account a1(initial_bal);
    // Credit function
    a1.credit();
    // Debit function
    a1.debit();

    // Get Balance function
    cout<<endl<<"Final balance in account : " << a1.getBalance(); 

    cout<<endl<<"Enter initial balance of Account 2 : ";
    cin>>initial_bal;

    Account a2(initial_bal);
    // Credit function
    a2.credit();
    // Debit function
    a2.debit();

    // Get Balance function
    cout<<endl<<"Final balance in account : "<<a2.getBalance(); 

    return 0;
}
