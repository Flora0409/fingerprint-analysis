#if !defined(AFX_AGENTCTLAUDIOOBJECTEX1_H__2D3D567A_0DE7_44CA_AA7C_C7E962401C8B__INCLUDED_)
#define AFX_AGENTCTLAUDIOOBJECTEX1_H__2D3D567A_0DE7_44CA_AA7C_C7E962401C8B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CAgentCtlAudioObjectEx wrapper class

class CAgentCtlAudioObjectEx : public COleDispatchDriver
{
public:
	CAgentCtlAudioObjectEx() {}		// Calls COleDispatchDriver default constructor
	CAgentCtlAudioObjectEx(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAgentCtlAudioObjectEx(const CAgentCtlAudioObjectEx& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetEnabled();
	BOOL GetSoundEffects();
	short GetStatus();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AGENTCTLAUDIOOBJECTEX1_H__2D3D567A_0DE7_44CA_AA7C_C7E962401C8B__INCLUDED_)
