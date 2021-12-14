// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
   bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0;i<x.size();i++){
            if(x[i]=='{'||x[i]=='['||x[i]=='(') s.push(x[i]);
           else if(x[i]=='}'||x[i]==']'||x[i]==')') 
           if(s.empty()||!ArePair(s.top(),x[i])) return false;
			else
				s.pop();
        }
        return s.empty() ? true:false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1# 
// https://www.youtube.com/watch?v=QZOLb0xHB_Q 
