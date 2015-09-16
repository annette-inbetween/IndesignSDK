#ifndef _CSDTPSTARTUPSHUTDOWNSERVICE_H_
#define _CSDTPSTARTUPSHUTDOWNSERVICE_H_

//includes
#include "VCPlugInHeaders.h"
#include "IStartupShutdownService.h"
#include "CPMUnknown.h"
#include "MP1ID.h"
//#include "CSDTPNamespace.h"
#include "ICSXSPlugPlugEventHandler.h"
//#include "CAlert.h"
#include "adobe/unicode.hpp" // for adobe::to_utf8
#include "FileTypeRegistry.h"


class MyStartupShutdownServiceImpl : public CPMUnknown<IStartupShutdownService>
{

public:
	MyStartupShutdownServiceImpl(IPMUnknown* boss);
	virtual ~MyStartupShutdownServiceImpl();

	/*@Interface
	Startup() Called when app(Indesign) is starting up
	*/
	virtual void Startup();

	/*@Interface
	Shutdown() Called when app(Indesign) is shutting up
	*/
	virtual void Shutdown();

	/*messageEventDispatcher() dispatches message to HTML5 handler registered extension id
	@param msgType : the type of message eg: "Selection.Frame", "Frame.new" etc
	@param msgData : the data to be sent as part of selction
	*/
	//static bool messageEventDispatcher(const PMString type , const PMString data);

	//NOTE: Below code was written to make sure that obser is attached only when message is received from HTML Extension
    //static void messageEventListenerAttach(const ICSXSPlugPlugEventHandler::CSXSEvent* const csxsEvent, void* const context);
    //static void messageEventListenerDetach(const ICSXSPlugPlugEventHandler::CSXSEvent* const csxsEvent, void* const context);
};


#endif //_CSDTPSTARTUPSHUTDOWNSERVICE_H_