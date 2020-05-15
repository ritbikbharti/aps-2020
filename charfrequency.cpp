#include<bits/stdc++.h> 
using namespace std; 
const int CHARS = 26; 

int remAnagram(string str1, string str2) 
{
    int count1[CHARS] = {0}, count2[CHARS] = {0}; 
  
    // count frequency of each character in first string 
    for (int i=0; str1[i]!='\0'; i++) 
        count1[str1[i]-'a']++; 
  
    // count frequency of each character in second string 
    for (int i=0; str2[i]!='\0'; i++) 
        count2[str2[i]-'a']++; 
  
    // traverse count arrays to find number of characters to be removed 
    int result = 0; 
    for (int i=0; i<26; i++) 
        result += abs(count1[i] - count2[i]); 
    return result; 
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    string str1,str2;
    cin>>str1;
    cin>>str2;
    cout << remAnagram(str1, str2)<<endl;
    }
    return 0; 
}