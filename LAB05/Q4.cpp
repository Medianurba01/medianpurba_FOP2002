 #include <iostream>
using namespace std;

int main() {
  //Variable Declaration
  float balance = 500;
  float change;
  int decision;
  char again;

  //Display Request Input
  cout << "Welcome to Dave Bank\n";

  //Make condition
  do{
 cout<<"Welcome to menu"<<endl;
 cout<<"1. Check Saldo"<<endl;
 cout<<"2. Lakukan Deposit"<<endl;
 cout<<"3. Lakukan Withdraw"<<endl;
 cout<<"====== Pilih Menu ======"<<endl;
 cin>>decision;
    //Condition depending on the choice
    switch (decision){
    case 1 :
      cout << "Your balance is $" << balance << endl;
      break;

    case 2 :
      cout << "Your remaining balance is $" << balance << "\nEnter the price value you want to deposit = ";
      cin >> change;

      balance += change;
      cout << "\nTransaction is Successfull\n" << "Your remaining balance is $" << balance;
      break;
      
    case 3 :
      cout << "Your remaining balance is $" << balance << "\nEnter the price value you want to withdraw = ";
      cin >> change;

      balance -= change;
      if (balance < 0){
        cout << "There's not enough balance" << endl;
        balance += change;
        break;
      }
      else {
        cout << "\nTransaction is Successfull\n" << "Your remaining balance is $" << balance;
      break;
    }
    }

    cout << "\nDo you want to continue? if yes type 'y', if no type 'no' \n";
    cin >> again;
  } while (again == 'y');

  
  return 0;
}