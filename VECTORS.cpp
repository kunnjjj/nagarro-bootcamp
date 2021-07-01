#include <iostream>
#include <vector>
#include<string>
using namespace std;
// func(int arr*[10])
void funct(int *arr)
{
    int n=sizeof(arr)/sizeof(int);
}
int main()
{

//     int arr[10];
//     // arr[7] directly accessible
//     // arr[0] = 5;
//     // 0....9

//     // vector
//     // jab 10 size ka array bangaya
//     // 11th element is to be added????

//     vector<int> A;
//     // A[0]=
//     // A.push_back(4);
//     // A.push_back(3);
//     // A.push_back(47);
//     // int n=A.size();

//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<A[i]<<" ";
//     // }
//     // cout<<endl;

// //     vector<int> B(4);
// //     // {0,0,0,0,3,}

// //     B.push_back(3);
// //     for(int i=0;i<B.size();i++) 
// //     {
// //         cout<<B[i]<<" ";
// //     }
// //     cout<<endl;
// // // 10


//     // jab bhi vector ka size almost half bharta hai
//     // tab uska size automatically double ho jaata hai

//     // queue, deque,stack



//     // {3,2,1,2,4,2,2}
//     // {2,2,2,4,2,1,2,3}

//     // pop_back()
//     // {2,1,2,4,2,2}
 
//     vector<int> C={4,3,9,10};
//     // for(int i=0;i<C.size();i++) cout<<C[i]<<" ";
//     // cout<<endl;

//     C.pop_back();


//     // for(int i=0;i<C.size();i++) cout<<C[i]<<" ";
//     // cout<<endl;

//     vector<vector<int>> X;


//     for(int i=0;i<2;i++)
//     {
//         X.push_back(C);
//     }
//     vector<int> w={10,10,10,10,10,10,10};
//     X.push_back(w);

//     // X is a 2D vector
//     // vector<datatype_p> V;  iske  datatype_p
//     for(int i=0;i<X.size();i++)
//     {
//         for(int j=0;j<X[i].size();j++)
//         {
//             cout<<X[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // int arr[n][m];
// vector<string> S;
// // S[i]= ... a string


// // vector<vector<int>> E;
// // E[i] 

// vector<vector<int>> U(4,vector<int> (3,-34));

// for(int i=0;i<U.size();i++)
// {
//     vector<int> p=U[i];
//     for(int i=0;i<p.size();i++)
//     {
//         cout<<p[i]<<" ";
//     }
//     cout<<endl;
// }


// // int A[row][col]

// // 2D vector ke har index ki intial value ek 1 D vector hai
// // so now we use [vector<type> name(size,intial_val)] format to make 2D vector
// // and initialise it using 1 D vector

// // 3, -1
// int Q[5][6];
// // Q[3]


// vector<int> Y(3);
// for(int i=0;i<3;i++) Y[i]=-1;

// vector<int> E(3,-1);
// // vector<type> name(size,intial_val);




// U[i]= vector<int> (m);

vector<int> deep1={3,2,1};
vector<int> deep2={90,34,12,847};
vector<vector<int>> sanya(2);
// arr[0]
sanya[0]=deep1;
sanya[1]=deep2;

// {
//     {3,2,1};
//     {90,34,12,847};
// }
for(int i=0;i<sanya.size();i++)
{
    for(int j=0;j<sanya[i].size();j++)
    {
        cout<<sanya[i][j]<<" ";
    }
    cout<<endl;
}

for(int i=0;i<2;i++)
{
    sanya[i].push_back(3);
}

// {
//     {3,2,1,3};
//     {90,34,12,847,3};
// }

for(int i=0;i<sanya.size();i++)
{
    for(int j=0;j<sanya[i].size();j++)
    {
        cout<<sanya[i][j]<<" ";
    }
    cout<<endl;
}


vector<int> kunj(2);
// {0,0}
for(int i=0;i<kunj.size();i++)
{
    cout<<kunj[i]<<" ";
}
cout<<endl;
kunj.push_back(10);
for(int i=0;i<kunj.size();i++)
{
    cout<<kunj[i]<<" ";
}
cout<<endl;
// {0,0,10}
kunj[0]=3;
for(int i=0;i<kunj.size();i++)
{
    cout<<kunj[i]<<" ";
}
cout<<endl;
// {3,0,10};
kunj[1]=2;
for(int i=0;i<kunj.size();i++)
{
    cout<<kunj[i]<<" ";
}
cout<<endl;
// {3,1,10};


// kunj[30]=23;


// kunj[i]=4;

for(int i=0;i<kunj.size();i++)
{
    cout<<kunj[i]<<" ";
}
cout<<endl;


// continuing in 5 mins





// {
//     {}
//     {}
//     {}
//     {}
// }



    // {   {4,3,9}
    //     {4,3,9}
    //    {10,10,10,10,10,10,10}
    //     
    // }

    // cpp reference
    // gfg


    //  0 0 0 0 3

    // 0,1,2
    // arr[50]  .. 45th arr[45]



// v.size()

// pop_back()
// push_back(3);




    return 0;
}