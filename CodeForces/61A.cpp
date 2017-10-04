#include <bits/stdc++.h>
using namespace std;

int main() {
            string n1,n2,n3;
            int i;
            cin>>n1;
            cin>>n2;
            for(i=0;i<n1.size();i++)
            {
            if(n1[i]!=n2[i])
            n3+='1';
            else
            n3+='0';
            }
            n3[i]='\0';
            cout<<n3;
	return 0;
}
