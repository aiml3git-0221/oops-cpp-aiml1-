//E-Commerce Product Comparison System
#include<iostream>
using namespace std;

class Product{
    int productId;
    string name;
    double price;
public:
    Product(int id,string n,double p){
        productId=id;
        name=n;
        price=p;
    }
    Product comparePrice(const Product &p){
        if(price>p.price)
            return *this;
        return p;
    }
    void display(){
        cout<<"Product ID: "<<productId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main(){
    Product p1(101,"Laptop",50000);
    Product p2(102,"Mobile",30000);
    Product p=p1.comparePrice(p2);
    p.display();
    return 0;
}