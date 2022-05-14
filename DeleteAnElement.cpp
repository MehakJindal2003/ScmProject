#include <iostream>
using namespace std;
int main(){
   int a[10];
    int n;
    int num;
    int p=0;
    int i;
cout<< "Enter the size : ";
cin>> n;
cout << "Enter array elements:";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<< "Enter the number : ";
    cin>> num;
    for(i=0;i<n;i++){
        if (a[i]==num){
            a[i]=a[i+1];
            p=1;
        }
        else if(p>0){
            a[i]=a[i+1];
        }
    }
    cout<< "New array : ";
    for(i=0;i<n-p;i++)
        cout<< a[i]<< endl;
return 0;
}
