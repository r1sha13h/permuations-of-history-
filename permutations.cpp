#include <bits/stdc++.h> 
using namespace std; 

void fun(string str, int l, int r)  
{   
    if (l == r)  
        cout<<str<<endl;  
    else
    {  
        for (int i = l; i <= r; i++)  
        {    
            swap(str[l], str[i]);  
            fun(str, l+1, r);  
            swap(str[l], str[i]);  
        }  
    }  
}  
  
// Driver Code  
int main()  
{  
	
    string str = "history";  
    
    // using recursion
	int n = str.size();  
    fun(str, 0, n-1);
	
	cout<<"\n\n\n\n\n";
	
    // using next_permutation from STL
    do
    {
        cout<<str<<endl;
    } while (next_permutation(str.begin(),str.end()));
      
    return 0;  
}  