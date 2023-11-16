#include<iostream>
#include<string>
using namespace std;
using std::string;

class account
{
    private:
        string name;
        long int ant_num;
        string ant_type;
        float amount;
    
    public:
        account(string,long int,string,float);
        void dep_amt(float);
        void withd_amt();
        void dis_nm_bal();

};

account::account(string n,long int num,string tp,float amt)
{
    name=n;
    ant_num=num;
    ant_type=tp;
    amount=amt;
}

void account::dep_amt(float amt)
{
    amount+=amt;
}

void account::withd_amt()
{
    int amt;
    cout<<"your balance is:"<<amount<<endl;
    cout<<"Enter amount to withdraw:";
    cin>>amt;
    amount-=amt;
    cout<<"Balance after withdraw:"<<amount<<endl;

}

void account::dis_nm_bal()
{
    cout<<"Account Name:"<<name<<endl;
    cout<<"Account balance:"<<amount<<endl;
}

int main()
{
        int n;
        cout<<"     menu    "<<endl;
        cout<<"1.Open Account."<<endl;
        cout<<"2.exit"<<endl;
        cout<<"Enter the choice:";
        cin>>n;
        string name;
        long int ant_num;
        string ant_type;
        float amount;
        if(n==1)
        {
            cout<<"Enter Account Holder Name:";
            cin>>name;
            cout<<"Enter account number:";
            cin>>ant_num;
            cout<<"Enter account type(current or savings):";
            cin>>ant_type;
            cout<<"Enter the amount:";
            cin>>amount;
            
            

        }
        else if(n==2)
        {
            return 0;
        }
    
    account acc(name,ant_num,ant_type,amount);
    while(true)
    {
        int n;
        cout<<"     menu    "<<endl;
        cout<<"1.Deposit amount:"<<endl;
        cout<<"2.Withdraw money:"<<endl;
        cout<<"3.Show name and balance:"<<endl;
        cout<<"4.exit";
        cout<<"enter the choice:";
        cin>>n;
        if(n==1)
        {
            int amt;
            cout<<"enter amount to deposit:";
            cin>>amt;
            acc.dep_amt(amt);
        }
        else if(n==2)
        {
            acc.withd_amt();
        }
        else if(n==3)
        {
            acc.dis_nm_bal();
        }
        else if(n==4)
        {
            return 0;
        }
        else{continue;}
    }
    return 0;
}