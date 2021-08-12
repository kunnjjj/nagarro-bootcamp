#include<bits/stdc++.h>
using namespace std;

int main() {

	// pair<int,int> p; // c++ provides this
	int n; cin>>n;
	queue<int> Q[5]; 
	// Q[i]  denotes current queue corresponding to course i
	deque<pair<int,int>> global;
	// pair<int,int>  first: roll number , second: course number
    int sz=1e5 + 1; // 1en -> 10^n
    vector<vector<bool>> visited(5,vector<bool> (sz));// visited[course][roll]
	for(int i=0;i<n;i++)
	{
		char ch; cin>>ch;
		if(ch=='E')
		{
			int course,roll; cin>>course>>roll;
			pair<int,int> kid;
			kid.first=course;
			kid.second=roll;
			global.push_back(kid);
            Q[course].push(roll);
		}
		else // nikalne wala process 
		{
			// 4 process
			// jo queue mai pade hai already and they are visited
			// we have to remove them
			// first ->course
			// second->roll
			// visited[course][roll]
			while(!global.empty() && visited[global.front().first][global.front().second]==true)
			{
				global.pop_front();
			}
			pair<int,int> aage=global.front();
            int roll=aage.second;
            int course=aage.first;
			cout<<course<<" "<<roll<<endl;
            visited[course][roll]=true;
            global.pop_front();
            Q[course].pop();
            if(!Q[course].empty())  // bhai exist karta hai
            {
                int bhai=Q[course].front();
                global.push_front({course,bhai});
            }
		}
	}
	return 0;
}