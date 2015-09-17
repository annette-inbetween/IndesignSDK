#include "VCPlugInHeaders.h"
#include "MP1ID.h"
#include "MyResponderImpl.h"
#include "CAlert.h"
#include "isignalmgr.h"
#include "DocumentID.h"  


CREATE_PMINTERFACE(MyResponderImpl, kMyResponderImpl)

MyResponderImpl::MyResponderImpl(IPMUnknown *boss) : CResponder(boss)
{
}


MyResponderImpl::~MyResponderImpl()
{

}


void MyResponderImpl::Respond(ISignalMgr* signalMgr)
{
	ServiceID serviceTrigger = signalMgr->GetServiceID();
	switch (serviceTrigger.Get())
	{

		case kAfterNewDocSignalResponderService://96
		{
			CAlert::InformationAlert("kAfterNewDocSignalResponderService");
			break;
		}
		case kAfterOpenDocSignalResponderService://99
		{
			CAlert::InformationAlert("kAfterOpenDocSignalResponderService");
			break;
		}
		case kBeforeCloseDocSignalResponderService:
		{
			CAlert::InformationAlert("kBeforeCloseDocSignalResponderService");
			break;
		}
		case kBeforeSaveDocSignalResponderService://82
		{
			CAlert::InformationAlert("kBeforeSaveDocSignalResponderService");
		}
		default:
			break;
	}
}


