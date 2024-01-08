//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char currentPlayerSymbol='x';
int xwins=0;
int ywins=0;
bool TForm1::CheckIsWinner(){
if(!Button1->Caption.IsEmpty()&& Button1->Caption==Button2->Caption && Button1->Caption==Button3->Caption)
{
return true;}
if(!Button4->Caption.IsEmpty() && Button4->Caption==Button5->Caption && Button4->Caption==Button6->Caption)
{
return true;}
if(!Button7->Caption.IsEmpty() && Button7->Caption==Button8->Caption && Button7->Caption==Button9->Caption)
{

return true;}

if(!Button1->Caption.IsEmpty() && Button1->Caption==Button4->Caption && Button1->Caption==Button7->Caption)
{
return true;}
if(!Button2->Caption.IsEmpty() && Button2->Caption==Button5->Caption && Button2->Caption==Button8->Caption)
{

return true;}
if(!Button3->Caption.IsEmpty() && Button3->Caption==Button6->Caption && Button3->Caption==Button9->Caption)
{
return true;}

if(!Button1->Caption.IsEmpty() && Button1->Caption==Button5->Caption && Button1->Caption==Button9->Caption)
{
return true;}
if(!Button3->Caption.IsEmpty() && Button3->Caption==Button5->Caption && Button3->Caption==Button7->Caption)
{
return true;}

return false;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
currentPlayerSymbolLabel->Caption=currentPlayerSymbol;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonClick(TObject *Sender)
{
	 TButton *clickedButton=dynamic_cast<TButton*>(Sender);
	 clickedButton->Caption=currentPlayerSymbol;
	if (CheckIsWinner()){
	winnerLabel->Caption="YOU WON!"  ;
	Button1->Enabled=false;
Button2->Enabled=false;
Button3->Enabled=false;
Button4->Enabled=false;
Button5->Enabled=false;
Button6->Enabled=false;
Button7->Enabled=false;
Button8->Enabled=false;
Button9->Enabled=false;
if(currentPlayerSymbol=='x'){
xwins=xwins+1;
xwins->Caption=to_string(xwins);
}
if(currentPlayerSymbol=='o'){
owins=owins+1;
owins->Caption=to_string(owins);
}
	return;}

	 if( currentPlayerSymbol=='x')
		currentPlayerSymbol='o';
	else
		currentPlayerSymbol='x';
 currentPlayerSymbolLabel->Caption=currentPlayerSymbol;


}
//---------------------------------------------------------------------------
