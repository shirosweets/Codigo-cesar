#include <iostream>
using namespace std;
int main()
{
	const int N=28;
	char b,p[N]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
	int a;
	cin>>a;
	for(int i=0;i<N;i++)
	{
		cin>>p[i];
		
		if(p[i]=='0')
		{
			for(int c=0;c<i;c++)
			{
				if((p[c]+a)>('Z'))
				{
					b=-a+p[c]-90+65;
				}
				if((p[c]-a)<'A')
				{
					b=-a+p[c]+26;
					cout<<p[c]<<"->"<<b<<endl;
				}
				else
				{
				b=-a+p[c];
				cout<<p[c]<<"->"<<b<<endl;
				}
			}
		}
	}
}
