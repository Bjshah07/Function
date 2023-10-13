 #include<iostream>
 using namespace std;
 float div(float g,float h){
    cout<<"the division of the entered no. is: ";
    return g/h;
 }
 int diff(int e,int f){
    cout<<"the difference of the enteresd no. is: ";
    return e-f;
 }
 int prd(int c,int d){
    cout<<"the product of the entered no. is: ";
    return c*d;
 }
int add(int x,int y){
    cout<<"the sum of the entered no. is: ";
    return x+y;
}
 int main(){
    float a,b,x,y;
    cout<<"enter the first no.:"<<endl;
    cin>>a;
    cout<<"enter the second no.:"<<endl;
    cin>>b;
    int sum=add(a,b);
    cout<<sum<<endl;
    int product=prd(a,b);
    cout<<product<<endl;
    int difference=diff(a,b);
    cout<<difference<<endl;
    float division=div(a,b);
    cout<<division<<endl;
    return 0;
 }