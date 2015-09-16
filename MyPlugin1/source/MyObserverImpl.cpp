#include "VCPlugInHeaders.h"
#include "MyObserverImpl.h"
#include "CAlert.h"
#include "IObserver.h"
#include "MP1ID.h"
#include "ISubject.h"
#include "IHierarchy.h"


CREATE_PMINTERFACE(MyObserverImpl, kMyObserverImpl)

MyObserverImpl::MyObserverImpl(IPMUnknown* boss):CObserver(boss)
{
}

MyObserverImpl::~MyObserverImpl()
{
}

void MyObserverImpl::AutoAttach()
{
	do
	{
		InterfacePtr<ISubject> subject(this, IID_ISUBJECT);
		if (subject != nil)
		{
			if (subject->IsAttached(ISubject::kRegularAttachment, this, IID_IHIERARCHY_DOCUMENT, IID_IMYOBSERVER) == kFalse)
			{
				subject->AttachObserver(ISubject::kRegularAttachment, this, IID_IHIERARCHY_DOCUMENT, IID_IMYOBSERVER);
				CAlert::InformationAlert("AutoAttach of Observer");
			}
		}
	} while (false);
	
}

void MyObserverImpl::AutoDetach()
{

	do
	{
		InterfacePtr<ISubject> subject(this, UseDefaultIID());

		if (subject != nil)
		{
			if (subject->IsAttached(ISubject::kRegularAttachment, this, IID_IHIERARCHY_DOCUMENT, IID_IMYOBSERVER) == kTrue)
			{
				subject->DetachObserver(ISubject::kRegularAttachment, this, IID_IHIERARCHY_DOCUMENT, IID_IMYOBSERVER);
			}
		}

	} while (false);
}

void MyObserverImpl::Update(const ClassID& theChange,
	ISubject* theSubject,
	const PMIID& protocol,
	void* changedBy)

{
	CAlert::InformationAlert("Update of Observer");
}