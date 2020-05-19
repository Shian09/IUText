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
#include "MyForm1.h"

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
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form ^ obj;
	public:
		String^ word;
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MyForm2(String^ text, Form^ obj1)
		{
			InitializeComponent();
			word = text;
			obj = obj1;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^  SendMessage;
	private: System::Windows::Forms::Button^  ViewMessage;

	private: System::Windows::Forms::Button^  button2;








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
			this->SendMessage = (gcnew System::Windows::Forms::Button());
			this->ViewMessage = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SendMessage
			// 
			this->SendMessage->BackColor = System::Drawing::Color::LightBlue;
			this->SendMessage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SendMessage->Location = System::Drawing::Point(206, 70);
			this->SendMessage->Name = L"SendMessage";
			this->SendMessage->Size = System::Drawing::Size(332, 80);
			this->SendMessage->TabIndex = 5;
			this->SendMessage->Text = L"Send Message";
			this->SendMessage->UseVisualStyleBackColor = false;
			this->SendMessage->Click += gcnew System::EventHandler(this, &MyForm2::SendMessage_Click);
			// 
			// ViewMessage
			// 
			this->ViewMessage->BackColor = System::Drawing::Color::Thistle;
			this->ViewMessage->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewMessage->Location = System::Drawing::Point(206, 213);
			this->ViewMessage->Name = L"ViewMessage";
			this->ViewMessage->Size = System::Drawing::Size(332, 80);
			this->ViewMessage->TabIndex = 8;
			this->ViewMessage->Text = L"View Message";
			this->ViewMessage->UseVisualStyleBackColor = false;
			this->ViewMessage->Click += gcnew System::EventHandler(this, &MyForm2::ViewMessage_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MistyRose;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(206, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(332, 80);
			this->button2->TabIndex = 9;
			this->button2->Text = L"LogOut";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(699, 513);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ViewMessage);
			this->Controls->Add(this->SendMessage);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IUText";
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		//Application::Exit();
		MessageBox::Show("You have been logged out.");
		this->Hide();
		obj->Show();
		
	
	}
private: System::Void SendMessage_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	MessageSend^ s = gcnew MessageSend(word);
	s->ShowDialog();
	this->Show();
}
private: System::Void ViewMessage_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	MessageView^ mv = gcnew MessageView(word);
	mv->ShowDialog();
	this->Show();

}
};
}