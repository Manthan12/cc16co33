#include <iostream>
using namespace std;
int main()
{
string str,cc[10];	
int n,i;
cout<<"Enter the length of stirng"<<endl;
cin>>n;

cout<<"Enter the expression\n";
	for(i=0;i<n;i++)
	{
		cin>>cc[i];
	}

for(i=0;i<n;i++)
	{
		if(cc[i] == "="){
		cout<<"assignment operator "<<cc[i]<<endl;}
		
	else if(cc[i]=="+"||cc[i]=="-"||cc[i]=="/"||cc[i]=="%"||cc[i]=="*"){
		cout<<"arithmetic operator "<<cc[i]<<endl;
		}
		
		else if(cc[i]=="<"||cc[i]==">"||cc[i]=="<="||cc[i]==">="||cc[i]=="=="||cc[i]=="!="){
			cout<<"relational operator "<<cc[i]<<endl;
		}
		
		else if(cc[i]==";"||cc[i]==" "||cc[i]=="["||cc[i]=="]"||cc[i]=="{"||cc[i]=="}"||cc[i]=="("||cc[i]==")")
		{
			cout<<"delimitter "<<cc[i]<<endl;
		}
		
		else if(cc[i]>="0"&&cc[i]<="9")
		{
			cout<<"constants "<<cc[i]<<endl;
		}
		else if(cc[i]=="if"){
		cout<<"keyword "<<cc[i]<<endl;
		}
		else if(cc[i]=="while"){
		cout<<"keyword "<<" "<<cc[i]<<endl;
		}
		else if(cc[i]=="for"){
		cout<<"keyword "<<cc[i]<<endl;
		}
		else if(cc[i]=="do"){
		cout<<"keyword "<<cc[i]<<endl;
		}
		else if(cc[i]=="switch"){
		cout<<"keyword "<<cc[i]<<endl;
		}
		else if(cc[i]=="else"){
		cout<<"keyword "<<cc[i]<<endl;
		}
		else if((cc[i]>="a"&&cc[i]<="z")||(cc[i]>="A"&&cc[i]<="Z"))
		{
			cout<<"identifiers "<<cc[i]<<endl;
		}
	}
	return 0;

}	
