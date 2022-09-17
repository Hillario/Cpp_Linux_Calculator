/***************************************************************
 * Name:      CalculatorMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    elitecompiler (hillches@gmail.com)
 * Created:   2022-08-21
 * Copyright: elitecompiler (sarolabs.com)
 * License:   elitecompiler
 **************************************************************/

#include "CalculatorMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(CalculatorFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(CalculatorFrame)
const long CalculatorFrame::ID_BUTTON1 = wxNewId();
const long CalculatorFrame::ID_BUTTON2 = wxNewId();
const long CalculatorFrame::ID_BUTTON3 = wxNewId();
const long CalculatorFrame::ID_BUTTON4 = wxNewId();
const long CalculatorFrame::ID_BUTTON5 = wxNewId();
const long CalculatorFrame::ID_BUTTON6 = wxNewId();
const long CalculatorFrame::ID_BUTTON7 = wxNewId();
const long CalculatorFrame::ID_BUTTON8 = wxNewId();
const long CalculatorFrame::ID_BUTTON9 = wxNewId();
const long CalculatorFrame::ID_BUTTON10 = wxNewId();
const long CalculatorFrame::ID_BUTTON11 = wxNewId();
const long CalculatorFrame::ID_BUTTON12 = wxNewId();
const long CalculatorFrame::ID_BUTTON13 = wxNewId();
const long CalculatorFrame::ID_BUTTON15 = wxNewId();
const long CalculatorFrame::ID_BUTTON14 = wxNewId();
const long CalculatorFrame::ID_BUTTON16 = wxNewId();
const long CalculatorFrame::ID_TEXTCTRL1 = wxNewId();
const long CalculatorFrame::ID_PANEL1 = wxNewId();
const long CalculatorFrame::idMenuQuit = wxNewId();
const long CalculatorFrame::idMenuAbout = wxNewId();
const long CalculatorFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CalculatorFrame,wxFrame)
    //(*EventTable(CalculatorFrame)
    //*)
END_EVENT_TABLE()

CalculatorFrame::CalculatorFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(CalculatorFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, _("Calculator"), wxDefaultPosition, wxDefaultSize, wxCLOSE_BOX|wxMINIMIZE_BOX, _T("wxID_ANY"));
    SetClientSize(wxSize(413,355));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(184,112), wxSize(413,352), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("1"), wxPoint(16,88), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("2"), wxPoint(96,88), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("3"), wxPoint(176,88), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("4"), wxPoint(256,88), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("+"), wxPoint(336,88), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("5"), wxPoint(16,152), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    wxFont Button6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button6->SetFont(Button6Font);
    Button7 = new wxButton(Panel1, ID_BUTTON7, _("6"), wxPoint(96,152), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    wxFont Button7Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button7->SetFont(Button7Font);
    Button8 = new wxButton(Panel1, ID_BUTTON8, _("7"), wxPoint(176,152), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    wxFont Button8Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button8->SetFont(Button8Font);
    Button9 = new wxButton(Panel1, ID_BUTTON9, _("8"), wxPoint(256,152), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    wxFont Button9Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button9->SetFont(Button9Font);
    Button10 = new wxButton(Panel1, ID_BUTTON10, _("-"), wxPoint(336,152), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    wxFont Button10Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button10->SetFont(Button10Font);
    Button11 = new wxButton(Panel1, ID_BUTTON11, _("9"), wxPoint(16,216), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    wxFont Button11Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button11->SetFont(Button11Font);
    Button12 = new wxButton(Panel1, ID_BUTTON12, _("0"), wxPoint(96,216), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    wxFont Button12Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button12->SetFont(Button12Font);
    Button13 = new wxButton(Panel1, ID_BUTTON13, _("="), wxPoint(176,216), wxSize(144,56), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    wxFont Button13Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button13->SetFont(Button13Font);
    Button15 = new wxButton(Panel1, ID_BUTTON15, _("x"), wxPoint(336,216), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    wxFont Button15Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button15->SetFont(Button15Font);
    Button14 = new wxButton(Panel1, ID_BUTTON14, _("Clear"), wxPoint(16,280), wxSize(304,56), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    wxFont Button14Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button14->SetFont(Button14Font);
    Button16 = new wxButton(Panel1, ID_BUTTON16, _("/"), wxPoint(336,280), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    wxFont Button16Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    Button16->SetFont(Button16Font);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("0"), wxPoint(16,16), wxSize(384,48), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    wxFont TextCtrl1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Ubuntu"),wxFONTENCODING_DEFAULT);
    TextCtrl1->SetFont(TextCtrl1Font);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton2Click1);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton3Click1);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton7Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton8Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton9Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton10Click);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton11Click);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton12Click);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton13Click);
    Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton15Click);
    Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton14Click);
    Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalculatorFrame::OnButton16Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CalculatorFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CalculatorFrame::OnAbout);
    //*)
}

CalculatorFrame::~CalculatorFrame()
{
    //(*Destroy(CalculatorFrame)
    //*)
}

void CalculatorFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void CalculatorFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox("Simple calculator program using WxWidgets v3.2.0", _("Calculator"));
}

wxString Fast, Last, Res;
int Operand1, Operand2, Operators;
float Answer;

void CalculatorFrame::OnButton9Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button9->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button9->GetLabel());
        }
}

void CalculatorFrame::OnButton1Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button1->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button1->GetLabel());
        }
}

void CalculatorFrame::OnButton2Click1(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button2->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button2->GetLabel());
        }
}

void CalculatorFrame::OnButton3Click1(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button3->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button3->GetLabel());
        }
}

void CalculatorFrame::OnButton4Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button4->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button4->GetLabel());
        }
}

void CalculatorFrame::OnButton6Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button6->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button6->GetLabel());
        }
}

void CalculatorFrame::OnButton7Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button7->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button7->GetLabel());
        }
}

void CalculatorFrame::OnButton8Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button8->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button8->GetLabel());
        }
}

void CalculatorFrame::OnButton11Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button11->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button11->GetLabel());
        }
}

void CalculatorFrame::OnButton12Click(wxCommandEvent& event)
{
    if(TextCtrl1->GetValue()=="0")
        {
            TextCtrl1->SetValue(Button12->GetLabel());
        }
    else
        {
            TextCtrl1->AppendText(Button12->GetLabel());
        }
}

void CalculatorFrame::OnButton14Click(wxCommandEvent& event)
{
    TextCtrl1->SetValue("0");
}

void CalculatorFrame::OnButton5Click(wxCommandEvent& event)
{
    Fast=TextCtrl1->GetValue();
    Operand1=wxAtoi(Fast);
    Operators=1;//+
    TextCtrl1->SetValue("0");
}

void CalculatorFrame::OnButton10Click(wxCommandEvent& event)
{
    Fast=TextCtrl1->GetValue();
    Operand1=wxAtoi(Fast);
    Operators=2;//-
    TextCtrl1->SetValue("0");
}

void CalculatorFrame::OnButton15Click(wxCommandEvent& event)
{
    Fast=TextCtrl1->GetValue();
    Operand1=wxAtoi(Fast);
    Operators=3;//*
    TextCtrl1->SetValue("0");
}

void CalculatorFrame::OnButton16Click(wxCommandEvent& event)
{
    Fast=TextCtrl1->GetValue();
    Operand1=wxAtoi(Fast);
    Operators=4;//
    TextCtrl1->SetValue("0");
}

void CalculatorFrame::OnButton13Click(wxCommandEvent& event)
{
    Last=TextCtrl1->GetValue();
    Operand2=wxAtoi(Last);

    switch (Operators)
    {
    case 1:
        Answer=float(Operand1) + float(Operand2);
        Res=wxString::Format(wxT("%g"),Answer);
        TextCtrl1->SetValue(Res);
        break;
    case 2:
        Answer=float(Operand1) - float(Operand2);
        Res=wxString::Format(wxT("%g"),Answer);
        TextCtrl1->SetValue(Res);
        break;
    case 3:
        Answer=float(Operand1) * float(Operand2);
        Res=wxString::Format(wxT("%g"),Answer);
        TextCtrl1->SetValue(Res);
        break;
    case 4:
        Answer=float(Operand1) / float(Operand2);
        Res=wxString::Format(wxT("%g"),Answer);
        TextCtrl1->SetValue(Res);
        break;
    }
}
