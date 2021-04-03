

#ifndef _QUICK_FIND_H_
#define _QUICK_FIND_H_

#define ArraySize 10


/// <summary>
/// 
/// </summary>
class QuickFind
{
public:
	QuickFind();
	void unionData(int p, int q);
	bool isConnected(int p, int q);
	void remakeArray();

	void test();
	void printArray();

private:
	int mArray[ArraySize];
};




/// <summary>
/// 
/// </summary>

class QuickUnion
{
public:
	QuickUnion();

	bool isConnected(int p, int q);
	void unionData(int p, int q);
	void remakeArray();

	void test();
	void printArray();

private:
	int root(int i);

private:
	int mArray[ArraySize];
};









#endif