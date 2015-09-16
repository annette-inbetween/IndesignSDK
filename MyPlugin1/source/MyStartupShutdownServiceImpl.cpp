//includes
#include "VCPlugInHeaders.h"

//Project Includes
#include "MyStartupShutdownServiceImpl.h"

#include "IObserver.h"
#include "UIDRef.h"
#include "IActiveContext.h"
#include "string.h"
#include "IObserver.h"
#include "CAlert.h"
#include "MP1ID.h"
#include "IHierarchy.h"
#include "DocumentID.h"


// Bind this C++ implementation onto its implementation ID so it's callable by InDesign.
CREATE_PMINTERFACE(MyStartupShutdownServiceImpl, kMyStartupShutdownServiceImpl)

MyStartupShutdownServiceImpl::MyStartupShutdownServiceImpl(IPMUnknown *boss):CPMUnknown<IStartupShutdownService>(boss)
{
}

MyStartupShutdownServiceImpl::~MyStartupShutdownServiceImpl()
{
}

void MyStartupShutdownServiceImpl::Startup()
{
	CAlert::InformationAlert("In Design Started");
	
}


void MyStartupShutdownServiceImpl::Shutdown()
{
	
}



