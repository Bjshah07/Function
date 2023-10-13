#include<iostream>
using namespace std;
void sw(int e,int f){
    //CALL BY VALUE
    //without using third variable
    e=e+f;
    f=e-f;
    e=e-f;
    cout<<"without using third variable in function\n";
    cout<<"after swap:"<<e<<endl;
    cout<<"after swap:"<<f<<endl;

}
void sp(int &c,int &d){
    //CALL BY REFRENCE
    //USING THIRD VARIABLE
    int temp=0;
    temp=c;
    c=d;
    d=temp;
    return;
    
}
int main(){
    int a,b;
    cout<<"enter the first no.:";
    cin>>a;
    cout<<"enter the second no.:";
    cin>>b;
    sw(a,b);
    int *x=&a;
    int *y=&b;
    sp(*x,*y);
    cout<<"using function\n";
    cout<<"after swap:"<<*x<<endl;
    cout<<"after swap:"<<*y;
    return 0;
}