#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int sa,sb,a,b,p;
	    cin>>sa>>sb;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='A')   a =i;
	        if(s[i]=='B')   b = i;
	    }
	    p = b - a;
	    if(p%(sa+sb))  cout<<"safe"<<endl;
	    else
	    cout<<"unsafe"<<endl;
	}
	return 0;
}
