#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string s; cin>>s;

	string ans="";
	ans.push_back(s[0]);
	for(int i=1;i<s.size();i++)
	{
		if(s[i]==s[i-1])
		{

		}
		else
		{
			ans.push_back(s[i]);
		}
	}
	cout<<ans<<endl;




	// sort...

	// a a a a a a b bbbbcccc

	// a,
	return 0;
}