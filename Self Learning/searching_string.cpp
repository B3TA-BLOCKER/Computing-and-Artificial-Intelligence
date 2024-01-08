#include<iostream>
using namespace std;
int cmpr(string s1, string s2)
{
	int size1 = s1.length();
	int size2 = s2.length();
	
	if(size1 != size2)
	{
		return 0;
	}
	
	for(int i=0; i<size1; i++)
	{
		if(s1[i] != s2[i])
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	string positive[10] = {"happy", "good", "sweet", "love", "hope", "positivity", "truth", "calm", "beautiful", "patience"};
	string negative[10] = {"sad", "evil", "harsh", "hate", "hopeless", "negativity", "lie", "upset", "ugly", "impatient"};
	
	string sentence;
	cout<<"Enter tweet: ";
	getline(cin, sentence);
	
	int score = 0;
	string word;
	
	for(int i=0; i<sentence.length(); i++)
	{
		word = word + sentence[i];
		
		if(sentence[i+1] == ' ' || sentence[i+1] == 0)
		{
			cout<<word<<"  " <<endl;
			for(int j=0; j<10; j++)
			{
				if(cmpr(word, positive[j]))
				{
					score++;
				}
				
				if(cmpr(word, negative[j]))
				{
					score--;
				}
			}
			
			word = "";
			i++;
		}
	}

	cout<<"Score is: "<<score;
}