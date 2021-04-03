
#include "QuickFind.h"
#include "Util.h"

QuickFind::QuickFind()
{
	remakeArray();
}

void QuickFind::unionData(int p, int q)
{
	int key = mArray[p];
	for (int i = 0; i < ArraySize; ++i)
	{
		if (mArray[i] == key)
		{
			mArray[i] = q;
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
	for (int i = 0; i < ArraySize; ++i)
	{
		mArray[i] = i;
	}
}

void QuickFind::test()
{
	
	unionData(5, 0);
	unionData(6, 5);

	unionData(2, 1);
	unionData(7, 2);
	//unionData(3, 8);
	//unionData(3, 8);
	//unionData(3, 8);
	printArray();
}

void QuickFind::printArray()
{
	Util::printArray(mArray, ArraySize);
}

