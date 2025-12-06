
#include <iostream>
using namespace std;
int main()
{
int n,pages,books;
float cost=0,discount,new_cost;
cout<<"Enter number of book orders";
cin>>n;
for(int i=1;i<=n;i++){
    cout<<"Enter number of pages";
    cin>> pages;
    cost=pages*1.5;
    if(pages>300){
    discount=cost*0.05;
    }
    new_cost=cost-discount;
    
    cout<<"the pages in the book are "<<pages<<endl;
        cout<<"the actual cost of the book is "<<cost <<endl;
    cout<<"the price after the discount of the book is "<<new_cost<<endl;
}
    return 0;
}