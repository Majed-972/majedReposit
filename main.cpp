
#include <iostream>
using namespace std;
class BankAccount
{
    private:
    int AccountNumber;
    string Name;
    int Balance;
    public:
        BankAccount()
        {
            AccountNumber=0;
            Name="";
            Balance=0;
        }
         BankAccount(int A , string n , int b)
         {
             AccountNumber=A;
             Name = n;
             Balance = b;
         }
         void OpenAccount()
         {
             cout<<"enter the account number and name and balance "<<endl;
             cin>> AccountNumber>> Name >> Balance;
         }
         void ShowDetailes()
         {
             cout<<"the Account number is : "<<AccountNumber<<endl<<"the account name is : "<<Name<<endl<<"the balance is : "<<Balance <<endl;
         }
         void Deposit()
         {int x;
             cout<<"enter your value you want to add in your account "<<endl;
             cin>>x;
             Balance+=x;
         }
         void Withdrawal()
         {int y;
         cout<<"enter your value you want withdrawn"<<endl;
         cin>>y;
         if((Balance-y)== 0 || (Balance-y)> 0)
         {
             Balance-=y;
         }
         }
         int getAccountNumber()
         {
             return AccountNumber;
         }
         string getName()
         {
             return Name;
         }
         int getBalance()
         {
            return Balance;
         }
         void Search()
         {int a;
         cout<<"enter your account number : "<<endl;
         cin>>a;
         if(a==AccountNumber)
         { cout<<"the Account number is : "<<AccountNumber<<endl
         <<"the account name is : "<<Name<<endl<<"the balance is : "<<Balance <<endl;}}
         };


         class SaveAccount : public BankAccount
         {
             private:
             float Rate;
             float Min_Balance;

           public:
                void setMR()
           {
               Rate= 0.023;
                Min_Balance=500.00;
           }

        float calcInterest()
         {    float incert;
             if(getBalance()>Min_Balance)
         {
             incert=getBalance()*Rate;

         }
              else incert =0;

               return incert;

         }
          int Exit (string a){

     if (a=="e")
        return 0;
        else
   while (a!="e")
        cout<< "enter ( e ) to exit the program "<<endl;
         }
         };


int main()
{

SaveAccount obj2;
      string a="";
    while (a!="e"){
    cout << "***********************"<<endl;
    cout << "*               there is a menu for the operations  :             *"<<endl;
    cout << "*               if you need adding an account press (a)           *"<<endl;
    cout << "*               if you need deposit from the account press (d)    *"<<endl;
    cout << "*               if you need Withdrawal from your account press (w)*"<<endl;
    cout << "*               if you need searching press (s)                   *"<<endl;
    cout << "*               if you need calculate Interest press (c)          *"<<endl;
    cout << "*               if you need show details press (sh)               *"<<endl;
    cout << "*               if you need exit (e)                              *"<<endl;
    cout << "***********************"<<endl;
  cin >>a;

    if (a=="a"){
        obj2.OpenAccount();
    }
    else if (a=="d"){
        obj2.Deposit();
    }
    else if (a=="w"){
        obj2.Withdrawal();}

    else if (a=="s") {
        obj2.Search();
    }
    else if (a=="c"){
        cout <<"the Interest of your account is : "<<obj2.calcInterest()<<endl;
    }
    else if (a=="sh"){
        obj2.ShowDetailes();
    }
    else if (a=="e")
       {obj2.Exit(a);}
 else {cout << "invalid input."<<endl;}
    }

return 0;
}
