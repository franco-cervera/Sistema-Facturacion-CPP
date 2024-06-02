#pragma once

#include "Registro.h"
#include "Clientes.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Log
	/// </summary>
	public ref class Log : public System::Windows::Forms::Form
	{
	public:
		Log(void)
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
		~Log()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ usuarioLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	public: System::Windows::Forms::Button^ ingresarButton;
	private:

	public: System::Windows::Forms::Button^ registrarButton;
	public: System::Windows::Forms::TextBox^ usuarioText;
	public: System::Windows::Forms::TextBox^ passwordText;
	private: System::Windows::Forms::Label^ recuperarPassLabel;
	private: System::Windows::Forms::Label^ label1;
	public:

	public:
	private:






	protected:






	protected:

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
			this->usuarioLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->ingresarButton = (gcnew System::Windows::Forms::Button());
			this->registrarButton = (gcnew System::Windows::Forms::Button());
			this->usuarioText = (gcnew System::Windows::Forms::TextBox());
			this->passwordText = (gcnew System::Windows::Forms::TextBox());
			this->recuperarPassLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// usuarioLabel
			// 
			this->usuarioLabel->AutoSize = true;
			this->usuarioLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->usuarioLabel->Location = System::Drawing::Point(27, 64);
			this->usuarioLabel->Name = L"usuarioLabel";
			this->usuarioLabel->Size = System::Drawing::Size(49, 16);
			this->usuarioLabel->TabIndex = 0;
			this->usuarioLabel->Text = L"Legajo";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->passwordLabel->Location = System::Drawing::Point(26, 130);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(67, 16);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"Password";
			// 
			// ingresarButton
			// 
			this->ingresarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ingresarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ingresarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ingresarButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ingresarButton->Location = System::Drawing::Point(30, 224);
			this->ingresarButton->Name = L"ingresarButton";
			this->ingresarButton->Size = System::Drawing::Size(214, 52);
			this->ingresarButton->TabIndex = 2;
			this->ingresarButton->Text = L"Ingresar";
			this->ingresarButton->UseVisualStyleBackColor = false;
			// 
			// registrarButton
			// 
			this->registrarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->registrarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->registrarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registrarButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->registrarButton->Location = System::Drawing::Point(30, 298);
			this->registrarButton->Name = L"registrarButton";
			this->registrarButton->Size = System::Drawing::Size(214, 32);
			this->registrarButton->TabIndex = 3;
			this->registrarButton->Text = L"Registrar";
			this->registrarButton->UseVisualStyleBackColor = false;
			// 
			// usuarioText
			// 
			this->usuarioText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->usuarioText->Font = (gcnew System::Drawing::Font(L"Rubik", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usuarioText->Location = System::Drawing::Point(30, 83);
			this->usuarioText->Name = L"usuarioText";
			this->usuarioText->Size = System::Drawing::Size(214, 35);
			this->usuarioText->TabIndex = 4;
			this->usuarioText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// passwordText
			// 
			this->passwordText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->passwordText->Font = (gcnew System::Drawing::Font(L"Rubik", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordText->Location = System::Drawing::Point(30, 149);
			this->passwordText->Name = L"passwordText";
			this->passwordText->PasswordChar = '*';
			this->passwordText->Size = System::Drawing::Size(214, 35);
			this->passwordText->TabIndex = 5;
			this->passwordText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// recuperarPassLabel
			// 
			this->recuperarPassLabel->AutoSize = true;
			this->recuperarPassLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recuperarPassLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->recuperarPassLabel->Location = System::Drawing::Point(65, 361);
			this->recuperarPassLabel->Name = L"recuperarPassLabel";
			this->recuperarPassLabel->Size = System::Drawing::Size(141, 16);
			this->recuperarPassLabel->TabIndex = 6;
			this->recuperarPassLabel->Text = L"Recuperar contraseña";
			this->recuperarPassLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rubik", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(77, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 39);
			this->label1->TabIndex = 7;
			this->label1->Text = L"LOGIN";
			// 
			// Log
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(272, 402);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->recuperarPassLabel);
			this->Controls->Add(this->passwordText);
			this->Controls->Add(this->usuarioText);
			this->Controls->Add(this->registrarButton);
			this->Controls->Add(this->ingresarButton);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usuarioLabel);
			this->Name = L"Log";
			this->Text = L"Log";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

};
}
