#include <iostream>
#include <map>

using namespace std;

int main()
{
	char str = "am uniqueddog";
	 difference between *str and str[] is : string literal with *str will be
	 const char* and str will be a pointer to a string constant in the data 
	 segment.

	map<char, bool> mymap;
	map<char, bool>::iterator it;
	int  i, j;
	char key;
	
	it = mymap.begin();
	for(i=0; i < strlen(str); i++)
	{
		if(mymap.count(str[i])>0)
			cout<<"not unique"<<endl;
		else
			mymap.insert(pair<char, bool>(str[i], true));
	}

	for(it = mymap.begin(); it!=mymap.end(); it++)
		cout<<(*it).first<<" => "<<(*it).second<<endl;

	key = str[0];
	for(i = 1; i< strlen(str); i++)
	{		
		key = str[i];
		j = i-1;
		while(j > -1 && str[j] > key)
		{
			str[j+1] = str[j];
			j--;
		}

		str[j+1] = key;
	}

	cout<<"sorted string : "<<str<<endl;
	
	for(i=0; i< strlen(str); i++)
		if(str[i]==str[i+1])
			cout<<"not unique"<<endl;

	getchar();
	return 0;
}
