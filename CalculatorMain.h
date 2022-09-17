/***************************************************************
 * Name:      CalculatorMain.h
 * Purpose:   Defines Application Frame
 * Author:    elitecompiler (hillches@gmail.com)
 * Created:   2022-08-21
 * Copyright: elitecompiler (sarolabs.com)
 * License:
 **************************************************************/

#ifndef CALCULATORMAIN_H
#define CALCULATORMAIN_H

//(*Headers(CalculatorFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class CalculatorFrame: public wxFrame
{
    public:

        CalculatorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CalculatorFrame();

    private:

        //(*Handlers(CalculatorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton9Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click1(wxCommandEvent& event);
        void OnButton3Click1(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnButton7Click(wxCommandEvent& event);
        void OnButton8Click(wxCommandEvent& event);
        void OnButton11Click(wxCommandEvent& event);
        void OnButton12Click(wxCommandEvent& event);
        void OnButton14Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton10Click(wxCommandEvent& event);
        void OnButton15Click(wxCommandEvent& event);
        void OnButton16Click(wxCommandEvent& event);
        void OnButton13Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(CalculatorFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_BUTTON13;
        static const long ID_BUTTON15;
        static const long ID_BUTTON14;
        static const long ID_BUTTON16;
        static const long ID_TEXTCTRL1;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CalculatorFrame)
        wxButton* Button10;
        wxButton* Button11;
        wxButton* Button12;
        wxButton* Button13;
        wxButton* Button14;
        wxButton* Button15;
        wxButton* Button16;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxButton* Button5;
        wxButton* Button6;
        wxButton* Button7;
        wxButton* Button8;
        wxButton* Button9;
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATORMAIN_H
