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
#include "MyForm1.h"
#include "MessageSend.h"

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
	/// Summary for MessageSend
	/// </summary>
	public ref class MessageSend : public System::Windows::Forms::Form
	{
	public:
		String ^ senderrrr;
	
	public:
		MessageSend(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	public:
		MessageSend(String^ s)
		{
			InitializeComponent();
			senderrrr = s;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MessageSend()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:


	private: System::Windows::Forms::TextBox^  MessageBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  ReceiverBox;
	private: System::Windows::Forms::Label^  Senderlabel;
	private: System::Windows::Forms::Button^  Senderbtn;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->MessageBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ReceiverBox = (gcnew System::Windows::Forms::TextBox());
			this->Senderlabel = (gcnew System::Windows::Forms::Label());
			this->Senderbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(332, 404);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MessageSend::button1_Click);
			// 
			// MessageBox
			// 
			this->MessageBox->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageBox->Location = System::Drawing::Point(61, 185);
			this->MessageBox->Multiline = true;
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->MessageBox->Size = System::Drawing::Size(664, 192);
			this->MessageBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(57, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Receiver";
			// 
			// ReceiverBox
			// 
			this->ReceiverBox->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReceiverBox->Location = System::Drawing::Point(189, 116);
			this->ReceiverBox->Name = L"ReceiverBox";
			this->ReceiverBox->Size = System::Drawing::Size(321, 33);
			this->ReceiverBox->TabIndex = 5;
			// 
			// Senderlabel
			// 
			this->Senderlabel->AutoSize = true;
			this->Senderlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Senderlabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Senderlabel->Location = System::Drawing::Point(184, 58);
			this->Senderlabel->Name = L"Senderlabel";
			this->Senderlabel->Size = System::Drawing::Size(0, 25);
			this->Senderlabel->TabIndex = 6;
			// 
			// Senderbtn
			// 
			this->Senderbtn->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Senderbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Senderbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Senderbtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Senderbtn->Location = System::Drawing::Point(61, 58);
			this->Senderbtn->Name = L"Senderbtn";
			this->Senderbtn->Size = System::Drawing::Size(95, 33);
			this->Senderbtn->TabIndex = 7;
			this->Senderbtn->Text = L"Sender";
			this->Senderbtn->UseVisualStyleBackColor = false;
			this->Senderbtn->Click += gcnew System::EventHandler(this, &MessageSend::Senderbtn_Click);
			// 
			// MessageSend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(788, 498);
			this->Controls->Add(this->Senderbtn);
			this->Controls->Add(this->Senderlabel);
			this->Controls->Add(this->ReceiverBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MessageBox);
			this->Controls->Add(this->button1);
			this->Name = L"MessageSend";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MessageSend";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SenderBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ senderrr = senderrrr;
		Senderlabel->Text = senderrr;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int count = 0;
	
	String^ Senderrr = senderrrr;
	//Senderlabel->Text = senderrr;
	
	String^ receiverRAW = ReceiverBox->Text;
	String^ senderRAW = Senderrr;
	
	string receiver = msclr::interop::marshal_as<std::string>(receiverRAW);
	string senderr = msclr::interop::marshal_as<std::string>(senderRAW);
	
	fstream readreceiver("userlist.txt", ios::in);
	string receivercomp;

	while (!readreceiver.eof())
	{
		readreceiver >> receivercomp;

		if (receivercomp == receiver)
		{
			String^ textmessageRAW = MessageBox->Text;
			string textmessage = msclr::interop::marshal_as<std::string>(textmessageRAW);
			//creating file to sender folder
			//fstream check("check.txt", ios::app);
			string receiverfile, s1;
			s1 = "/";
			string receiverfilee = senderr + s1;
			//check << "receiverfilee: " << receiverfilee << "\n";
			receiverfile = receiverfilee + receiver;
			//check << "receiverfile: " << receiverfile << "\n";

			fstream receiverFile(receiverfile + ".txt", ios::app);

			string textmessagefile1 =  senderr + ": " + textmessage + "\n";
	
			receiverFile << textmessagefile1 << "\n";
			//creating file to receiver folder
			string senderfile, s2;
			s2 = "/";
			string senderfilee = receiver + s2;
			senderfile = senderfilee + senderr;

			fstream senderFile(senderfile + ".txt", ios::app);

			string textmessagefile2 = senderr + ": " + textmessage + "\n";

			senderFile << textmessagefile2 << "\n";


			MessageBox::Show("Receiver Found\nMessaage has been sent.");
			count = 1;
			break;
		}
	}
	if (count != 1)
	{
		MessageBox::Show("Receiver Not Found.\nPlease try again");
	}
}
private: System::Void Senderbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ senderrr = senderrrr;
	Senderlabel->Text = senderrr;
}
};
}
