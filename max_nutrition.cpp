#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,l=-1;
        cin>>n;
        int array1[n],array2[n];
        for(int i=0; i<n; i++){
            cin>>array1[i];
            if(array1[i]>l)
                l=array1[i];
        }
        int types[l]={0};
        for(int i=0; i<n; i++)
            cin>>array2[i];
        
        for(int j=0; j<n; j++){
               if(array2[j]>types[array1[j]-1]){
                   types[array1[j]-1]=array2[j];
               }
            }
        int sum=0;
        for(int i=0; i<l; i++){
            if(types[i]>0)
                sum+=types[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
