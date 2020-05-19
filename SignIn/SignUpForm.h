#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include<direct.h>
#include<msclr/marshal_cppstd.h>
#include"stdafx.h"
#include"MyForm2.h"
#include "SignUpForm.h"
#include<stdlib.h>
#include<cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "directories.h"
#include "userlist.h"
#include "username_check.h"
#include "userauth.h"
#include "usercred.h"
#include "encrypt.h"
#include "store_message.h"
#include "view_message.h"
#include "strTOch.h"
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
	/// Summary for SignUpForm
	/// </summary>
	public ref class SignUpForm : public System::Windows::Forms::Form
	{
	public:
		SignUpForm(void)
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
		~SignUpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  create_username;
	protected:
	private: System::Windows::Forms::Label^  create_password;
	private: System::Windows::Forms::TextBox^  createusernameBox;
	private: System::Windows::Forms::TextBox^  createpasswordBox;
	private: System::Windows::Forms::Button^  Create;


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
			this->create_username = (gcnew System::Windows::Forms::Label());
			this->create_password = (gcnew System::Windows::Forms::Label());
			this->createusernameBox = (gcnew System::Windows::Forms::TextBox());
			this->createpasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->Create = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// create_username
			// 
			this->create_username->AutoSize = true;
			this->create_username->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_username->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->create_username->Location = System::Drawing::Point(102, 49);
			this->create_username->Name = L"create_username";
			this->create_username->Size = System::Drawing::Size(146, 23);
			this->create_username->TabIndex = 0;
			this->create_username->Text = L"Create_username";
			// 
			// create_password
			// 
			this->create_password->AutoSize = true;
			this->create_password->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_password->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->create_password->Location = System::Drawing::Point(102, 96);
			this->create_password->Name = L"create_password";
			this->create_password->Size = System::Drawing::Size(125, 23);
			this->create_password->TabIndex = 1;
			this->create_password->Text = L"New Password";
			// 
			// createusernameBox
			// 
			this->createusernameBox->Location = System::Drawing::Point(263, 49);
			this->createusernameBox->Name = L"createusernameBox";
			this->createusernameBox->Size = System::Drawing::Size(278, 22);
			this->createusernameBox->TabIndex = 2;
			// 
			// createpasswordBox
			// 
			this->createpasswordBox->Location = System::Drawing::Point(263, 96);
			this->createpasswordBox->Name = L"createpasswordBox";
			this->createpasswordBox->Size = System::Drawing::Size(278, 22);
			this->createpasswordBox->TabIndex = 3;
			// 
			// Create
			// 
			this->Create->AutoSize = true;
			this->Create->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Create->BackColor = System::Drawing::SystemColors::Control;
			this->Create->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Create->Location = System::Drawing::Point(298, 217);
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(97, 42);
			this->Create->TabIndex = 4;
			this->Create->Text = L"Create!";
			this->Create->UseVisualStyleBackColor = false;
			this->Create->Click += gcnew System::EventHandler(this, &SignUpForm::Create_Click);
			// 
			// SignUpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(693, 339);
			this->Controls->Add(this->Create);
			this->Controls->Add(this->createpasswordBox);
			this->Controls->Add(this->createusernameBox);
			this->Controls->Add(this->create_password);
			this->Controls->Add(this->create_username);
			this->Name = L"SignUpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUpForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Create_Click(System::Object^  sender, System::EventArgs^  e) {

		//String^ userRAW = createusernameBox->Text;
		//String^ passwordRAW = createpasswordBox->Text;

		//string suser = msclr::interop::marshal_as<std::string>(userRAW);
		//string spassword = msclr::interop::marshal_as<std::string>(passwordRAW);
		//char username[100];
		//char password[100];
		//("Enter username.\n");
		//scanf(" %s", &username);
		//if ((username_check(strtochar(suser)) == 1))
		//{
			//MessageBox::Show("Username taken. Please try again!");
			//printf("Username taken. Please try again.\n");
			//int z = getchar();
			//printf("Enter any key to continue...\n");
			//int c = getchar();
			//system(CLEAR);
		//}
		//else
		//{
			//printf("Enter password\n");
			//scanf(" %s", &password);
			//directories(strtochar(suser));
			//userlist(strtochar(suser));
			//usercred(strtochar(suser), strtochar(spassword));
			//printf("Account for %s created.\n", username);
			//MessageBox::Show("Congratulations! Account is created!");
			//int z = getchar();
			//printf("Enter any key to continue...\n");
			//int c = getchar();
			//system(CLEAR);
		//}
		String^ userRAW = createusernameBox->Text;
		String^ passwordRAW = createpasswordBox->Text;

		string suser = msclr::interop::marshal_as<std::string>(userRAW);
		string spassword = msclr::interop::marshal_as<std::string>(passwordRAW);

		int count = 0;
		if(createusernameBox->Text!="" && createpasswordBox->Text!=""){
			
			//char command[1000] = "mkdir ";
			//strcat(command, strtochar(suser));
			//system(command);
			fstream userfile("userlist.txt", ios::in | ios::app);
			userfile.seekg(0);
			string iuser;
			string x;
			while (userfile.good()) {
				//if(getline(userfile, x) != NULL)
				while (getline(userfile, iuser)) {
					//ifstream readuser;
					//readuser.open("userlist.txt");
					//string iuser;
					//getline(userfile, iuser);
					//getline(userfile, iuser);
					//fstream check("check.txt", ios::app);
					//check << "iuser: " << iuser << "suser: "<< suser << "\n";
					if (suser == iuser)
					{
						//check  << "ami\n";
						MessageBox::Show("Username taken. Please try again.\n");
						count = 1;
						break;
					}
				}

				if(count!=1)
				{
					string path = suser;
					//CreateDirectory(path.c_str(), NULL);
					mkdir(path.c_str());
					//system(path.c_str());
					fstream userfile("userlist.txt", ios::app);
					userfile << suser;
					userfile << "\n";
					fstream usercred("usercred.txt", ios::app);
					usercred << suser << " " << spassword << " " << "\n";
					//ofstream userfile(suser + ".txt");
					//ofstream passfile(suser + "pass.txt");

					//passfile << spassword;

					MessageBox::Show("Congratulations!\nWelcome to IUText!");
					}
		
			}
		}
		else if(createusernameBox->Text == "")
		{
			MessageBox::Show("Please enter username!");
		}
		else if (createpasswordBox->Text == "")
		{
			MessageBox::Show("Please enter password!");
		}
	}
};
}
