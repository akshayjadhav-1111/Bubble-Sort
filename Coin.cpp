#include<iostream>
#include<map>
using namespace std;




int main(){
    int rupee[10]={2000,500,200,100,50,20,10,5,2,1};
    int Amount = 0;
    cout<<"Enter the amount: ";
    cin>>Amount;
    int i=0;
    map<int,int>hash;
    while(i<10){
        if(Amount>=rupee[i])//4500>2000
        //4500-2000=2500
        //2500-2000=500
        //500-500=0
        {
            Amount = Amount-rupee[i];
            hash[rupee[i]]++;
        }
        if(Amount==0)break;
        
        if(Amount<rupee[i]){
            i++;
        }

   
    }

         for(auto it:hash){
            cout<< it.first<<" : " <<it.second<<endl;
        }
}