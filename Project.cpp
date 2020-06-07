#include <iostream>
#include<iomanip>
using namespace std;
class cafe
{
    int ori;
    string n;
    public:
    string namein()
    {
        cout<<"Please Enter Your Name: ";
        cin>>n;
        return n;
    }
    void first()
    {
        cout<<setw(35)<<setfill('*')<<" MENU"<<left<<setw(35)<<setfill('*')<<"*"<<endl;
        cout<<"Item code"<<right<<setw(20)<<setfill('*')<<"Description"<<right<<setw(20)<<setfill('*')<<"Size"<<right<<setw(20)<<setfill('*')<<"Price(Rs)"<<endl;
        cout<<"[11]"<<right<<setw(23)<<setfill('*')<<"Burger"<<right<<setw(25)<<setfill('*')<<"200/300gm"<<right<<setw(17)<<setfill('*')<<"130/180"<<endl;
        cout<<"[12]"<<right<<setw(26)<<setfill('*')<<"Chicken Pizza"<<right<<setw(23)<<setfill('*')<<"12/14/16inch"<<right<<setw(16)<<setfill('*')<<"750/975/1250"<<endl;
        cout<<"[13]"<<right<<setw(26)<<setfill('*')<<"Fried Chicken"<<right<<setw(22)<<setfill('*')<<"1/4/10 pcs"<<right<<setw(17)<<setfill('*')<<"85/320/790"<<endl;
        cout<<"[14]"<<right<<setw(27)<<setfill('*')<<"Grilled Chicken"<<right<<setw(25)<<setfill('*')<<"Quarter/Half/Full"<<right<<setw(13)<<setfill('*')<<"70/140/250"<<endl;
        cout<<"[15]"<<right<<setw(23)<<setfill('*')<<"Noodles"<<right<<setw(25)<<setfill('*')<<"Half/Full"<<right<<setw(17)<<setfill('*')<<"130/250"<<endl;
        cout<<"[16]"<<right<<setw(22)<<setfill('*')<<"Pasta"<<right<<setw(26)<<setfill('*')<<"Half/Full"<<right<<setw(17)<<setfill('*')<<"120/240"<<endl;
        cout<<"[17]"<<right<<setw(25)<<setfill('*')<<"Oreo Shake"<<right<<setw(22)<<setfill('*')<<"250 ml"<<right<<setw(18)<<setfill('*')<<"100"<<endl;
        cout<<"[18]"<<right<<setw(25)<<setfill('*')<<"Cold Coffee"<<right<<setw(22)<<setfill('*')<<"250 ml"<<right<<setw(18)<<setfill('*')<<"65"<<endl;
        cout<<"[19]"<<right<<setw(25)<<setfill('*')<<"Cappuccino"<<right<<setw(22)<<setfill('*')<<"250 ml"<<right<<setw(18)<<setfill('*')<<"70"<<endl;
        cout<<"[20]"<<right<<setw(22)<<setfill('*')<<"Coke"<<right<<setw(27)<<setfill('*')<<"250/500 ml"<<right<<setw(16)<<setfill('*')<<"20/30"<<endl;
        cout<<endl<<"How many items you want to order? ";
        cin>>ori;
    }
    void order(int &wat,float &res)
    {
        int ord[ori-1];
    int ico,si,qua,i;
    float bill;
    char csi,yn;
    for(i=1;i<=ori;i++)
    {
                cout<<"Enter chosen item "<<i<<" code:";
                cin>>ord[i];
                if(ord[i]==11)
                    {
                        cout<<"Enter 200/300gm needed:";
                        cin>>si;
                        if(si==200)
                        {
                            cout<<"Burger - 200gm"<<endl;
                            bill=130;
                        }
                        else if(si==100)
                         {
                             cout<<"Burger - 300gm"<<endl;
                             bill=180;
                         }
                    }
                else if(ord[i]==12)
                    {
                        cout<<"Enter 12/14/16 inch needed:";
                        cin>>si;
                        if(si==12)
                        {
                            cout<<"12 inches of Chicken Pizza"<<endl;
                            bill=750;
                        }
                        else if(si==14)
                        {
                            cout<<"14 inches of Chicken Pizza"<<endl;
                            bill=975;
                        }
                        else if(si==16){
                            cout<<"14 inches of Chicken Pizza"<<endl;
                            bill=1250;
                        }
                    }
                else if(ord[i]==13)
                    {
                        cout<<"Enter 1/4/10 pcs needed:";
                        cin>>si;
                        if(si==1){
                            cout<<"1 piece of Fried Chicken"<<endl;
                            bill=85;
                        }
                        else if(si==4){
                            cout<<"4 pieces of Fried Chicken"<<endl;
                            bill=320;
                        }
                        else if(si==10){
                            cout<<"10 pieces of Fried Chicken"<<endl;
                            bill=790;
                        }
                    }
                else if(ord[i]==14)
                    {
                        cout<<"Enter Quarter/Half/Full(Q/H/F) needed:";
                        cin>>csi;
                        if(csi=='q'||csi=='Q'){
                            cout<<"Quarter plate Grilled Chicken"<<endl;
                            bill=70;
                        }
                        else if(csi=='h'||csi=='H'){
                            cout<<"Half plate Grilled Chicken"<<endl;
                            bill=140;
                        }
                        else if(csi=='f'||csi=='F'){
                            cout<<"Full plate of Grilled Chicken"<<endl;
                            bill=250;
                        }
                    }
                else if(ord[i]==15)
                    {
                        cout<<"Enter Half/Full(H/F) needed:";
                        cin>>csi;
                        if(csi=='h'||csi=='H')
                        {
                            cout<<"Half plate Noodles"<<endl;
                            bill=130;
                        }
                        else if(csi=='f'||csi=='F')
                         {
                            cout<<"Full plate Noodles"<<endl;
                            bill=250;
                         }
                    }
                else if(ord[i]==16)
                    {
                        cout<<"Enter Half/Full(H/F) needed:";
                        cin>>csi;
                        if(csi=='h'||csi=='H')
                        {
                            cout<<"Half plate Pasta"<<endl;
                            bill=120;
                        }
                        else if(csi=='f'||csi=='F')
                        {
                            cout<<"Half plate Pasta"<<endl;
                            bill=240;
                        }
                    }
                else if(ord[i]==17)
                    {
                        cout<<"250 ml of OREO SHAKE"<<endl;
                        bill=100;
                    }
                else if(ord[i]==18)
                    {
                        cout<<"250 ml of COLD COFFEE"<<endl;
                        bill=65;
                    }
                else if(ord[i]==19)
                    {
                        cout<<"250 ml of CAPPUCCINO"<<endl;
                        bill=70;
                    }
                else if(ord[i]==20)
                    {
                        cout<<"Enter 250/500 ml needed:";
                        cin>>si;
                        if(si==250)
                        {
                            cout<<"250 ml of Coke"<<endl;
                            bill=20;
                        }
                        else if(si==500)
                        {
                            cout<<"500 ml of Coke"<<endl;
                            bill=30;
                        }
                    }
                    cout<<"Please enter the quantity : ";
                    cin>>qua;
                    res=res+(bill*qua);
        }
        cout<<"Do you want to order anything else?(y/n): ";
        cin>>yn;
        wat=ori;
        if (yn=='n'||yn=='N')
        {
            cout<<"Number of food ordered : "<<ori<<endl;
            cout<<endl<<"Thank you "<<n<<" for your order. Your Bill is "<<res<<endl;
            cout<<"Please wait while we prepare the food"<<endl;
            cout<<endl<<endl;
        }
        if (yn=='y'||yn=='Y')
        {
            order(wat,res);
        }
    }
    void serve(string nam,int &wait,int &ser,int &orno)
    {
        cout<<endl<<endl;
        ser=ser+1;
        wait=wait-1;
        cout<<"Order no: "<<++orno<<" by "<<nam<<" is ready."<<endl;
        cout<<"Enjoy your meal"<<endl;
        cout<<endl<<endl;
    }
    void display(int &s,int &w,int &rn)
    {
        cout<<endl<<endl;
        cout<<"Total order taken:"<<ori<<endl;
        cout<<"Total number of orders served: "<<s<<endl;
        cout<<"Number of currently waiting to be served:"<<w<<endl;
        cout<<"Currently preparing food for order no.: "<<rn<<endl;
        cout<<endl<<endl;
    }
};
main()
{
   int k=0,orio,served=0,waiting=0,orno=0,orderno=1000;
   float result=0;
   string name;
    cout <<setw(50)<< "Welcome to Cafe Dwaraka" << endl;
    while(k!=4)
    {
    cout<<"1. Order"<<endl;
    cout<<"2. Serve"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit the program"<<endl;
    cin>>k;
    if(k!=1&&k!=2&&k!=3&&k!=4)
    {
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    cafe c1;
    if(k==1)
    {
        name=c1.namein();
        c1.first();
        c1.order(waiting,result);
    }
    else if(k==2)
    {
        c1.serve(name,waiting,served,orderno);
    }
    else if(k==3)
    {
        c1.display(served,waiting,orderno);
    }
    else if (k==4)
    {
        cout<<"Thank You, Visit Us Again "<<endl;
        return 0;
    }
}
}
