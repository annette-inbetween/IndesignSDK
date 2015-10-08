//========================================================================================
//  
//  $File: $
//  
//  Owner: Annette
//  
//  $Author: $
//  
//  $DateTime: $
//  
//  $Revision: $
//  
//  $Change: $
//  
//  Copyright 1997-2012 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================


#ifndef __MP1ID_h__
#define __MP1ID_h__

#include "SDKDef.h"

// Company:
#define kMP1CompanyKey	kSDKDefPlugInCompanyKey		// Company name used internally for menu paths and the like. Must be globally unique, only A-Z, 0-9, space and "_".
#define kMP1CompanyValue	kSDKDefPlugInCompanyValue	// Company name displayed externally.

// Plug-in:
#define kMP1PluginName	"MyPluing1"			// Name of this plug-in.
#define kMP1PrefixNumber	0xe9400 		// Unique prefix number for this plug-in(*Must* be obtained from Adobe Developer Support).
#define kMP1Version		kSDKDefPluginVersionString						// Version of this plug-in (for the About Box).
#define kMP1Author		"Annette"					// Author of this plug-in (for the About Box).

// Plug-in Prefix: (please change kMP1PrefixNumber above to modify the prefix.)
#define kMP1Prefix		RezLong(kMP1PrefixNumber)				// The unique numeric prefix for all object model IDs for this plug-in.
#define kMP1StringPrefix	SDK_DEF_STRINGIZE(kMP1PrefixNumber)	// The string equivalent of the unique prefix number for  this plug-in.

// Missing plug-in: (see ExtraPluginInfo resource)
#define kMP1MissingPluginURLValue		kSDKDefPartnersStandardValue_enUS // URL displayed in Missing Plug-in dialog
#define kMP1MissingPluginAlertValue	kSDKDefMissingPluginAlertValue // Message displayed in Missing Plug-in dialog - provide a string that instructs user how to solve their missing plug-in problem

// PluginID:
DECLARE_PMID(kPlugInIDSpace, kMP1PluginID, kMP1Prefix + 0)

// ClassIDs:
DECLARE_PMID(kClassIDSpace, kMyStartupShutdownBoss, kMP1Prefix + 0)
DECLARE_PMID(kClassIDSpace, kMyResponderServiceBoss, kMP1Prefix + 1)
DECLARE_PMID(kClassIDSpace, kMyTextCommandPostProcessServiceBoss, kMP1Prefix + 2)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 6)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 7)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 8)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 9)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 10)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 11)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 12)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 13)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 14)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 15)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 16)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 17)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 18)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 19)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 20)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 21)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 22)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 23)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 24)
//DECLARE_PMID(kClassIDSpace, kMP1Boss, kMP1Prefix + 25)


// InterfaceIDs:
DECLARE_PMID(kInterfaceIDSpace, IID_IMYOBSERVER, kMP1Prefix + 0)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 1)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 2)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 3)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 4)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 5)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 6)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 7)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 8)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 9)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 10)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 11)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 12)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 13)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 14)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 15)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 16)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 17)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 18)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 19)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 20)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 21)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 22)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 23)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 24)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMP1INTERFACE, kMP1Prefix + 25)


// ImplementationIDs:
DECLARE_PMID(kImplementationIDSpace, kMyObserverImpl, kMP1Prefix + 0)
DECLARE_PMID(kImplementationIDSpace, kMyStartupShutdownServiceImpl, kMP1Prefix + 1)
DECLARE_PMID(kImplementationIDSpace, kMyServiceProviderImpl, kMP1Prefix + 2)
DECLARE_PMID(kImplementationIDSpace, kMyResponderImpl, kMP1Prefix + 3)
DECLARE_PMID(kImplementationIDSpace, kMyTextCommandPostProcessImpl, kMP1Prefix + 4)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 4)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 5)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 6)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 7)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 8)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 9)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 10)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 11)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 12)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 13)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 14)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 15)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 16)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 17)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 18)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 19)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 20)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 21)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 22)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 23)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 24)
//DECLARE_PMID(kImplementationIDSpace, kMP1Impl, kMP1Prefix + 25)



// ActionIDs:
DECLARE_PMID(kActionIDSpace, kMP1AboutActionID, kMP1Prefix + 0)

//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 5)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 6)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 7)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 8)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 9)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 10)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 11)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 12)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 13)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 14)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 15)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 16)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 17)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 18)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 19)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 20)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 21)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 22)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 23)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 24)
//DECLARE_PMID(kActionIDSpace, kMP1ActionID, kMP1Prefix + 25)


// WidgetIDs:
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 2)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 3)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 4)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 5)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 6)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 7)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 8)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 9)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 10)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 11)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 12)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 13)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 14)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 15)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 16)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 17)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 18)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 19)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 20)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 21)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 22)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 23)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 24)
//DECLARE_PMID(kWidgetIDSpace, kMP1WidgetID, kMP1Prefix + 25)


// "About Plug-ins" sub-menu:
#define kMP1AboutMenuKey			kMP1StringPrefix "kMP1AboutMenuKey"
#define kMP1AboutMenuPath		kSDKDefStandardAboutMenuPath kMP1CompanyKey

// "Plug-ins" sub-menu:
#define kMP1PluginsMenuKey 		kMP1StringPrefix "kMP1PluginsMenuKey"
#define kMP1PluginsMenuPath		kSDKDefPlugInsStandardMenuPath kMP1CompanyKey kSDKDefDelimitMenuPath kMP1PluginsMenuKey

// Menu item keys:

// Other StringKeys:
#define kMP1AboutBoxStringKey	kMP1StringPrefix "kMP1AboutBoxStringKey"
#define kMP1TargetMenuPath kMP1PluginsMenuPath

// Menu item positions:


// Initial data format version numbers
#define kMP1FirstMajorFormatNumber  RezLong(1)
#define kMP1FirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource 
#define kMP1CurrentMajorFormatNumber kMP1FirstMajorFormatNumber
#define kMP1CurrentMinorFormatNumber kMP1FirstMinorFormatNumber


#endif // __MP1ID_h__
