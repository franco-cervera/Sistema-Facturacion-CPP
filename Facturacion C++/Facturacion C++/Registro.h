#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ registroLabel;
	private: System::Windows::Forms::Label^ nombreLabel;
	private: System::Windows::Forms::Label^ apellidoLabel;
	private: System::Windows::Forms::Label^ legajoLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Label^ correoLabel;
	private: System::Windows::Forms::Label^ sectorLabel;
	public: System::Windows::Forms::TextBox^ nombreText;
	private:
	public: System::Windows::Forms::TextBox^ apellidoText;
	public: System::Windows::Forms::TextBox^ legajoText;
	public: System::Windows::Forms::TextBox^ passwordText;
	public: System::Windows::Forms::TextBox^ correoText;
	public: System::Windows::Forms::TextBox^ sectorText;






	public: System::Windows::Forms::Button^ regresarButton;
	private:
	public: System::Windows::Forms::Button^ registrarButton;








	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->registroLabel = (gcnew System::Windows::Forms::Label());
			this->nombreLabel = (gcnew System::Windows::Forms::Label());
			this->apellidoLabel = (gcnew System::Windows::Forms::Label());
			this->legajoLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->correoLabel = (gcnew System::Windows::Forms::Label());
			this->sectorLabel = (gcnew System::Windows::Forms::Label());
			this->nombreText = (gcnew System::Windows::Forms::TextBox());
			this->apellidoText = (gcnew System::Windows::Forms::TextBox());
			this->legajoText = (gcnew System::Windows::Forms::TextBox());
			this->passwordText = (gcnew System::Windows::Forms::TextBox());
			this->correoText = (gcnew System::Windows::Forms::TextBox());
			this->sectorText = (gcnew System::Windows::Forms::TextBox());
			this->regresarButton = (gcnew System::Windows::Forms::Button());
			this->registrarButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// registroLabel
			// 
			this->registroLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->registroLabel->AutoSize = true;
			this->registroLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registroLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->registroLabel->Location = System::Drawing::Point(84, 9);
			this->registroLabel->Name = L"registroLabel";
			this->registroLabel->Size = System::Drawing::Size(185, 39);
			this->registroLabel->TabIndex = 0;
			this->registroLabel->Text = L"REGISTRO";
			this->registroLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// nombreLabel
			// 
			this->nombreLabel->AutoSize = true;
			this->nombreLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->nombreLabel->Location = System::Drawing::Point(25, 90);
			this->nombreLabel->Name = L"nombreLabel";
			this->nombreLabel->Size = System::Drawing::Size(76, 20);
			this->nombreLabel->TabIndex = 1;
			this->nombreLabel->Text = L"Nombre";
			// 
			// apellidoLabel
			// 
			this->apellidoLabel->AutoSize = true;
			this->apellidoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellidoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->apellidoLabel->Location = System::Drawing::Point(25, 130);
			this->apellidoLabel->Name = L"apellidoLabel";
			this->apellidoLabel->Size = System::Drawing::Size(78, 20);
			this->apellidoLabel->TabIndex = 2;
			this->apellidoLabel->Text = L"Apellido";
			// 
			// legajoLabel
			// 
			this->legajoLabel->AutoSize = true;
			this->legajoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->legajoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->legajoLabel->Location = System::Drawing::Point(25, 170);
			this->legajoLabel->Name = L"legajoLabel";
			this->legajoLabel->Size = System::Drawing::Size(65, 20);
			this->legajoLabel->TabIndex = 3;
			this->legajoLabel->Text = L"Legajo";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->passwordLabel->Location = System::Drawing::Point(25, 210);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(95, 20);
			this->passwordLabel->TabIndex = 4;
			this->passwordLabel->Text = L"Password";
			// 
			// correoLabel
			// 
			this->correoLabel->AutoSize = true;
			this->correoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->correoLabel->Location = System::Drawing::Point(24, 250);
			this->correoLabel->Name = L"correoLabel";
			this->correoLabel->Size = System::Drawing::Size(67, 20);
			this->correoLabel->TabIndex = 5;
			this->correoLabel->Text = L"Correo";
			// 
			// sectorLabel
			// 
			this->sectorLabel->AutoSize = true;
			this->sectorLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sectorLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->sectorLabel->Location = System::Drawing::Point(25, 290);
			this->sectorLabel->Name = L"sectorLabel";
			this->sectorLabel->Size = System::Drawing::Size(66, 20);
			this->sectorLabel->TabIndex = 6;
			this->sectorLabel->Text = L"Sector";
			// 
			// nombreText
			// 
			this->nombreText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->nombreText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreText->Location = System::Drawing::Point(130, 90);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(195, 28);
			this->nombreText->TabIndex = 7;
			// 
			// apellidoText
			// 
			this->apellidoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->apellidoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellidoText->Location = System::Drawing::Point(130, 130);
			this->apellidoText->Name = L"apellidoText";
			this->apellidoText->Size = System::Drawing::Size(195, 28);
			this->apellidoText->TabIndex = 8;
			// 
			// legajoText
			// 
			this->legajoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->legajoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->legajoText->Location = System::Drawing::Point(130, 170);
			this->legajoText->Name = L"legajoText";
			this->legajoText->Size = System::Drawing::Size(195, 28);
			this->legajoText->TabIndex = 9;
			// 
			// passwordText
			// 
			this->passwordText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->passwordText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordText->Location = System::Drawing::Point(130, 210);
			this->passwordText->Name = L"passwordText";
			this->passwordText->PasswordChar = '*';
			this->passwordText->Size = System::Drawing::Size(195, 28);
			this->passwordText->TabIndex = 10;
			// 
			// correoText
			// 
			this->correoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->correoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correoText->Location = System::Drawing::Point(130, 250);
			this->correoText->Name = L"correoText";
			this->correoText->Size = System::Drawing::Size(195, 28);
			this->correoText->TabIndex = 11;
			// 
			// sectorText
			// 
			this->sectorText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->sectorText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sectorText->Location = System::Drawing::Point(130, 290);
			this->sectorText->Name = L"sectorText";
			this->sectorText->Size = System::Drawing::Size(195, 28);
			this->sectorText->TabIndex = 12;
			// 
			// regresarButton
			// 
			this->regresarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->regresarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->regresarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regresarButton->Location = System::Drawing::Point(38, 379);
			this->regresarButton->Name = L"regresarButton";
			this->regresarButton->Size = System::Drawing::Size(143, 53);
			this->regresarButton->TabIndex = 13;
			this->regresarButton->Text = L"Regresar";
			this->regresarButton->UseVisualStyleBackColor = false;
			// 
			// registrarButton
			// 
			this->registrarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->registrarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->registrarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registrarButton->Location = System::Drawing::Point(202, 379);
			this->registrarButton->Name = L"registrarButton";
			this->registrarButton->Size = System::Drawing::Size(143, 53);
			this->registrarButton->TabIndex = 14;
			this->registrarButton->Text = L"Registrar";
			this->registrarButton->UseVisualStyleBackColor = false;
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(371, 473);
			this->Controls->Add(this->registrarButton);
			this->Controls->Add(this->regresarButton);
			this->Controls->Add(this->sectorText);
			this->Controls->Add(this->correoText);
			this->Controls->Add(this->passwordText);
			this->Controls->Add(this->legajoText);
			this->Controls->Add(this->apellidoText);
			this->Controls->Add(this->nombreText);
			this->Controls->Add(this->sectorLabel);
			this->Controls->Add(this->correoLabel);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->legajoLabel);
			this->Controls->Add(this->apellidoLabel);
			this->Controls->Add(this->nombreLabel);
			this->Controls->Add(this->registroLabel);
			this->Name = L"Registro";
			this->Text = L"Registro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
