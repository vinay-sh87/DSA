#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){counter = 0;}
        void getPrice(void);
        void setPrice(void);

};
void Shop::setPrice(void){
    cout<<"Enter id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::getPrice(void){
    for(int i = 0;i<counter;i++){
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.getPrice();


    return 0;
}