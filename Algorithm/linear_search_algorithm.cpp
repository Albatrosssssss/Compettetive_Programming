#include<iostream>
using namespace std;
int main(){
    int a[]={-3, 4, 1, 88, 5, 7};
    int SearchItem ;
    cout<<"Give Input=\n";
    cin>>SearchItem;
    int i;

    for(i = 0; i <sizeof(a); i++){
        if(a[i]==SearchItem){
            cout<<"Found at index:"<<i;
            return 0;
        }     
    }
    cout<<"Not Found\n";
    return 0;
}