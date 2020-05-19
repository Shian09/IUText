#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<msclr/marshal_cppstd.h>
#include"stdafx.h"
#include"MyForm2.h"
#include "SignUpForm.h"
#include<stdlib.h>
#include<cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MessageSend.h"
#include "MessageView.h"

using namespace std;
using namespace System::IO;

namespace SignIn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MessageView
	/// </summary>
	public ref class MessageView : public System::Windows::Forms::Form
	{
	public:
		String ^ USER;
	public:
		MessageView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MessageView(String^ textt)
		{
			InitializeComponent();
			USER = textt;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MessageView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label111;
	protected:
	private: System::Windows::Forms::TextBox^  ToView;
	private: System::Windows::Forms::Button^  View;
	private: System::Windows::Forms::TextBox^  LoadMessage;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->ToView = (gcnew System::Windows::Forms::TextBox());
			this->View = (gcnew System::Windows::Forms::Button());
			this->LoadMessage = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label111->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label111->Location = System::Drawing::Point(146, 43);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(364, 25);
			this->label111->TabIndex = 0;
			this->label111->Text = L"Whose message do you want to view\?";
			// 
			// ToView
			// 
			this->ToView->Location = System::Drawing::Point(190, 101);
			this->ToView->Name = L"ToView";
			this->ToView->Size = System::Drawing::Size(263, 22);
			this->ToView->TabIndex = 1;
			// 
			// View
			// 
			this->View->BackColor = System::Drawing::Color::SkyBlue;
			this->View->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->View->ForeColor = System::Drawing::Color::Black;
			this->View->Location = System::Drawing::Point(261, 152);
			this->View->Name = L"View";
			this->View->Size = System::Drawing::Size(120, 40);
			this->View->TabIndex = 2;
			this->View->Text = L"View";
			this->View->UseVisualStyleBackColor = false;
			this->View->Click += gcnew System::EventHandler(this, &MessageView::View_Click);
			// 
			// LoadMessage
			// 
			this->LoadMessage->BackColor = System::Drawing::Color::AliceBlue;
			this->LoadMessage->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadMessage->Location = System::Drawing::Point(18, 242);
			this->LoadMessage->Multiline = true;
			this->LoadMessage->Name = L"LoadMessage";
			this->LoadMessage->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->LoadMessage->Size = System::Drawing::Size(597, 290);
			this->LoadMessage->TabIndex = 3;
			// 
			// MessageView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(627, 545);
			this->Controls->Add(this->LoadMessage);
			this->Controls->Add(this->View);
			this->Controls->Add(this->ToView);
			this->Controls->Add(this->label111);
			this->Name = L"MessageView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MessageView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void View_Click(System::Object^  sender, System::EventArgs^  e) {
		int count1 = 0, count = 0;
		
		String^ USERraw = USER;
		
		string userfolder = msclr::interop::marshal_as<std::string>(USERraw);
		
		String^ toviewRAW = ToView->Text;
		
		string toview = msclr::interop::marshal_as<std::string>(toviewRAW);
		
		fstream userlist("userlist.txt", ios::in);
		while (userlist.good()) 
		{
			count1 = 1;
			while (!userlist.eof())
			{
				string readuser;
				userlist >> readuser;
				if (readuser == toview)
				{
					count = 1;
					fstream showmessage(userfolder + "/" + toview + ".txt", ios::in);
					while (!showmessage.eof())
					{
						string messages;
						getline(showmessage,messages);
						messages = messages + '\r' +'\n';
						//messages = messages + " ";
						//fstream check("check1.txt", ios::app);
						//check << messages ;
						String^ message = msclr::interop::marshal_as<String^>(messages);
						LoadMessage->Text += message;
					}
					break;
				}
			}
		}
		if (count1 != 1)
		{
			MessageBox::Show("An unexpected error occured. Try again.");
		}
		if (count != 1)
		{
			MessageBox::Show("User not found.\nPlease try again.");
		}
	}
};
}
