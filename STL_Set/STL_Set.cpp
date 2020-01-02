#include <iostream>
#include <set>

using namespace std;

template <typename Container>
void PritContents(const Container&);

int main()
{
	/*
		1)set, multipleset;
		2)red-black tree;
		3)insert;
		4)count and find, find() will return an iterator
		5)erase
	    6)can not change and replace elements when using find
	*/

	set<int> si;
	multiset<int> msi;

	si.insert(3);
	si.insert(1);
	si.insert(0);
	si.insert(6);

	cout << "the elements in the set are: " << endl;
	set<int>::iterator sii;
	/*
	for (auto i : si)
	{
		cout << i << endl;
	}
	*/
	
	/*
	for(sii=si.begin(); sii != si.end(); sii++)
	{
		cout << *sii << endl;
	}
	*/
	
	sii = si.begin();
	/*
	while (sii != si.end())
	{
		cout << *sii << endl;
		sii++;
	}
	*/
	PritContents(si);

	msi.insert(si.begin(), si.end());
	msi.insert(1);
	msi.insert(1);
	cout << "the amout of '1' is: ";
	cout << msi.count(1) << endl;

	multiset<int>::iterator mii = msi.begin();

	/*
	while (mii != msi.end())
	{
		cout << *mii << endl;
		mii++;
	}
	*/

	PritContents(msi);

	set<int>::iterator i_found = si.find(1);
	if (i_found != si.end())
	{
		cout << "it was found: " <<*i_found << endl;
	}
	else
	{
		cout << "it was not found" << endl;
	}

	int NumberToDelete;
	cout << "input the number you want to delete: ";
	cin >> NumberToDelete;

	si.erase(NumberToDelete);
	msi.erase(NumberToDelete);

	PritContents(si);
	cout << endl << endl;
	PritContents(msi);

	si.clear();
	msi.clear();

	return 0;
}

template <typename Container>
void PritContents(const Container& c)
{
	/*
	Container::const_iterator mii;
	mii= c.begin();
	
	while (mii != c.end())
	{
		cout << *mii << endl;
		mii++;
	}
	*/

	
	for (auto i : c)
	{
		cout << i << endl;
	}
	
	
}