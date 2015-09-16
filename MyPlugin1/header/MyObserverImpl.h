#include "CObserver.h"

class MyObserverImpl : public CObserver
{
public:
	MyObserverImpl(IPMUnknown* boss);
	virtual ~MyObserverImpl();

	void AutoAttach();

	void AutoDetach();

	virtual void Update(const ClassID& theChange, ISubject* theSubject, const PMIID& protocol, void* changedBy);

};