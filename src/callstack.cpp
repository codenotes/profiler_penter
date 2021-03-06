//-----------------------------------------------------------------------------

#include "includes.h"
#include "callstack.h"
//-----------------------------------------------------------------------------

CallStack::CallStack()
:	mEntryStack ()
{
}
//-----------------------------------------------------------------------------

void CallStack::push( Function *func) 
{
	mEntryStack.push( func);
}
//-----------------------------------------------------------------------------

bool CallStack::hasChild() 
{
	return ( mEntryStack.empty() ? false : true );
}
//-----------------------------------------------------------------------------

Function* CallStack::top() 
{ 
	return  hasChild() ? mEntryStack.top() : NULL;
}
//-----------------------------------------------------------------------------

void CallStack::pop() 
{ 
	if( hasChild()) 
		mEntryStack.pop();
}
//-----------------------------------------------------------------------------