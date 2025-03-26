//bank_account.h
class BankAccount
{

public:
    BankAccount(int b) : balance(b) {} //class constructor 
    int get_balance(){return balance;}
    void deposit(int amount);
private:
    int balance {0};
};