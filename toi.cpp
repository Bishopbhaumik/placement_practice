#include<bits/stdc++.h>
using namespace std;

void toh(int n,char frc,char trc,char auc)
{
    if(n == 1)
    {
        cout<<"move disc 1 from "<< frc<<" to "<< trc<<endl;
    }
    else{
     toh(n-1,frc,auc,trc);
     cout<<"move disc "<<n<<" from "<< frc<<" to "<< trc<<endl;
     toh(n-1,auc,trc,frc);
    }

}

int main()
{
    int n;
    cout<<"enter disk no:";
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}