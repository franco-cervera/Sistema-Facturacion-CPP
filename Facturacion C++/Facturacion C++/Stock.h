#pragma once

#include "Proveedor.h";
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
	/// Resumen de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
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
		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ facturarButton;
	protected:
	public: System::Windows::Forms::Button^ clientesButton;
	public: System::Windows::Forms::Button^ proveedorButton;
	public: System::Windows::Forms::Button^ guardarButton;
	public: System::Windows::Forms::Button^ modificarButton;
	public: System::Windows::Forms::Button^ eliminarButton;







	protected:

	protected:





	private: System::Windows::Forms::Label^ idProductoLabel;
	private: System::Windows::Forms::Label^ descripcionLabel;
	private: System::Windows::Forms::Label^ precioLabel;
	private: System::Windows::Forms::Label^ cantidadLabel;
	public: System::Windows::Forms::TextBox^ idProductoText;
	private:
	public: System::Windows::Forms::TextBox^ descripcionText;
	public: System::Windows::Forms::TextBox^ precioText;
	public: System::Windows::Forms::TextBox^ cantidadText;
	public: System::Windows::Forms::DataGridView^ dataGridStock;
	private: System::Windows::Forms::Label^ stockLabel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idProducto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripción;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	public:

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
			this->clientesButton = (gcnew System::Windows::Forms::Button());
			this->proveedorButton = (gcnew System::Windows::Forms::Button());
			this->guardarButton = (gcnew System::Windows::Forms::Button());
			this->modificarButton = (gcnew System::Windows::Forms::Button());
			this->eliminarButton = (gcnew System::Windows::Forms::Button());
			this->idProductoLabel = (gcnew System::Windows::Forms::Label());
			this->descripcionLabel = (gcnew System::Windows::Forms::Label());
			this->precioLabel = (gcnew System::Windows::Forms::Label());
			this->cantidadLabel = (gcnew System::Windows::Forms::Label());
			this->idProductoText = (gcnew System::Windows::Forms::TextBox());
			this->descripcionText = (gcnew System::Windows::Forms::TextBox());
			this->precioText = (gcnew System::Windows::Forms::TextBox());
			this->cantidadText = (gcnew System::Windows::Forms::TextBox());
			this->dataGridStock = (gcnew System::Windows::Forms::DataGridView());
			this->stockLabel = (gcnew System::Windows::Forms::Label());
			this->idProducto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripción = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->BeginInit();
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
			this->facturarButton->Size = System::Drawing::Size(168, 49);
			this->facturarButton->TabIndex = 0;
			this->facturarButton->Text = L"Facturar";
			this->facturarButton->UseVisualStyleBackColor = false;
			// 
			// clientesButton
			// 
			this->clientesButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->clientesButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clientesButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientesButton->Location = System::Drawing::Point(209, 5);
			this->clientesButton->Name = L"clientesButton";
			this->clientesButton->Size = System::Drawing::Size(168, 49);
			this->clientesButton->TabIndex = 1;
			this->clientesButton->Text = L"Clientes";
			this->clientesButton->UseVisualStyleBackColor = false;
			// 
			// proveedorButton
			// 
			this->proveedorButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->proveedorButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->proveedorButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->proveedorButton->Location = System::Drawing::Point(385, 5);
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
			this->guardarButton->Name = L"guardarButton";
			this->guardarButton->Size = System::Drawing::Size(168, 49);
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
			this->modificarButton->Size = System::Drawing::Size(168, 49);
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
			this->eliminarButton->Size = System::Drawing::Size(168, 49);
			this->eliminarButton->TabIndex = 5;
			this->eliminarButton->Text = L"Eliminar";
			this->eliminarButton->UseVisualStyleBackColor = false;
			// 
			// idProductoLabel
			// 
			this->idProductoLabel->AutoSize = true;
			this->idProductoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProductoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->idProductoLabel->Location = System::Drawing::Point(30, 90);
			this->idProductoLabel->Name = L"idProductoLabel";
			this->idProductoLabel->Size = System::Drawing::Size(111, 20);
			this->idProductoLabel->TabIndex = 6;
			this->idProductoLabel->Text = L"ID Producto";
			// 
			// descripcionLabel
			// 
			this->descripcionLabel->AutoSize = true;
			this->descripcionLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripcionLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->descripcionLabel->Location = System::Drawing::Point(30, 130);
			this->descripcionLabel->Name = L"descripcionLabel";
			this->descripcionLabel->Size = System::Drawing::Size(111, 20);
			this->descripcionLabel->TabIndex = 7;
			this->descripcionLabel->Text = L"Descripción";
			// 
			// precioLabel
			// 
			this->precioLabel->AutoSize = true;
			this->precioLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->precioLabel->Location = System::Drawing::Point(30, 170);
			this->precioLabel->Name = L"precioLabel";
			this->precioLabel->Size = System::Drawing::Size(64, 20);
			this->precioLabel->TabIndex = 8;
			this->precioLabel->Text = L"Precio";
			// 
			// cantidadLabel
			// 
			this->cantidadLabel->AutoSize = true;
			this->cantidadLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantidadLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->cantidadLabel->Location = System::Drawing::Point(30, 210);
			this->cantidadLabel->Name = L"cantidadLabel";
			this->cantidadLabel->Size = System::Drawing::Size(87, 20);
			this->cantidadLabel->TabIndex = 9;
			this->cantidadLabel->Text = L"Cantidad";
			// 
			// idProductoText
			// 
			this->idProductoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->idProductoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProductoText->Location = System::Drawing::Point(176, 90);
			this->idProductoText->Name = L"idProductoText";
			this->idProductoText->Size = System::Drawing::Size(374, 28);
			this->idProductoText->TabIndex = 10;
			// 
			// descripcionText
			// 
			this->descripcionText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->descripcionText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripcionText->Location = System::Drawing::Point(176, 130);
			this->descripcionText->Name = L"descripcionText";
			this->descripcionText->Size = System::Drawing::Size(374, 28);
			this->descripcionText->TabIndex = 11;
			// 
			// precioText
			// 
			this->precioText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->precioText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioText->Location = System::Drawing::Point(176, 170);
			this->precioText->Name = L"precioText";
			this->precioText->Size = System::Drawing::Size(374, 28);
			this->precioText->TabIndex = 12;
			// 
			// cantidadText
			// 
			this->cantidadText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->cantidadText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantidadText->Location = System::Drawing::Point(176, 210);
			this->cantidadText->Name = L"cantidadText";
			this->cantidadText->Size = System::Drawing::Size(374, 28);
			this->cantidadText->TabIndex = 13;
			// 
			// dataGridStock
			// 
			this->dataGridStock->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->idProducto,
					this->Descripción, this->Precio, this->Cantidad
			});
			this->dataGridStock->Location = System::Drawing::Point(30, 316);
			this->dataGridStock->Name = L"dataGridStock";
			this->dataGridStock->RowHeadersWidth = 51;
			this->dataGridStock->RowTemplate->Height = 24;
			this->dataGridStock->Size = System::Drawing::Size(596, 192);
			this->dataGridStock->TabIndex = 14;
			// 
			// stockLabel
			// 
			this->stockLabel->AutoSize = true;
			this->stockLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stockLabel->Location = System::Drawing::Point(592, 9);
			this->stockLabel->Name = L"stockLabel";
			this->stockLabel->Size = System::Drawing::Size(185, 63);
			this->stockLabel->TabIndex = 15;
			this->stockLabel->Text = L"Stock";
			// 
			// idProducto
			// 
			this->idProducto->HeaderText = L"idProducto";
			this->idProducto->MinimumWidth = 6;
			this->idProducto->Name = L"idProducto";
			// 
			// Descripción
			// 
			this->Descripción->HeaderText = L"Descripción";
			this->Descripción->MinimumWidth = 6;
			this->Descripción->Name = L"Descripción";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 6;
			this->Cantidad->Name = L"Cantidad";
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(808, 526);
			this->Controls->Add(this->stockLabel);
			this->Controls->Add(this->dataGridStock);
			this->Controls->Add(this->cantidadText);
			this->Controls->Add(this->precioText);
			this->Controls->Add(this->descripcionText);
			this->Controls->Add(this->idProductoText);
			this->Controls->Add(this->cantidadLabel);
			this->Controls->Add(this->precioLabel);
			this->Controls->Add(this->descripcionLabel);
			this->Controls->Add(this->idProductoLabel);
			this->Controls->Add(this->eliminarButton);
			this->Controls->Add(this->modificarButton);
			this->Controls->Add(this->guardarButton);
			this->Controls->Add(this->proveedorButton);
			this->Controls->Add(this->clientesButton);
			this->Controls->Add(this->facturarButton);
			this->Name = L"Stock";
			this->Text = L"Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

};
}
