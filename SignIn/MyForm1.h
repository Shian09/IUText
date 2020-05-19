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
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  usernameBox;
	private: System::Windows::Forms::TextBox^  passwordBox;
	private: System::Windows::Forms::Label^  usernameLabel;
	private: System::Windows::Forms::Label^  passwordLabel;
	private: System::Windows::Forms::Label^  label3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(245, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SignIn";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SignUp";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// usernameBox
			// 
			this->usernameBox->Location = System::Drawing::Point(245, 57);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(186, 22);
			this->usernameBox->TabIndex = 2;
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(245, 116);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(186, 22);
			this->passwordBox->TabIndex = 3;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->usernameLabel->Location = System::Drawing::Point(130, 57);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(87, 23);
			this->usernameLabel->TabIndex = 4;
			this->usernameLabel->Text = L"Username";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->passwordLabel->Location = System::Drawing::Point(130, 116);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(80, 23);
			this->passwordLabel->TabIndex = 5;
			this->passwordLabel->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(141, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Don\'t have an account\? SignUp now.";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(593, 365);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"IUText LogIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//lets create a funtion

	String^ userRAW = usernameBox->Text;
	String^ passwordRAW = passwordBox->Text;
	
	//Now we will convert

	string user = msclr::interop::marshal_as<std::string>(userRAW);
	string password = msclr::interop::marshal_as<std::string>(passwordRAW);
	if (user != "" && password!="")
	{
		// Now we will check the info with the files if they are corect or not..//
		int count = 0;
		ifstream readuser;
		ifstream readpass;

		//readuser.open(user+".txt");
		//readpass.open(user+"pass.txt");
		readuser.open("usercred.txt");
		string readuservar, readpassvar;
		while (!readuser.eof())
		{
			readuser >> readuservar >> readpassvar;
			//fstream check("check.txt", ios::app);
			//check << readuservar << readpassvar << "\n";
			if (readuservar == user)
			{
				if (readpassvar == password)
				{
					MessageBox::Show("Access Granted! Welcome to IUText!");
					String^ userString = userRAW;
					this->Hide();
					MyForm2^ f2 = gcnew MyForm2(userString, this);
					f2->ShowDialog();
					this->Show();
					count = 1;
					break;
				}
				else
				{
					MessageBox::Show("Password Mismatch. Try Again.");
					count = 1;
					break;
				}
			}
		}
		if (count != 1)
		{
			MessageBox::Show("Access Denied!\nUsername not found. Try Again.");
		}
		//string getpass;
		//getline(readpass, getpass);

		//if (getpass == password && readuser.is_open())
		//{
			//MessageBox::Show("Access Granted!\nAccount opened!");
			//this->Hide();
			//MyForm2^ f2 = gcnew MyForm2();
			//f2->ShowDialog();
			//this->Show();
		//}
		//else if (getpass != password || readuser.fail())
		//{
			//MessageBox::Show("Access Denied!\n");
		//}
	}
	else if (user == "")
	{
		MessageBox::Show("Please put your username");
	}
	else if (password == "")
	{
		MessageBox::Show("Please enter your password");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	SignUpForm^ f3 = gcnew SignUpForm();
	f3->ShowDialog();
	this->Show();
}
};
}
