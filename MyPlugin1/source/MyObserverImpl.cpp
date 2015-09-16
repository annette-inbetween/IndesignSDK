#include "VCPlugInHeaders.h"
#include "MyObserverImpl.h"
#include "CAlert.h"

CREATE_PMINTERFACE(MyObserverImpl, kMyObserverImpl)

MyObserverImpl::MyObserverImpl(IPMUnknown* boss):CObserver(boss)
{
}

MyObserverImpl:~MyObserverImpl()
{
}

void MyObserverImpl::AutoAttach()
{
	CAlert::InformationAlert("AutoAttach of Observer");
}

void MyObserverImpl::AutoDetach()
{
}

void CSDTPObserverImpl::Update(const ClassID& theChange,
	ISubject* theSubject,
	const PMIID& protocol,
	void* changedBy)

{
	CAlert::InformationAlert("Update of Observer");
}