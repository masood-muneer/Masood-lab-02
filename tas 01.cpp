#include <iostream>
using namespace std;
int main()
{
    int initial,deposit,withdrawal,after_b,after_w;
    cout <<"Enter a initial balance in account : ";
    cin>>initial ;
    cout<<"Enter a amount that deposit : ";
    cin>>deposit;
    cout<<"Enter the withdrawal amount : ";
    cin>>withdrawal;
    after_b =initial+deposit;
    cout<<" Balance after deposit is : "<<after_b<<endl;
    after_w= after_b -withdrawal;
    cout<<" Balance after withrawal : "<<after_w<<endl;

}