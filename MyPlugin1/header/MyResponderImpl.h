#include "CResponder.h"
#include "ICSXSPlugPlugEventHandler.h"


class MyResponderImpl : public CResponder
{
public:
	MyResponderImpl(IPMUnknown *boss);
	~MyResponderImpl();

	virtual void Respond(ISignalMgr* signalMgr);


};