// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "agentctlcommandswindow.h"


/////////////////////////////////////////////////////////////////////////////
// CAgentCtlCommandsWindow properties

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlCommandsWindow operations

BOOL CAgentCtlCommandsWindow::GetVisible()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CAgentCtlCommandsWindow::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

short CAgentCtlCommandsWindow::GetLeft()
{
	short result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short CAgentCtlCommandsWindow::GetTop()
{
	short result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short CAgentCtlCommandsWindow::GetHeight()
{
	short result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

short CAgentCtlCommandsWindow::GetWidth()
{
	short result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}
