#include<iostream>
#include <cmath>
#include<string>
using namespace std;

class solution{
    public:
        bool oneAway(string str1, string str2){
            if(fabs(str1.size() - str2.size()) > 1)
                return false;
            
            string s1=str1.size()<str2.size()?str1:str2;
            string s2=str1.size()<str2.size()?str2:str1;
            
            int index1=0,index2=0;
            bool foundDiff=false;
            
            while(index2<s2.size() && index1<s1.size())
            {
                if(s1[index1]!=s2[index2])
                {
                    if(foundDiff == true)
                        return false;
                    
                    foundDiff = true;
                    
                    if(s1.size() == s2.size())
                        index1++;
                }
                else
                    index1++;
                
                index2++;
            }
            return true;
        }
        
};

int main()
{
    cout<<"Case 1:"<<endl;
    string s1 = "pale";
    string s2 = "pale";
    cout<<"String 1: "<<s1<<endl;
    cout<<"String 2: "<<s2<<endl;
    cout<<"Is One away? Ans: "<<solution().oneAway(s1,s2)<<endl;

    cout<<"Case 2:"<<endl;
    s1 = "pale";
    s2 = "ple";
    cout<<"String 1: "<<s1<<endl;
    cout<<"String 2: "<<s2<<endl;
    cout<<"Is One away? Ans: "<<solution().oneAway(s1,s2)<<endl;

    cout<<"Case 3:"<<endl;
    s1 = "pale";
    s2 = "kale";
    cout<<"String 1: "<<s1<<endl;
    cout<<"String 2: "<<s2<<endl;
    cout<<"Is One away? Ans: "<<solution().oneAway(s1,s2)<<endl;

    cout<<"Case 4:"<<endl;
    s1 = "pale";
    s2 = "kate";
    cout<<"String 1: "<<s1<<endl;
    cout<<"String 2: "<<s2<<endl;
    cout<<"Is One away? Ans: "<<solution().oneAway(s1,s2)<<endl;

    cout<<"Case 5:"<<endl;
    s1 = "palpet";
    s2 = "tpalep";
    cout<<"String 1: "<<s1<<endl;
    cout<<"String 2: "<<s2<<endl;
    cout<<"Is One away? Ans: "<<solution().oneAway(s1,s2)<<endl;


}
