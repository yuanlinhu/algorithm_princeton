
#include "QuickFind.h"
#include "Util.h"

QuickFind::QuickFind()
{
	remakeArray();
}

void QuickFind::unionData(int p, int q)
{
	int pid = mArray[p];
	int qid = mArray[q];

	for (int i = 0; i < ArraySize; ++i)
	{
		if (mArray[i] == pid)
		{
			mArray[i] = qid;
		}
	}
}

bool QuickFind::isConnected(int p, int q)
{
	if (mArray[p] == mArray[q])
	{
		return true;
	}
	return false;
}

void QuickFind::remakeArray()
{
	Util::remakeArray(mArray, ArraySize);
}

void QuickFind::test()
{
	
	unionData(5, 0);
	unionData(6, 5);

	unionData(2, 1);
	unionData(7, 2);
	
	
	unionData(9, 4);
	unionData(4, 3);
	unionData(3, 8);

	printArray();
}

void QuickFind::printArray()
{
	Util::printArray(mArray, ArraySize);
}



/// <summary>
/// 
/// </summary>
QuickUnion::QuickUnion()
{
	remakeArray();
}

bool QuickUnion::isConnected(int p, int q)
{
	return root(p) == root(q);
}

void QuickUnion::unionData(int p, int q)
{
	int i = root(p);
	int j = root(q);
	mArray[i] = j;
}

void QuickUnion::remakeArray()
{
	Util::remakeArray(mArray, ArraySize);
}

void QuickUnion::test()
{

}

void QuickUnion::printArray()
{
	Util::printArray(mArray, ArraySize);
}

int QuickUnion::root(int i)
{
	while (i != mArray[i])
	{
		i = mArray[i];
	}

	return i;
}
