#include "VCPlugInHeaders.h"
#include "MyServiceProviderImpl.h"
#include "MP1ID.h"
#include "DocumentID.h"  
#include "IK2ServiceProvider.h"

CREATE_PMINTERFACE(MyServiceProviderImpl, kMyServiceProviderImpl)

MyServiceProviderImpl::MyServiceProviderImpl(IPMUnknown* boss) : CServiceProvider(boss)
{
	fSupportedServiceIDs.clear();
	addResponder();
}

MyServiceProviderImpl::~MyServiceProviderImpl()
{
}

void MyServiceProviderImpl::addResponder()
{
	fSupportedServiceIDs.clear();
	fSupportedServiceIDs.push_back(kAfterNewDocSignalResponderService);
	fSupportedServiceIDs.push_back(kAfterOpenDocSignalResponderService);
	fSupportedServiceIDs.push_back(kBeforeCloseDocSignalResponderService);
	fSupportedServiceIDs.push_back(kBeforeSaveDocSignalResponderService);
}

void MyServiceProviderImpl::GetName(PMString* pName)
{
	pName->SetKey("My Doc Watch Responder Service");
}

ServiceID MyServiceProviderImpl :: GetServiceID(){
	return fSupportedServiceIDs[0];
}

void MyServiceProviderImpl::GetServiceIDs(K2Vector<ServiceID>& serviceIDs){
	for (int32 i = 0; i < fSupportedServiceIDs.size(); i++){
		serviceIDs.push_back(fSupportedServiceIDs[i]);
	}
}

bool16 MyServiceProviderImpl::IsDefaultServiceProvider(){
	return kFalse;
}


IK2ServiceProvider::InstancePerX MyServiceProviderImpl::GetInstantiationPolicy(){
	return IK2ServiceProvider::kInstancePerSession;
}

bool16 MyServiceProviderImpl::HasMultipleIDs() const
{
	return kTrue;
}