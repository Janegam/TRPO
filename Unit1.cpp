//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(60, 0, 110, 50);
	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(20, 50, 150, 150);
}
//---------------------------------------------------------------------------

