#include<bits/stdc++.h>
using namespace std;
int main()
{
	int hh,mm,ss;
	char f[3];
	scanf("%d:%d:%d%s",&hh,&mm,&ss,f);
	if(strcmp(f,"AM")==0 && hh==12)
	hh=0;
	if(strcmp(f,"PM")==0 && hh!=12)
	hh=hh+12;
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
}
