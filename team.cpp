#include<bits/stdc++.h>
using namespace std;

int niceteam(set <int> s,int min)
{
    int pair=0;
    //cout<<s.size();
    set <int> :: reverse_iterator rit;
    set<int >::iterator it ;
    rit=s.rbegin();
    // cout<<*rit<<endl;
    for(it=s.begin();it!=s.end();rit++)
     {   //cout<<*it<<endl;
        if(((*rit)>=(*it))  && (abs((*rit)-(*it)))==min)
        {
           cout<<"value:"<<*rit<<","<<*it<<endl;
           pair++;

        }
        if(rit==s.rend())
            {
              it++;  
              rit=s.rbegin();
              
            }
}
return pair;
}


int main(){

    set <int> s;
    set <int> s1;
    int n;
    cin>>n;
    int min;
    cout<<"enter minimum difference:";
    cin>>min;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;

        s.insert(a);
    }
    cout<<niceteam(s,min);
}