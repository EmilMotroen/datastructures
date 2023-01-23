class Checkbook {
public:
    void setBalance(float amount);
    bool writeCheck(float amount);  // Returns true if amount is greater than balance, else false
    void deposit(float amount);
    float getBalance();
    float getLastCheck();
    float getLastDeposit();
private:
    float balance;
    float lastCheck;
    float lastDeposit;
};