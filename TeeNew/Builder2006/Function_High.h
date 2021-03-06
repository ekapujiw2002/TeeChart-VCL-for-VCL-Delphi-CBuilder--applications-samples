//---------------------------------------------------------------------------

#ifndef Function_HighH
#define Function_HighH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "Base.h"
#include <Chart.hpp>
#include <ExtCtrls.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Series.hpp>
#include <TeeFunci.hpp>
//---------------------------------------------------------------------------
class THighForm : public TBaseForm
{
__published:	// IDE-managed Components
        TBarSeries *Series1;
        TLineSeries *Series2;
        TCheckBox *CheckBox1;
        THighTeeFunction *TeeFunction1;
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall THighForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THighForm *HighForm;
//---------------------------------------------------------------------------
#endif
