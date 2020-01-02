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
		4)count and find
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