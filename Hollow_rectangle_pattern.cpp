#include<iostream>
using namespace std;
//Hollow rectangle pattern:-
class pattern{
    private:
    int rows,cols,i,j;
    public:
    int hollow(){
        cout<<"enter no. of rows and cols:";
    cin>>rows>>cols;
    for(i=1;i<=rows;i++){
        for(j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<" * ";                  
            }                               
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    }
};
int main(){
    pattern obj;
    obj.hollow();
    return 0;
}