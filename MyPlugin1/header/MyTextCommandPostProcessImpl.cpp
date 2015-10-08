#include "VCPlugInHeaders.h"
#include "MP1ID.h"
#include "CAlert.h"
#include "MyTextCommandPostProcessImpl.h"
#include "VOSSavedData.h"
#include "PMString.h"
#include "BaseType.h"
#include "ITextModel.h"
#include "UIDRef.h"
#include "IScrapUtils.h"


CREATE_PMINTERFACE(MyTextCommandPostProcessImpl, kMyTextCommandPostProcessImpl)

MyTextCommandPostProcessImpl::MyTextCommandPostProcessImpl(IPMUnknown *boss) : CTextCommandPostProcess(boss)
{

}

MyTextCommandPostProcessImpl::~MyTextCommandPostProcessImpl()
{
}

void MyTextCommandPostProcessImpl::InsertPostProcess(ITextModel* model, TextIndex position, const WideString* data, const ILanguage *pLanguage)
{
	//CAlert::InformationAlert("Insert Post Process");
}

void MyTextCommandPostProcessImpl::PastePostProcess(ITextModel* model, TextIndex position, const PasteData *data, int32 subrange)
{
	/*PMString index = PMString();
	index.AppendNumber(position);
	CAlert::InformationAlert(index);*/
	/*PMString startAlert = PMString();
	TextIndex start = data->GetDataStart();
	startAlert.AppendNumber(start);
	CAlert::InformationAlert(startAlert);

	*/

	UIDRef uidRefModel= ::GetUIDRef(model);
	UIDRef uidRefPasteData = data->GetStoryRef();

	IDataBase *dbModel = uidRefModel.GetDataBase();
	IDataBase *dbPastedata = uidRefModel.GetDataBase();

	bool16 bModel = Utils<IScrapUtils>()->IsScrapDB(dbModel);
	bool16 bPasteData = Utils<IScrapUtils>()->IsScrapDB(dbPastedata);

	if (bModel){
		CAlert::InformationAlert("True: IsScrapDB ITextModel");
	}

	if (bPasteData){
		CAlert::InformationAlert("True: IsScrapDB PasteData");
	}
	
	
	/*UID uidModel = uModel.GetUID();
	UID uidPasteData = uPasteData.GetUID();
	int32 noModel= uidModel.Get();
	int32 noPasteData = uidPasteData.Get();

	PMString uidModelAlert = PMString();
	uidModelAlert.AppendNumber(noModel);
	CAlert::InformationAlert(uidModelAlert);

	PMString uidPasteDataAlert = PMString();
	uidPasteDataAlert.AppendNumber(noPasteData);
	CAlert::InformationAlert(uidPasteDataAlert);*/
	
	
}

