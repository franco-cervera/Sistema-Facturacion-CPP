#pragma once

#include "Stock.h";
#include "Clientes.h";
#include "Facturar.h";

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proveedor
	/// </summary>
	public ref class Proveedor : public System::Windows::Forms::Form
	{
	public:
		Proveedor(void)
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
		~Proveedor()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ facturarButton;
	protected:
	public: System::Windows::Forms::Button^ stockButton;
	public: System::Windows::Forms::Button^ clientesButton;
	public: System::Windows::Forms::Button^ guardarButton;
	public: System::Windows::Forms::Button^ modificarButton;
	public: System::Windows::Forms::Button^ eliminarButton;






	protected:

	protected:





	private: System::Windows::Forms::Label^ idProveedorLabel;
	private: System::Windows::Forms::Label^ nombreLabel;
	private: System::Windows::Forms::Label^ cuitCuilLabel;
	private: System::Windows::Forms::Label^ telefonoLabel;
	private: System::Windows::Forms::Label^ domicilioLabel;
	private: System::Windows::Forms::Label^ correoLabel;
	public: System::Windows::Forms::TextBox^ idProveedorText;
	private:
	public: System::Windows::Forms::TextBox^ nombreText;
	public: System::Windows::Forms::TextBox^ cuitCuilText;
	public: System::Windows::Forms::TextBox^ telefonoText;
	public: System::Windows::Forms::TextBox^ domicilioText;
	public: System::Windows::Forms::TextBox^ correoText;
	public: System::Windows::Forms::DataGridView^ dataGridProveedor;
	private: System::Windows::Forms::Label^ proveedorLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RazónSocial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cuitCuil;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teléfono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Domicilio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	public:

















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
			this->facturarButton = (gcnew System::Windows::Forms::Button());
			this->stockButton = (gcnew System::Windows::Forms::Button());
			this->clientesButton = (gcnew System::Windows::Forms::Button());
			this->guardarButton = (gcnew System::Windows::Forms::Button());
			this->modificarButton = (gcnew System::Windows::Forms::Button());
			this->eliminarButton = (gcnew System::Windows::Forms::Button());
			this->idProveedorLabel = (gcnew System::Windows::Forms::Label());
			this->nombreLabel = (gcnew System::Windows::Forms::Label());
			this->cuitCuilLabel = (gcnew System::Windows::Forms::Label());
			this->telefonoLabel = (gcnew System::Windows::Forms::Label());
			this->domicilioLabel = (gcnew System::Windows::Forms::Label());
			this->correoLabel = (gcnew System::Windows::Forms::Label());
			this->idProveedorText = (gcnew System::Windows::Forms::TextBox());
			this->nombreText = (gcnew System::Windows::Forms::TextBox());
			this->cuitCuilText = (gcnew System::Windows::Forms::TextBox());
			this->telefonoText = (gcnew System::Windows::Forms::TextBox());
			this->domicilioText = (gcnew System::Windows::Forms::TextBox());
			this->correoText = (gcnew System::Windows::Forms::TextBox());
			this->dataGridProveedor = (gcnew System::Windows::Forms::DataGridView());
			this->proveedorLabel = (gcnew System::Windows::Forms::Label());
			this->idProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RazónSocial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cuitCuil = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Teléfono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Domicilio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridProveedor))->BeginInit();
			this->SuspendLayout();
			// 
			// facturarButton
			// 
			this->facturarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->facturarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->facturarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facturarButton->Location = System::Drawing::Point(34, 5);
			this->facturarButton->Name = L"facturarButton";
			this->facturarButton->Size = System::Drawing::Size(156, 46);
			this->facturarButton->TabIndex = 0;
			this->facturarButton->Text = L"Facturar";
			this->facturarButton->UseVisualStyleBackColor = false;
			// 
			// stockButton
			// 
			this->stockButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->stockButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->stockButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockButton->Location = System::Drawing::Point(209, 5);
			this->stockButton->Name = L"stockButton";
			this->stockButton->Size = System::Drawing::Size(156, 46);
			this->stockButton->TabIndex = 1;
			this->stockButton->Text = L"Stock";
			this->stockButton->UseVisualStyleBackColor = false;
			// 
			// clientesButton
			// 
			this->clientesButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->clientesButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clientesButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientesButton->Location = System::Drawing::Point(385, 5);
			this->clientesButton->Name = L"clientesButton";
			this->clientesButton->Size = System::Drawing::Size(156, 46);
			this->clientesButton->TabIndex = 2;
			this->clientesButton->Text = L"Clientes";
			this->clientesButton->UseVisualStyleBackColor = false;
			// 
			// guardarButton
			// 
			this->guardarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->guardarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->guardarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guardarButton->Location = System::Drawing::Point(588, 109);
			this->guardarButton->Name = L"guardarButton";
			this->guardarButton->Size = System::Drawing::Size(156, 46);
			this->guardarButton->TabIndex = 3;
			this->guardarButton->Text = L"Guardar";
			this->guardarButton->UseVisualStyleBackColor = false;
			// 
			// modificarButton
			// 
			this->modificarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->modificarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->modificarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modificarButton->Location = System::Drawing::Point(588, 177);
			this->modificarButton->Name = L"modificarButton";
			this->modificarButton->Size = System::Drawing::Size(156, 46);
			this->modificarButton->TabIndex = 4;
			this->modificarButton->Text = L"Modificar";
			this->modificarButton->UseVisualStyleBackColor = false;
			// 
			// eliminarButton
			// 
			this->eliminarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->eliminarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eliminarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarButton->Location = System::Drawing::Point(588, 249);
			this->eliminarButton->Name = L"eliminarButton";
			this->eliminarButton->Size = System::Drawing::Size(156, 46);
			this->eliminarButton->TabIndex = 5;
			this->eliminarButton->Text = L"Eliminar";
			this->eliminarButton->UseVisualStyleBackColor = false;
			// 
			// idProveedorLabel
			// 
			this->idProveedorLabel->AutoSize = true;
			this->idProveedorLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProveedorLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->idProveedorLabel->Location = System::Drawing::Point(30, 90);
			this->idProveedorLabel->Name = L"idProveedorLabel";
			this->idProveedorLabel->Size = System::Drawing::Size(121, 20);
			this->idProveedorLabel->TabIndex = 6;
			this->idProveedorLabel->Text = L"ID Proveedor";
			// 
			// nombreLabel
			// 
			this->nombreLabel->AutoSize = true;
			this->nombreLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->nombreLabel->Location = System::Drawing::Point(30, 130);
			this->nombreLabel->Name = L"nombreLabel";
			this->nombreLabel->Size = System::Drawing::Size(117, 20);
			this->nombreLabel->TabIndex = 7;
			this->nombreLabel->Text = L"Razón Social";
			// 
			// cuitCuilLabel
			// 
			this->cuitCuilLabel->AutoSize = true;
			this->cuitCuilLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cuitCuilLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->cuitCuilLabel->Location = System::Drawing::Point(30, 170);
			this->cuitCuilLabel->Name = L"cuitCuilLabel";
			this->cuitCuilLabel->Size = System::Drawing::Size(96, 20);
			this->cuitCuilLabel->TabIndex = 8;
			this->cuitCuilLabel->Text = L"Cuit / Cuil";
			// 
			// telefonoLabel
			// 
			this->telefonoLabel->AutoSize = true;
			this->telefonoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefonoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->telefonoLabel->Location = System::Drawing::Point(30, 210);
			this->telefonoLabel->Name = L"telefonoLabel";
			this->telefonoLabel->Size = System::Drawing::Size(82, 20);
			this->telefonoLabel->TabIndex = 9;
			this->telefonoLabel->Text = L"Teléfono";
			// 
			// domicilioLabel
			// 
			this->domicilioLabel->AutoSize = true;
			this->domicilioLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->domicilioLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->domicilioLabel->Location = System::Drawing::Point(30, 250);
			this->domicilioLabel->Name = L"domicilioLabel";
			this->domicilioLabel->Size = System::Drawing::Size(87, 20);
			this->domicilioLabel->TabIndex = 10;
			this->domicilioLabel->Text = L"Domicilio";
			// 
			// correoLabel
			// 
			this->correoLabel->AutoSize = true;
			this->correoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->correoLabel->Location = System::Drawing::Point(30, 290);
			this->correoLabel->Name = L"correoLabel";
			this->correoLabel->Size = System::Drawing::Size(67, 20);
			this->correoLabel->TabIndex = 11;
			this->correoLabel->Text = L"Correo";
			// 
			// idProveedorText
			// 
			this->idProveedorText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->idProveedorText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProveedorText->Location = System::Drawing::Point(176, 90);
			this->idProveedorText->Name = L"idProveedorText";
			this->idProveedorText->Size = System::Drawing::Size(374, 28);
			this->idProveedorText->TabIndex = 12;
			// 
			// nombreText
			// 
			this->nombreText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->nombreText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreText->Location = System::Drawing::Point(176, 130);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(374, 28);
			this->nombreText->TabIndex = 13;
			// 
			// cuitCuilText
			// 
			this->cuitCuilText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->cuitCuilText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cuitCuilText->Location = System::Drawing::Point(176, 170);
			this->cuitCuilText->Name = L"cuitCuilText";
			this->cuitCuilText->Size = System::Drawing::Size(374, 28);
			this->cuitCuilText->TabIndex = 14;
			// 
			// telefonoText
			// 
			this->telefonoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->telefonoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefonoText->Location = System::Drawing::Point(176, 210);
			this->telefonoText->Name = L"telefonoText";
			this->telefonoText->Size = System::Drawing::Size(374, 28);
			this->telefonoText->TabIndex = 15;
			// 
			// domicilioText
			// 
			this->domicilioText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->domicilioText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->domicilioText->Location = System::Drawing::Point(176, 250);
			this->domicilioText->Name = L"domicilioText";
			this->domicilioText->Size = System::Drawing::Size(374, 28);
			this->domicilioText->TabIndex = 16;
			// 
			// correoText
			// 
			this->correoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->correoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correoText->Location = System::Drawing::Point(176, 290);
			this->correoText->Name = L"correoText";
			this->correoText->Size = System::Drawing::Size(374, 28);
			this->correoText->TabIndex = 17;
			// 
			// dataGridProveedor
			// 
			this->dataGridProveedor->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridProveedor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridProveedor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->idProveedor,
					this->RazónSocial, this->cuitCuil, this->Teléfono, this->Domicilio, this->Correo
			});
			this->dataGridProveedor->Location = System::Drawing::Point(30, 355);
			this->dataGridProveedor->Name = L"dataGridProveedor";
			this->dataGridProveedor->RowHeadersWidth = 51;
			this->dataGridProveedor->RowTemplate->Height = 24;
			this->dataGridProveedor->Size = System::Drawing::Size(767, 192);
			this->dataGridProveedor->TabIndex = 18;
			// 
			// proveedorLabel
			// 
			this->proveedorLabel->AutoSize = true;
			this->proveedorLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->proveedorLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->proveedorLabel->Location = System::Drawing::Point(547, 5);
			this->proveedorLabel->Name = L"proveedorLabel";
			this->proveedorLabel->Size = System::Drawing::Size(247, 51);
			this->proveedorLabel->TabIndex = 19;
			this->proveedorLabel->Text = L"Proveedor";
			// 
			// idProveedor
			// 
			this->idProveedor->HeaderText = L"idProveedor";
			this->idProveedor->MinimumWidth = 6;
			this->idProveedor->Name = L"idProveedor";
			// 
			// RazónSocial
			// 
			this->RazónSocial->HeaderText = L"RazónSocial";
			this->RazónSocial->MinimumWidth = 6;
			this->RazónSocial->Name = L"RazónSocial";
			// 
			// cuitCuil
			// 
			this->cuitCuil->HeaderText = L"cuitCuil";
			this->cuitCuil->MinimumWidth = 6;
			this->cuitCuil->Name = L"cuitCuil";
			// 
			// Teléfono
			// 
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->MinimumWidth = 6;
			this->Teléfono->Name = L"Teléfono";
			// 
			// Domicilio
			// 
			this->Domicilio->HeaderText = L"Domicilio";
			this->Domicilio->MinimumWidth = 6;
			this->Domicilio->Name = L"Domicilio";
			// 
			// Correo
			// 
			this->Correo->HeaderText = L"Correo";
			this->Correo->MinimumWidth = 6;
			this->Correo->Name = L"Correo";
			// 
			// Proveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(825, 570);
			this->Controls->Add(this->proveedorLabel);
			this->Controls->Add(this->dataGridProveedor);
			this->Controls->Add(this->correoText);
			this->Controls->Add(this->domicilioText);
			this->Controls->Add(this->telefonoText);
			this->Controls->Add(this->cuitCuilText);
			this->Controls->Add(this->nombreText);
			this->Controls->Add(this->idProveedorText);
			this->Controls->Add(this->correoLabel);
			this->Controls->Add(this->domicilioLabel);
			this->Controls->Add(this->telefonoLabel);
			this->Controls->Add(this->cuitCuilLabel);
			this->Controls->Add(this->nombreLabel);
			this->Controls->Add(this->idProveedorLabel);
			this->Controls->Add(this->eliminarButton);
			this->Controls->Add(this->modificarButton);
			this->Controls->Add(this->guardarButton);
			this->Controls->Add(this->clientesButton);
			this->Controls->Add(this->stockButton);
			this->Controls->Add(this->facturarButton);
			this->Name = L"Proveedor";
			this->Text = L"Proveedor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridProveedor))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

};
}
