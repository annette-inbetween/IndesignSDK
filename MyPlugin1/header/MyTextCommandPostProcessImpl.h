#include "CTextCommandPostProcess.h"

class MyTextCommandPostProcessImpl : public CTextCommandPostProcess
{
public:
	MyTextCommandPostProcessImpl(IPMUnknown *boss);
	~MyTextCommandPostProcessImpl();

	virtual void InsertPostProcess(ITextModel* model, TextIndex position, const WideString* data, const ILanguage *pLanguage);
	virtual void PastePostProcess(ITextModel* model, TextIndex position, const PasteData *data, int32 subrange);
};