#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;

		int freq[CHARS] = {0}; 
  
    	// count frequency of each character in first string 
    	for (int i=0; s[i]!='\0'; i++) 
        	freq[s[i]-'A']++;

        sort(freq,freq+26);

        int l=s.length(),d=0,count=0;

        for(int i=0; i<26; i++)
        {
        	if(freq[i]!=0)
        		d++;
        }

        if(l%d!=0)
        {
        	int x = l%d;
        	count=x;
        }
        else if(l%d==0)
        {
        	int x = l/d;
        	for(int i=0;i<26;i++)
        	{
        		if(freq[i]>x)
        		{
        			count+=freq[i]-x;
        		}

        	}
        }

        cout<<count<<endl;
	}
	return 0;
}