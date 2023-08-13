#include <iostream>
using namespace std;

int asign_value(char a)
{
    if (a == 'I'){
    	return 1;
	}
        
    if (a == 'V'){
    	return 5;
	}
       
    if (a == 'X'){
    	return 10;
	}
        
    if (a == 'L'){
    	return 50;
	}
        
    if (a == 'C'){
    	return 100;
	}
        
    if (a == 'D'){
    	return 500;
	}
        
    if (a == 'M'){
    	return 1000;
	}
        
  
    return -1;
}

int decimal(string s2){
	int op = 0;
    
    for (int i = 0; i < s2.length(); i++) 
    {
        if (i + 1 < s2.length()) 
        {
            if (s2[i] >= s2[i+1]) 
            {
                op = op + s2[i];
            }
            else
            {
                op = op + s2[i+1] - s2[i];
                i++;
            }
        }
        else {
            op = op + s2[i];
        }
    }
    return op;
}
int main(){
	
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	
	cout<<s<<":";
	string s2="";
	int k,c=0;
	for(int i=0;i<s.length();i++){
		
		s2 += asign_value(s[i]);
		
	}

    cout <<decimal(s2);
	return 0;
}
