
#include<bits/stdc++.h>
using namespace std;

void printVac(vector<pair<int,int>> &v)
{
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	v.push_back({2,3});
}

void printS(multiset<int> &s)
{
	// for(int val : s)
	for(auto &val : s)
		cout<<val<<endl;
	cout<<endl;
	for(auto it= s.begin(); it!=s.end(); it++)
		cout<<(*it)<<endl;
}

unordered_map<char,int> op = {{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};
string isBalanced(string s)
{
	stack<char> st;

	for(auto &val : s)
	{
		if(op[val]>0)
		{
			st.push(val);
		}
		else
		{
			if(!st.empty())
			{
				char c = st.top();
				if(op[val]+op[c]==0)
				{
					st.pop();
				}
				else
				{
					return "NO";
				}
			}
			else
			{
				return "NO";
			}

		}
	}	

	if(st.empty())
	return "YES";
	else
	return "NO"; 
}

vector<int> Nge(vector<int> v)
{
	vector<int> nge(v.size());
	stack<int> ng;

	for(int i=0;i<v.size(); i++)
	{
		while(!ng.empty() && v[i]>v[ng.top()])
		{
			nge[ng.top()] = i;
			ng.pop();
		}
		ng.push(i);
	}
		while(!ng.empty())
		{
			nge[ng.top()] = -1;
			ng.pop();
		}

	return nge;
}

// bool should_swap(int a,int b)
// {
// 	if(a>b) return false;
// 	return true;
// }
bool cmp(pair<int,int> a,pair<int,int> b)
{
	if(a.first!= b.first) 
	{
		return a<b;
	}
	else
	return a>b;
}
int main()
{
	// vector<pair<int,int>> v;
	// int n;
	// cin>>n;
	// for(int i=0; i<n; i++)
	// {
	// 	int x,y;
	// 	cin>>x>>y;
	// 	v.push_back({x,y});
	// }

	// printVac(v);
	// swap(v[0],v[2]);
	// printVac(v);
	// printVac(v);

// VECTOR OF ARRAYS

	// int N;
	// cin>>N;

	// vector<int> v[N];

	// for(int i=0; i<N; i++)
	// {
	// 	int n;
	// 	cin>>n;
	// 	for(int j=0; j<n; j++)
	// 	{
	// 		int x;
	// 		cin>>x;
	// 		v[i].push_back(x);
	// 	}
	// }	

	// for(int i=0; i<N; i++)
	// {
	// 	for(int j=0; j<v[i].size(); j++)
	// 	{
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
// VECTORS OF VECTORS

	// int N;
	// cin>>N;

	// vector<vector<int>> v;

	// for(int i=0; i<N; i++)
	// {
	// 	int n;
	// 	cin>>n;
	// 	// v.push_back(vector<int> ());
	// 	vector<int> temp;
	// 	for(int j=0; j<n; j++)
	// 	{
	// 		int x;
	// 		cin>>x;
	// 		temp.push_back(x);
	// 	}
	// 	v.push_back(temp);
	// }	

	// for(int i=0; i<v.size(); i++)
	// {
	// 	for(int j=0; j<v[i].size(); j++)
	// 	{
	// 		cout<<v[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

// ITERATORS IN STL

	// vector<int> v = {2,3,4,588,79};

	// vector<int> :: iterator it;

	// for(it =v.begin(); it<v.end(); it++)
	// {
	// 	cout<<(*it)<<" ";
	// }

	// vector<pair<int,int>> ::iterator vpit;

	// for(vpit = v_p.begin(); vpit<v_p.end(); vpit++)
	// {
	// 	cout<<(*vpit).first<<" "<<vpit->second<<endl;
	// }

// C++11 ITERATORS CODE IN SHORT

	// vector<int> v = {2,3,4,588,79};

// RANGE BASED LOOP

	// for(int &value : v)
	// 	cout<<value++<<" ";
	// cout<<endl;
	// for(int value : v)
	// 	cout<<value<<" ";

	// vector<pair<int,int>> v_p = {{2,3},{9,7},{10,64}};
	// for(pair<int,int> &value : v_p)
	// 	cout<<value.first<<" "<<value.second<<endl;

// AUTO KEYWORD

	// vector<pair<int,int>> v_p = {{2,3},{9,7},{10,64}};
	// for(auto &value : v_p)
	// 	cout<<value.first<<" "<<value.second<<endl;


// MAP

	// map<string,int> m;
	// m["rahul"] = 24;
	// m["yash"] = 23;
	// m["jo"] = 22;

	// m.insert(make_pair("prasoon",99));
	// m.insert({"pranjal",100});
	// for(auto &val : m)
	// 	cout<<val.first<<" "<<val.second<<endl;

	// auto t = m.find("jo");

	//  cout<<t->first<<" "<<t->second<<endl;

	//  m.erase(t);
	//  m.clear();

	//  	for(auto &val : m)
	// 	cout<<val.first<<" "<<val.second<<endl;


    // int N,q;
    // cin>>N;

// UNORDERED_MAP  

    // // map<string,int> m;
    // unordered_map<string,int> m;

    //  for(int i=0; i<N; i++)
    //  {
    //  	string str;
    // 	cin>>str;
    //  	m[str]++;
    //  }
    //  cin>>q;
    //  while(q--)
    //  {
    //  	string s;
    //  	cin>>s;
    //  	cout<<m[s]<<endl;
    //  }
     // for(auto &val : m)
     // 	cout<<val.first<<" "<<val.second<<endl;

// MULTIMAP

    // int N,q;
    // cin>>N;
    
    // multimap<string,int> m;

    //  for(int i=0; i<N; i++)
    //  {
    //  	string str;
    // 	cin>>str;
    //  	m.insert({str,0});
    //  }

    //  auto it = m.find("abc");
    //  if(it!=m.end())
    //  	m.erase("abc");

    // for(auto &val : m)
    // 	cout<<val.first<<" "<<val.second<<endl;

		// set<int> s;
		// int N; 
		// cin>>N;
		// for(int i=0; i<N; i++)
		// {
		// 	int x;
		// 	cin>>x;
		// 	s.insert(x);
		// }

		// printS(s);

// UNORDERED_SET
		// unordered_set<int> us;
		// int N; 
		// cin>>N;
		// for(int i=0; i<N; i++)
		// {
		// 	int x;
		// 	cin>>x;
		// 	us.insert(x);
		// }
		// // us.insert(2);
		// // us.insert(3);
		// // us.insert(21);
		// // us.insert(2);
		// // us.insert(80);
		// printS(us);

// MULTISET
		// multiset<int> us;
		// int N; 
		// cin>>N;
		// for(int i=0; i<N; i++)
		// {
		// 	int x;
		// 	cin>>x;
		// 	us.insert(x);
		// }
		// // us.insert(2);
		// // us.insert(3);
		// // us.insert(21);
		// // us.insert(2);
		// // us.insert(80);
		// printS(us);


// THE MONK AND CLASS MARKS


// 	map<int,multiset<string>> result;
// 	int N;
// 	cin>>N;

// 	for(int i=0; i<N; i++)
// 	{
// 		string name;
// 		cin>>name;
// 		int marks;
// 		cin>>marks;
// 		result[marks].insert(name);
// 	}
// auto it = --result.end();
// while(true) // for(auto it = --result.end(); it!=result.begin(); it--)
//   	{
// 		auto &m = (*it).first;
// 		auto &n = (*it).second;
// 		for(auto &nam : n)
// 		{
// 			cout<<nam<<" "<<m<<endl;
// 		}
// 		if(it== result.begin()) break;
// 		it--;
// 	}
	// while(it != result.begin());

	// map<int,multiset<string>> result;
	// int N;
	// cin>>N;

	// for(int i=0; i<N; i++)
	// {
	// 	string name;
	// 	cin>>name;
	// 	int marks;
	// 	cin>>marks;
	// 	result[1*-marks].insert(name);
	// }

	// for(auto &it : result){
	// 	auto &m = it.first;
	// 	auto &n = it.second;
	// 	for(auto &nam : n)
	// 		cout<<nam<<" "<<-1*m<<endl;
	// }

// STACK & QUEUE

// 	stack<int> s;
// 	s.push(26);
// 	s.push(25);
// 	s.push(23);
// 	s.push(27);
// 	s.push(22);
// 	s.push(22);
// 	while(!s.empty())
// 	  {
// 	  	cout<<s.top()<<endl;
// 	  	s.pop();
// 	  }

// queue<string> q;
// q.push("rahul");
// q.push("rahu");
// q.push("rah");
// q.push("ra");
// q.push("r");
//  while(!q.empty())
//  {
//  	cout<<q.front()<<endl;
//  	q.pop();
//  }


// BALANCED PARENTHISES

	// int t;
	// cin>>t;
	// while(t--)
	// {
	// 	string s;
	// 	cin>>s;
	// 	cout<<isBalanced(s)<<endl;
	// }

   // int N;
   // cin>>N;
   // vector<pair<int ,int>> v(N);

   // for(int i=0; i<N; i++)
   // {
   // 	int x,y;
   // 	cin>>v[i].first>>v[i].second;
   // }


// NEXT GREATER ELEMENT


   // vector<int> nge = Nge(v);

   // for(int i=0; i<N; i++)
   // {
   // 	cout<<v[i]<<" "<<((nge[i]<0)?-1:v[nge[i]])<<endl; 
   // }

   // for(int i=0; i<N; i++)
   // {
   // 	for(int j = i+1; j<N; j++)
   // 	{
   // 		if(should_swap(v[i],v[j]))
   // 		{
   // 			swap(v[i],v[j]);
   // 		}
   // 	}
   // }

// COMPARATOR FUNCTION
   // sort(v.begin(),v.end(),cmp);

   // for(auto val : v)
   // {
   // 	cout<<val.first<<" "<<val.second<<endl;
   // }


	// LAMBDA FUNCTION

	// cout<<[](int x,int y){return x+y;}(7,9);
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	// int *ptr = upper_bound(arr, arr+n,7);
	// int *ptr1 = lower_bound(arr,arr+n,5);
	//  cout<<*ptr1<<endl;
	//  cout<<*ptr<<endl;

// ALGORITHM

// int min = *min_element(arr,arr+n);
// int max = *max_element(arr,arr+n);
// cout<<min<<" "<<max<<endl;

// int  sum = accumulate(arr,arr+n,0);
// cout<<sum<<endl;

// int cot = count(arr,arr+n,5);
// cout<<cot<<endl;

// auto el = find(arr,arr+n,26);
// if(el != arr+n)
// 	cout<<*el<<endl;
// else
//  cout<<"Not found"<<endl;

// reverse(arr,arr+n);
// for(int i=0; i<n; i++)
// 	 cout<<arr[i]<<" ";

	// auto sum = [](int x,int  y){return x+y;};
	// cout<< sum(5,5);

	cout<<all_of(arr,arr+n,[](int x){return x>0;})<<endl;
	cout<<any_of(arr,arr+n,[](int x){return x>0;})<<endl;
	cout<<none_of(arr,arr+n,[](int x){return x>0;})<<endl;
	
}
