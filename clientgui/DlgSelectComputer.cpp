// Berkeley Open Infrastructure for Network Computing
// http://boinc.berkeley.edu
// Copyright (C) 2005 University of California
//
// This is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// To view the GNU Lesser General Public License visit
// http://www.gnu.org/copyleft/lesser.html
// or write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
#if defined(__GNUG__) && !defined(__APPLE__)
#pragma implementation "DlgSelectComputer.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "DlgSelectComputer.h"

////@begin XPM images
////@end XPM images

/*!
 * CDlgSelectComputer type definition
 */

IMPLEMENT_DYNAMIC_CLASS( CDlgSelectComputer, wxDialog )

/*!
 * CDlgSelectComputer event table definition
 */

BEGIN_EVENT_TABLE( CDlgSelectComputer, wxDialog )

////@begin CDlgSelectComputer event table entries
////@end CDlgSelectComputer event table entries

END_EVENT_TABLE()

/*!
 * CDlgSelectComputer constructors
 */

CDlgSelectComputer::CDlgSelectComputer( )
{
}

CDlgSelectComputer::CDlgSelectComputer( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * CDlgSelectComputer creator
 */

bool CDlgSelectComputer::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin CDlgSelectComputer member initialisation
    m_ComputerNameCtrl = NULL;
    m_ComputerPasswordCtrl = NULL;
////@end CDlgSelectComputer member initialisation

////@begin CDlgSelectComputer creation
    SetExtraStyle(GetExtraStyle()|wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    GetSizer()->Fit(this);
    GetSizer()->SetSizeHints(this);
    Centre();
////@end CDlgSelectComputer creation
    return TRUE;
}

/*!
 * Control creation for CDlgSelectComputer
 */

void CDlgSelectComputer::CreateControls()
{    
////@begin CDlgSelectComputer content construction

    CDlgSelectComputer* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxFlexGridSizer* itemFlexGridSizer3 = new wxFlexGridSizer(1, 2, 0, 0);
    itemBoxSizer2->Add(itemFlexGridSizer3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemFlexGridSizer3->Add(itemBoxSizer4, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxFlexGridSizer* itemFlexGridSizer5 = new wxFlexGridSizer(2, 2, 0, 0);
    itemBoxSizer4->Add(itemFlexGridSizer5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText6 = new wxStaticText;
    itemStaticText6->Create( itemDialog1, wxID_STATIC, _("Host name:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer5->Add(itemStaticText6, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL|wxADJUST_MINSIZE, 5);

    wxString* m_ComputerNameCtrlStrings = NULL;
    m_ComputerNameCtrl = new wxComboBox;
    m_ComputerNameCtrl->Create( itemDialog1, ID_SELECTCOMPUTERNAME, _T(""), wxDefaultPosition, wxSize(250, -1), 0, m_ComputerNameCtrlStrings, wxCB_DROPDOWN|wxCB_SORT );
    itemFlexGridSizer5->Add(m_ComputerNameCtrl, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText8 = new wxStaticText;
    itemStaticText8->Create( itemDialog1, wxID_STATIC, _("Password:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemFlexGridSizer5->Add(itemStaticText8, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL|wxADJUST_MINSIZE, 5);

    m_ComputerPasswordCtrl = new wxTextCtrl;
    m_ComputerPasswordCtrl->Create( itemDialog1, ID_SELECTCOMPUTERPASSWORD, _T(""), wxDefaultPosition, wxSize(250, -1), wxTE_PASSWORD );
    itemFlexGridSizer5->Add(m_ComputerPasswordCtrl, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
    itemFlexGridSizer3->Add(itemBoxSizer10, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP|wxALL, 5);

    wxButton* itemButton11 = new wxButton;
    itemButton11->Create( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemButton11->SetDefault();
    itemBoxSizer10->Add(itemButton11, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton12 = new wxButton;
    itemButton12->Create( itemDialog1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemButton12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end CDlgSelectComputer content construction
}

/*!
 * Should we show tooltips?
 */

bool CDlgSelectComputer::ShowToolTips()
{
    return TRUE;
}

/*!
 * Get bitmap resources
 */

wxBitmap CDlgSelectComputer::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin CDlgSelectComputer bitmap retrieval
    return wxNullBitmap;
////@end CDlgSelectComputer bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon CDlgSelectComputer::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin CDlgSelectComputer icon retrieval
    return wxNullIcon;
////@end CDlgSelectComputer icon retrieval
}
