#include <iostream>
using namespace std;
int pay(int &b)
{
    int i;
    cin>>i;
    if(i==b)
    {
        cout<<"***THANK YOU FOR PAYING YOUR BILL***\n";
    }
    else if(i<b)
    {
        cout<<"**Balance Amount $"<<b-i<<" should be payed in 24 hours**\n";
    }
    else if(i>b)
    {
        cout<<"Your extra Amount $"<<i-b<<" is transfered back to you!!\n";
        cout<<"***THANK YOU FOR PAYING YOUR BILL***\n";
    }
}
int add()
{
    int i=0;
    cin>>i;
    if(i==1){return 10;}
    if(i==2){return 30;}
    if(i==3){return 50;}
    if(i==12){return 10+30;}
    if(i==13){return 10+50;}
    if(i==21){return 10+30;}
    if(i==31){return 10+50;}
    if(i==23){return 20+30;}
    if(i==32){return 20+50;}
    if(i==123){return 10+30+50;}
    if(i==132){return 10+30+50;}
    if(i==213){return 10+30+50;}
    if(i==231){return 10+30+50;}
    if(i==321){return 10+30+50;}
    if(i==312){return 10+30+50;}
}
int login()
{
    int res=0;
    cout<<"1.TV=$10   2.Fridge=$30   3.AC=$50\n";
    cout<<"Enter all the appliances you use:\n";
    res=add();
    cout<<"Your Bill is $"<<res<<"\n";
    return res;
}
main()
{
    int a;
    string un;
    string pass;
    cout<<"Username: ";
    cin>>un;
    if(un=="ravi"||un=="vijitha"||un=="hanoch"||un=="cyril"||un=="teddy"||un=="tiger")
    {
        if(un=="ravi")
        {
            cout<<"Password: ";
            cin>>pass;
            if(pass=="ravi1979")
            {
                cout<<"***LOGIN SUCCESSFUL***\n";
                a=login();
                cout<<"**Please Pay your Bill**\n";
                pay(a);
            }
            else
            {
                cout<<"Wrong password\n";
            }
        }
        else if(un=="vijitha")
        {
            cout<<"Password: ";
            cin>>pass;
            if(pass=="vijitha1974")
            {
                cout<<"***LOGIN SUCCESSFUL***\n";
                a=login();
                cout<<"**Please Pay your Bill**\n";
                pay(a);
            }
            else
            {
                cout<<"Wrong password\n";
            }
        }
        else if(un=="hanoch")
        {
            cout<<"Password: ";
            cin>>pass;
            if(pass=="hanoch2001")
            {
                cout<<"***LOGIN SUCCESSFUL***\n";
                a=login();
                cout<<"**Please Pay your Bill**\n";
                pay(a);
            }
            else
            {
                cout<<"Wrong password\n";
            }
        }
        if(un=="cyril")
        {
            cout<<"Password: ";
            cin>>pass;
            if(pass=="cyril2003")
            {
                cout<<"***LOGIN SUCCESSFUL***\n";
                a=login();
                cout<<"**Please Pay your Bill**\n";
                pay(a);
            }
            else
            {
                cout<<"Wrong password\n";
            }
        }
        if(un=="teddy")
        {
            cout<<"Password: ";
            cin>>pass;
            if(pass=="teddy2018")
            {
                cout<<"***LOGIN SUCCESSFUL***\n";
                a=login();
                cout<<"**Please Pay your Bill**\n";
                pay(a);
            }
            else
            {
                cout<<"Wrong password\n";
            }
        }
        if(un=="tiger")
        {
            cout<<"Password: ";
            cin>>pass;
            if(pass=="tiger2019")
            {
                cout<<"***LOGIN SUCCESSFUL***\n";
                a=login();
                cout<<"**Please Pay your Bill**\n";
                pay(a);
            }
            else
            {
                cout<<"Wrong password\n";
            }
        }
    }
    else
    {
        cout<<"***Sorry your house is not in this area***";
    }
}
