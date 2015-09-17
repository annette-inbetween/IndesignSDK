#include "CServiceProvider.h"
#include "MP1ID.h"

class MyServiceProviderImpl:public CServiceProvider
{
public:
	MyServiceProviderImpl(IPMUnknown*);
	~MyServiceProviderImpl();

	void GetName(PMString * pName);

	virtual ServiceID GetServiceID();
	
	void GetServiceIDs(K2Vector<ServiceID>& serviceIDs);

	virtual bool16 IsDefaultServiceProvider();

	virtual InstancePerX GetInstantiationPolicy();

	virtual bool16 HasMultipleIDs() const;
	
private:

	K2Vector<ServiceID> fSupportedServiceIDs;

	/*addResponder() add the services for which Notification is required
	*/
	void addResponder();
};