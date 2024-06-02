#pragma once

#include "Facturar.h";
#include "Proveedor.h";
#include "Stock.h";


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
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
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ facturarButton;
	protected:
	public: System::Windows::Forms::Button^ stockButton;
	public: System::Windows::Forms::Button^ proveedorButton;
	public: System::Windows::Forms::Button^ guardarButton;
	public: System::Windows::Forms::Button^ modificarButton;
	public: System::Windows::Forms::Button^ eliminarButton;






	protected:

	protected:





	private: System::Windows::Forms::Label^ idClienteLabel;
	private: System::Windows::Forms::Label^ nombreLabel;
	private: System::Windows::Forms::Label^ apellidoLabel;
	private: System::Windows::Forms::Label^ dniLabel;
	private: System::Windows::Forms::Label^ telefonoLabel;
	private: System::Windows::Forms::Label^ domicilioLabel;
	private: System::Windows::Forms::Label^ correoLabel;
	public: System::Windows::Forms::TextBox^ idClienteText;
	private:
	public: System::Windows::Forms::TextBox^ nombreText;
	public: System::Windows::Forms::TextBox^ apellidoText;
	public: System::Windows::Forms::TextBox^ dniText;
	public: System::Windows::Forms::TextBox^ telefonoText;
	public: System::Windows::Forms::TextBox^ domicilioText;
	public: System::Windows::Forms::TextBox^ correoText;







	public: System::Windows::Forms::DataGridView^ dataGridClientes;
	private: System::Windows::Forms::Label^ clientesLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Domicilio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	public:
	private:

	private:















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
			this->proveedorButton = (gcnew System::Windows::Forms::Button());
			this->guardarButton = (gcnew System::Windows::Forms::Button());
			this->modificarButton = (gcnew System::Windows::Forms::Button());
			this->eliminarButton = (gcnew System::Windows::Forms::Button());
			this->idClienteLabel = (gcnew System::Windows::Forms::Label());
			this->nombreLabel = (gcnew System::Windows::Forms::Label());
			this->apellidoLabel = (gcnew System::Windows::Forms::Label());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->telefonoLabel = (gcnew System::Windows::Forms::Label());
			this->domicilioLabel = (gcnew System::Windows::Forms::Label());
			this->correoLabel = (gcnew System::Windows::Forms::Label());
			this->idClienteText = (gcnew System::Windows::Forms::TextBox());
			this->nombreText = (gcnew System::Windows::Forms::TextBox());
			this->apellidoText = (gcnew System::Windows::Forms::TextBox());
			this->dniText = (gcnew System::Windows::Forms::TextBox());
			this->telefonoText = (gcnew System::Windows::Forms::TextBox());
			this->domicilioText = (gcnew System::Windows::Forms::TextBox());
			this->correoText = (gcnew System::Windows::Forms::TextBox());
			this->dataGridClientes = (gcnew System::Windows::Forms::DataGridView());
			this->clientesLabel = (gcnew System::Windows::Forms::Label());
			this->idCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Domicilio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridClientes))->BeginInit();
			this->SuspendLayout();
			// 
			// facturarButton
			// 
			this->facturarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->facturarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->facturarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facturarButton->Location = System::Drawing::Point(34, 5);
			this->facturarButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->facturarButton->Name = L"facturarButton";
			this->facturarButton->Size = System::Drawing::Size(168, 49);
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
			this->stockButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->stockButton->Name = L"stockButton";
			this->stockButton->Size = System::Drawing::Size(168, 49);
			this->stockButton->TabIndex = 1;
			this->stockButton->Text = L"Stock";
			this->stockButton->UseVisualStyleBackColor = false;
			// 
			// proveedorButton
			// 
			this->proveedorButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->proveedorButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->proveedorButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->proveedorButton->Location = System::Drawing::Point(385, 5);
			this->proveedorButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->proveedorButton->Name = L"proveedorButton";
			this->proveedorButton->Size = System::Drawing::Size(168, 49);
			this->proveedorButton->TabIndex = 2;
			this->proveedorButton->Text = L"Proveedor";
			this->proveedorButton->UseVisualStyleBackColor = false;
			// 
			// guardarButton
			// 
			this->guardarButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->guardarButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->guardarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guardarButton->Location = System::Drawing::Point(588, 109);
			this->guardarButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->modificarButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->modificarButton->Name = L"modificarButton";
			this->modificarButton->Size = System::Drawing::Size(156, 45);
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
			this->eliminarButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->eliminarButton->Name = L"eliminarButton";
			this->eliminarButton->Size = System::Drawing::Size(156, 46);
			this->eliminarButton->TabIndex = 5;
			this->eliminarButton->Text = L"Eliminar";
			this->eliminarButton->UseVisualStyleBackColor = false;
			// 
			// idClienteLabel
			// 
			this->idClienteLabel->AutoSize = true;
			this->idClienteLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idClienteLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->idClienteLabel->Location = System::Drawing::Point(30, 90);
			this->idClienteLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->idClienteLabel->Name = L"idClienteLabel";
			this->idClienteLabel->Size = System::Drawing::Size(92, 20);
			this->idClienteLabel->TabIndex = 6;
			this->idClienteLabel->Text = L"ID Cliente";
			// 
			// nombreLabel
			// 
			this->nombreLabel->AutoSize = true;
			this->nombreLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->nombreLabel->Location = System::Drawing::Point(30, 130);
			this->nombreLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nombreLabel->Name = L"nombreLabel";
			this->nombreLabel->Size = System::Drawing::Size(76, 20);
			this->nombreLabel->TabIndex = 7;
			this->nombreLabel->Text = L"Nombre";
			// 
			// apellidoLabel
			// 
			this->apellidoLabel->AutoSize = true;
			this->apellidoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellidoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->apellidoLabel->Location = System::Drawing::Point(30, 170);
			this->apellidoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->apellidoLabel->Name = L"apellidoLabel";
			this->apellidoLabel->Size = System::Drawing::Size(78, 20);
			this->apellidoLabel->TabIndex = 8;
			this->apellidoLabel->Text = L"Apellido";
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(30, 210);
			this->dniLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(39, 20);
			this->dniLabel->TabIndex = 9;
			this->dniLabel->Text = L"DNI";
			// 
			// telefonoLabel
			// 
			this->telefonoLabel->AutoSize = true;
			this->telefonoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefonoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->telefonoLabel->Location = System::Drawing::Point(30, 250);
			this->telefonoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->telefonoLabel->Name = L"telefonoLabel";
			this->telefonoLabel->Size = System::Drawing::Size(82, 20);
			this->telefonoLabel->TabIndex = 10;
			this->telefonoLabel->Text = L"Teléfono";
			// 
			// domicilioLabel
			// 
			this->domicilioLabel->AutoSize = true;
			this->domicilioLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->domicilioLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->domicilioLabel->Location = System::Drawing::Point(30, 290);
			this->domicilioLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->domicilioLabel->Name = L"domicilioLabel";
			this->domicilioLabel->Size = System::Drawing::Size(87, 20);
			this->domicilioLabel->TabIndex = 11;
			this->domicilioLabel->Text = L"Domicilio";
			// 
			// correoLabel
			// 
			this->correoLabel->AutoSize = true;
			this->correoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->correoLabel->Location = System::Drawing::Point(30, 330);
			this->correoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->correoLabel->Name = L"correoLabel";
			this->correoLabel->Size = System::Drawing::Size(67, 20);
			this->correoLabel->TabIndex = 12;
			this->correoLabel->Text = L"Correo";
			// 
			// idClienteText
			// 
			this->idClienteText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->idClienteText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idClienteText->Location = System::Drawing::Point(150, 90);
			this->idClienteText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->idClienteText->Name = L"idClienteText";
			this->idClienteText->Size = System::Drawing::Size(374, 28);
			this->idClienteText->TabIndex = 13;
			// 
			// nombreText
			// 
			this->nombreText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->nombreText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreText->Location = System::Drawing::Point(150, 130);
			this->nombreText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(374, 28);
			this->nombreText->TabIndex = 14;
			// 
			// apellidoText
			// 
			this->apellidoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->apellidoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellidoText->Location = System::Drawing::Point(150, 170);
			this->apellidoText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->apellidoText->Name = L"apellidoText";
			this->apellidoText->Size = System::Drawing::Size(374, 28);
			this->apellidoText->TabIndex = 15;
			// 
			// dniText
			// 
			this->dniText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dniText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniText->Location = System::Drawing::Point(150, 210);
			this->dniText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dniText->Name = L"dniText";
			this->dniText->Size = System::Drawing::Size(374, 28);
			this->dniText->TabIndex = 16;
			// 
			// telefonoText
			// 
			this->telefonoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->telefonoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefonoText->Location = System::Drawing::Point(150, 250);
			this->telefonoText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->telefonoText->Name = L"telefonoText";
			this->telefonoText->Size = System::Drawing::Size(374, 28);
			this->telefonoText->TabIndex = 17;
			// 
			// domicilioText
			// 
			this->domicilioText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->domicilioText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->domicilioText->Location = System::Drawing::Point(150, 290);
			this->domicilioText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->domicilioText->Name = L"domicilioText";
			this->domicilioText->Size = System::Drawing::Size(374, 28);
			this->domicilioText->TabIndex = 18;
			// 
			// correoText
			// 
			this->correoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->correoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correoText->Location = System::Drawing::Point(150, 330);
			this->correoText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->correoText->Name = L"correoText";
			this->correoText->Size = System::Drawing::Size(374, 28);
			this->correoText->TabIndex = 19;
			// 
			// dataGridClientes
			// 
			this->dataGridClientes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridClientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->idCliente,
					this->Nombre, this->Apellido, this->DNI, this->Telefono, this->Domicilio, this->Correo
			});
			this->dataGridClientes->Location = System::Drawing::Point(30, 411);
			this->dataGridClientes->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridClientes->Name = L"dataGridClientes";
			this->dataGridClientes->RowHeadersWidth = 51;
			this->dataGridClientes->RowTemplate->Height = 24;
			this->dataGridClientes->Size = System::Drawing::Size(751, 188);
			this->dataGridClientes->TabIndex = 20;
			// 
			// clientesLabel
			// 
			this->clientesLabel->AutoSize = true;
			this->clientesLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientesLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->clientesLabel->Location = System::Drawing::Point(584, 14);
			this->clientesLabel->Name = L"clientesLabel";
			this->clientesLabel->Size = System::Drawing::Size(249, 63);
			this->clientesLabel->TabIndex = 21;
			this->clientesLabel->Text = L"Clientes";
			// 
			// idCliente
			// 
			this->idCliente->HeaderText = L"idCliente";
			this->idCliente->MinimumWidth = 6;
			this->idCliente->Name = L"idCliente";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->MinimumWidth = 6;
			this->Apellido->Name = L"Apellido";
			// 
			// DNI
			// 
			this->DNI->HeaderText = L"DNI";
			this->DNI->MinimumWidth = 6;
			this->DNI->Name = L"DNI";
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Teléfono";
			this->Telefono->MinimumWidth = 6;
			this->Telefono->Name = L"Telefono";
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
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(808, 625);
			this->Controls->Add(this->clientesLabel);
			this->Controls->Add(this->dataGridClientes);
			this->Controls->Add(this->correoText);
			this->Controls->Add(this->domicilioText);
			this->Controls->Add(this->telefonoText);
			this->Controls->Add(this->dniText);
			this->Controls->Add(this->apellidoText);
			this->Controls->Add(this->nombreText);
			this->Controls->Add(this->idClienteText);
			this->Controls->Add(this->correoLabel);
			this->Controls->Add(this->domicilioLabel);
			this->Controls->Add(this->telefonoLabel);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->apellidoLabel);
			this->Controls->Add(this->nombreLabel);
			this->Controls->Add(this->idClienteLabel);
			this->Controls->Add(this->eliminarButton);
			this->Controls->Add(this->modificarButton);
			this->Controls->Add(this->guardarButton);
			this->Controls->Add(this->proveedorButton);
			this->Controls->Add(this->stockButton);
			this->Controls->Add(this->facturarButton);
			this->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridClientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

};
}
