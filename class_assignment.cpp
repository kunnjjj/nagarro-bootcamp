#include<iostream>
#include<vector>
using namespace std;
// end_in -> false ending in a
// end_in -> true end in b
long long func(int len,bool end_in)
{
	if(len==1)
	{
		if(end_in)
		{
			return 1;
		}
		else
		{
			return 1;
		}
	}
	if(end_in)
	{
		return func(len-1,false);
	}
	else
	{
		return func(len-1,false) + func(len-1,true);
	}
}
int main() 
{
	// O(n + t)

	int n= 100000;
		// cout<<func(n,true) + func(n,false)<<endl;
		vector<long long> ans1(n+1);
	vector<long long> ans2(n+1);
	ans1[1]=1;
	ans2[1]=1;
	for(int i=2;i<=n;i++)
	{
			// ans1[x+1]=ans2[x]
			// ans2[x+1]=ans2[x] + ans1[x]	
		// x-> i-1
		// 
		// ith state depends on (i-1)th  state
		ans1[i]= ans2[i-1] ;
		ans2[i]= ans2[i-1] + ans1[i-1];		
	}

	// f[i]= 2 * f[i-1]
	// f[i-1], a
	// f[i-1], b
	// 2^n
	// cout<<ans1[n] + ans2[n]<<endl;
	// t=10^5
	// n=10^5
	// 5th -> n=50

	// 12th case n=60 1,....50..
	int t; cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"#"<<i<<" : ";
		int n; cin>>n;
		cout<<ans1[n] + ans2[n]<<endl;
	}

	
	// ans[i] = ans[i-1]  +ans[i-2] fibonacci

	
	

// a
// b
	// ans1[x]=no. of strings that end with b and have length x
	// ans2[x]=no. of strings that end in a and have length x
	
	// ans1[x+1]= no of strings that end with b and have len x+1
	// ans2[x+1]=no of strings that end in a and have len x+1

	// ans1[x+1]=ans2[x]
	// ans2[x+1]=ans2[x] + ans1[x]	


	// ans1[x+1].... this is will be made by adding a 'b'
	// to all string that have length x , and end in 'a'

	// AAAAA + B
	// BAABA + B
	// BBBAA + B
	// AAABA + B
	// ABBBA + B
	// ABAAA + B

	// ans2[x].....end in 'a' and X,
	// ans1[x+1] ,, X+1 len and 'b'
	// ans1[x+1].... ans1[x]
	// // jo strings x len ki A mai end horahi hai
	// // un sab mai last mai, B chipkane par humei ans1[x+1] milega
	// ans2[x+1]...x+1 length ending in A 
	// ans2[x+1]= ans1[x] + ans2[x]
	// B, + A
	// A, + A


	// ans2[5]=6

	// ans1[6]=
	// X length ki total strings = ans1[x] + ans2[x]







	




	// aaaaaaa
	// abaaaab
	return 0;
}