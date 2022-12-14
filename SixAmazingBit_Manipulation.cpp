#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
	for(int i=10; i>=0; i--)
	{
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

void upperCase(char ch)
{
	// char c = (ch&(~(1<<5)));
	char c = (ch&('_'));
	cout<<c<<" ";
}

void lowerCase(int ch)
{
	// char c = (ch|(1<<5));
	char c = (ch|(' '));
	cout<<c<<" ";
}

void clearLSBs(int num,int i)
{
	num = (num&(~((1<<(i+1))-1)));

	printBinary(num);
}
void clearMSBs(int num,int i)
{
	num = (num&((1<<(i+1))-1));

	printBinary(num);
}

void checkPowerOf2(int num)
{
	if(num&(num-1))
	{
		cout<<"not a power of two "<<endl;
	}
	else
	{
		cout<<"power of two"<<endl;
	}
}
int main()
{
	int num; 
	cin>>num;
//Trick 1. Odd/Even check

	// if(num&1)
	// 	cout<<"Odd number"<<endl;
	// else
	// 	cout<<"Even number"<<endl;

//Trick 2. Multiply/Divide by 2

	// cout<<"Multiply by 2 = "<<(num<<1)<<endl;
	// cout<<"Divided by  2 = "<<(num>>1)<<endl;

//Trick 3. UpperCase to LowerCase and Vice Versa

	// for(char lower = 'a',upper='A'; upper<='Z'; upper++)
	// {	
	// 	int n = upper;
	// 	int n1 = lower;
	// 	cout<<n<<" "<<(upper)<<" ";
	// 	printBinary(upper);
	// 	cout<<n1<<" "<<lower<<" ";
	// 	printBinary(lower);
	// 	lower++;
	// 	cout<<endl;
	// }

	for(char c = 'a'; c<='z'; c++)
	{
		upperCase(c);
	}
	cout<<endl;
	for(char c = 'A'; c<='Z'; c++)
	{
		lowerCase(c);
	}

	printBinary(num);
//Trick 4. clear LSBs
	clearLSBs(num,2 );
//Trick 5. clear MSBs
	clearMSBs(num,0);

//Trick 6. Check power of 2

	checkPowerOf2(num);

	printBinary(65);
	printBinary(97);
}