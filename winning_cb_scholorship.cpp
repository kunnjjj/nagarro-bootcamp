#include<iostream>
#include<climits>
using namespace std;
int main() {
	// cout<<INT_MAX<<endl;
	int N,M,X,Y;
	cin>>N>>M>>X>>Y;
	int ans=0;
	int s=0,e=N;
	// 10^18
	while(s<=e)
	{
		int mid=(s+e)/2;  // s + (e-s)/2;
		// mid=p
		// mid no. bachon ko scholorship derahe hai
		if((long long)mid * (long long)X <= (long long)M + (long long)(N-mid) * (long long)Y)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<ans<<endl;


	// algo:

	// p students get scholorship

	// p * x -> rs are needed must

	// n-p students are bad

	// p* x <= m + (n-p) * y

	// p can be a possible solution,
	// and now we have to look for better solution

	// if the sign of ineq is diff then we have to start considering
	// <p students


// 	TTTTTTTTT,,,, FFFFFFFFF
// 	FFFFFFF,..., TTTTTTT
// 	always think of binary seach

// 	example
// 	sorted
// 	x just greater element
// 	....
//  a1,a2,,A[i],,,,,,aN
// 	A[mid] <=x
// 		s=mid+1

// 	A[mid]>X
// 		ans=mid;
// 		e=mid-1











	// max bachon ko scholorship deni hai,
	// scholorship is for x rs
	// and bad student pays y rs extra
	// initially we got m rupees
	// N students

// 	N= 10^9

// 	array of size n -> O(n) -> 10 s + extra-> TLE

// 	run error 
// 	// max 256MB/ 128MB/ 512MB/ 1GB

// 1 int 4 byte

// 256 MB = (256 * 1024 * 1024 BYTE)/4 

// 10 ^ 6-7





	return 0;
}