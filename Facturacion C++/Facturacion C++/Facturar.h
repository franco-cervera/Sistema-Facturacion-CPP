#pragma once

#include "Stock.h";
#include "Proveedor.h";
#include "Clientes.h";

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Facturar
	/// </summary>
	public ref class Facturar : public System::Windows::Forms::Form
	{
	public:
		Facturar(void)
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
		~Facturar()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ stockButton;
	protected:
	public: System::Windows::Forms::Button^ clientesButton;
	public: System::Windows::Forms::Button^ proveedorButton;
	public: System::Windows::Forms::Button^ guardarButton;
	public: System::Windows::Forms::Button^ modificarButton;
	public: System::Windows::Forms::Button^ eliminarButton;
	public: System::Windows::Forms::Button^ calcularButton;







	protected:

	protected:






	private: System::Windows::Forms::Label^ clienteLabel;
	private: System::Windows::Forms::Label^ productoLabel;
	private: System::Windows::Forms::Label^ idClienteLabel;
	private: System::Windows::Forms::Label^ nombreLabel;
	private: System::Windows::Forms::Label^ apellidoLabel;




	private: System::Windows::Forms::Label^ idProductoLabel;
	private: System::Windows::Forms::Label^ descripcionLabel;
	private: System::Windows::Forms::Label^ precioLabel;
	private: System::Windows::Forms::Label^ cantidadLabel;

	private:
	public: System::Windows::Forms::TextBox^ idClienteText;
	public: System::Windows::Forms::TextBox^ nombreText;
	public: System::Windows::Forms::TextBox^ apellidoText;
	public: System::Windows::Forms::TextBox^ idProductoText;
	public: System::Windows::Forms::TextBox^ descripcionText;
	public: System::Windows::Forms::TextBox^ precioText;
	public: System::Windows::Forms::TextBox^ cantidadText;




































	private: System::Windows::Forms::Label^ subtotalLabel;
	private: System::Windows::Forms::Label^ descuentoLabel;
	private: System::Windows::Forms::Label^ totalLabel;
	public: System::Windows::Forms::TextBox^ subtotalText;
	private:
	public: System::Windows::Forms::TextBox^ descuentoText;
	public: System::Windows::Forms::TextBox^ totalText;



	private: System::Windows::Forms::Label^ dniLabel;
	public: System::Windows::Forms::TextBox^ dniText;

public:







private: System::Windows::Forms::Label^ facturarLabel;
public: System::Windows::Forms::Button^ aplicarbutton;
public: System::Windows::Forms::DataGridView^ dataGridFacturar;

public:

public:

public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idCliente;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ idProducto;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descrip;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cant;

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
			this->stockButton = (gcnew System::Windows::Forms::Button());
			this->clientesButton = (gcnew System::Windows::Forms::Button());
			this->proveedorButton = (gcnew System::Windows::Forms::Button());
			this->guardarButton = (gcnew System::Windows::Forms::Button());
			this->modificarButton = (gcnew System::Windows::Forms::Button());
			this->eliminarButton = (gcnew System::Windows::Forms::Button());
			this->calcularButton = (gcnew System::Windows::Forms::Button());
			this->clienteLabel = (gcnew System::Windows::Forms::Label());
			this->productoLabel = (gcnew System::Windows::Forms::Label());
			this->idClienteLabel = (gcnew System::Windows::Forms::Label());
			this->nombreLabel = (gcnew System::Windows::Forms::Label());
			this->apellidoLabel = (gcnew System::Windows::Forms::Label());
			this->idProductoLabel = (gcnew System::Windows::Forms::Label());
			this->descripcionLabel = (gcnew System::Windows::Forms::Label());
			this->precioLabel = (gcnew System::Windows::Forms::Label());
			this->cantidadLabel = (gcnew System::Windows::Forms::Label());
			this->idClienteText = (gcnew System::Windows::Forms::TextBox());
			this->nombreText = (gcnew System::Windows::Forms::TextBox());
			this->apellidoText = (gcnew System::Windows::Forms::TextBox());
			this->idProductoText = (gcnew System::Windows::Forms::TextBox());
			this->descripcionText = (gcnew System::Windows::Forms::TextBox());
			this->precioText = (gcnew System::Windows::Forms::TextBox());
			this->cantidadText = (gcnew System::Windows::Forms::TextBox());
			this->subtotalLabel = (gcnew System::Windows::Forms::Label());
			this->descuentoLabel = (gcnew System::Windows::Forms::Label());
			this->totalLabel = (gcnew System::Windows::Forms::Label());
			this->subtotalText = (gcnew System::Windows::Forms::TextBox());
			this->descuentoText = (gcnew System::Windows::Forms::TextBox());
			this->totalText = (gcnew System::Windows::Forms::TextBox());
			this->dniLabel = (gcnew System::Windows::Forms::Label());
			this->dniText = (gcnew System::Windows::Forms::TextBox());
			this->facturarLabel = (gcnew System::Windows::Forms::Label());
			this->aplicarbutton = (gcnew System::Windows::Forms::Button());
			this->dataGridFacturar = (gcnew System::Windows::Forms::DataGridView());
			this->idCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->idProducto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descrip = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cant = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFacturar))->BeginInit();
			this->SuspendLayout();
			// 
			// stockButton
			// 
			this->stockButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->stockButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockButton->Location = System::Drawing::Point(34, 5);
			this->stockButton->Name = L"stockButton";
			this->stockButton->Size = System::Drawing::Size(168, 49);
			this->stockButton->TabIndex = 0;
			this->stockButton->Text = L"Stock";
			this->stockButton->UseVisualStyleBackColor = false;
			// 
			// clientesButton
			// 
			this->clientesButton->BackColor = System::Drawing::SystemColors::ScrollBar;
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
			this->eliminarButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminarButton->Location = System::Drawing::Point(588, 249);
			this->eliminarButton->Name = L"eliminarButton";
			this->eliminarButton->Size = System::Drawing::Size(168, 49);
			this->eliminarButton->TabIndex = 5;
			this->eliminarButton->Text = L"Eliminar";
			this->eliminarButton->UseVisualStyleBackColor = false;
			// 
			// calcularButton
			// 
			this->calcularButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->calcularButton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcularButton->Location = System::Drawing::Point(588, 336);
			this->calcularButton->Name = L"calcularButton";
			this->calcularButton->Size = System::Drawing::Size(168, 49);
			this->calcularButton->TabIndex = 6;
			this->calcularButton->Text = L"Calcular";
			this->calcularButton->UseVisualStyleBackColor = false;
			// 
			// clienteLabel
			// 
			this->clienteLabel->AutoSize = true;
			this->clienteLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clienteLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->clienteLabel->Location = System::Drawing::Point(303, 63);
			this->clienteLabel->Name = L"clienteLabel";
			this->clienteLabel->Size = System::Drawing::Size(82, 24);
			this->clienteLabel->TabIndex = 7;
			this->clienteLabel->Text = L"Cliente";
			// 
			// productoLabel
			// 
			this->productoLabel->AutoSize = true;
			this->productoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->productoLabel->Location = System::Drawing::Point(303, 273);
			this->productoLabel->Name = L"productoLabel";
			this->productoLabel->Size = System::Drawing::Size(104, 24);
			this->productoLabel->TabIndex = 8;
			this->productoLabel->Text = L"Producto";
			// 
			// idClienteLabel
			// 
			this->idClienteLabel->AutoSize = true;
			this->idClienteLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idClienteLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->idClienteLabel->Location = System::Drawing::Point(30, 90);
			this->idClienteLabel->Name = L"idClienteLabel";
			this->idClienteLabel->Size = System::Drawing::Size(92, 20);
			this->idClienteLabel->TabIndex = 9;
			this->idClienteLabel->Text = L"ID Cliente";
			// 
			// nombreLabel
			// 
			this->nombreLabel->AutoSize = true;
			this->nombreLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->nombreLabel->Location = System::Drawing::Point(30, 130);
			this->nombreLabel->Name = L"nombreLabel";
			this->nombreLabel->Size = System::Drawing::Size(76, 20);
			this->nombreLabel->TabIndex = 10;
			this->nombreLabel->Text = L"Nombre";
			// 
			// apellidoLabel
			// 
			this->apellidoLabel->AutoSize = true;
			this->apellidoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellidoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->apellidoLabel->Location = System::Drawing::Point(30, 170);
			this->apellidoLabel->Name = L"apellidoLabel";
			this->apellidoLabel->Size = System::Drawing::Size(78, 20);
			this->apellidoLabel->TabIndex = 11;
			this->apellidoLabel->Text = L"Apellido";
			// 
			// idProductoLabel
			// 
			this->idProductoLabel->AutoSize = true;
			this->idProductoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProductoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->idProductoLabel->Location = System::Drawing::Point(30, 300);
			this->idProductoLabel->Name = L"idProductoLabel";
			this->idProductoLabel->Size = System::Drawing::Size(111, 20);
			this->idProductoLabel->TabIndex = 16;
			this->idProductoLabel->Text = L"ID Producto";
			// 
			// descripcionLabel
			// 
			this->descripcionLabel->AutoSize = true;
			this->descripcionLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripcionLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->descripcionLabel->Location = System::Drawing::Point(30, 340);
			this->descripcionLabel->Name = L"descripcionLabel";
			this->descripcionLabel->Size = System::Drawing::Size(111, 20);
			this->descripcionLabel->TabIndex = 17;
			this->descripcionLabel->Text = L"Descripción";
			// 
			// precioLabel
			// 
			this->precioLabel->AutoSize = true;
			this->precioLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->precioLabel->Location = System::Drawing::Point(30, 380);
			this->precioLabel->Name = L"precioLabel";
			this->precioLabel->Size = System::Drawing::Size(64, 20);
			this->precioLabel->TabIndex = 18;
			this->precioLabel->Text = L"Precio";
			// 
			// cantidadLabel
			// 
			this->cantidadLabel->AutoSize = true;
			this->cantidadLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantidadLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->cantidadLabel->Location = System::Drawing::Point(30, 420);
			this->cantidadLabel->Name = L"cantidadLabel";
			this->cantidadLabel->Size = System::Drawing::Size(87, 20);
			this->cantidadLabel->TabIndex = 19;
			this->cantidadLabel->Text = L"Cantidad";
			// 
			// idClienteText
			// 
			this->idClienteText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->idClienteText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idClienteText->Location = System::Drawing::Point(150, 90);
			this->idClienteText->Name = L"idClienteText";
			this->idClienteText->Size = System::Drawing::Size(374, 28);
			this->idClienteText->TabIndex = 21;
			// 
			// nombreText
			// 
			this->nombreText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->nombreText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreText->Location = System::Drawing::Point(150, 130);
			this->nombreText->Name = L"nombreText";
			this->nombreText->Size = System::Drawing::Size(374, 28);
			this->nombreText->TabIndex = 22;
			// 
			// apellidoText
			// 
			this->apellidoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->apellidoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellidoText->Location = System::Drawing::Point(150, 170);
			this->apellidoText->Name = L"apellidoText";
			this->apellidoText->Size = System::Drawing::Size(374, 28);
			this->apellidoText->TabIndex = 23;
			// 
			// idProductoText
			// 
			this->idProductoText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->idProductoText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idProductoText->Location = System::Drawing::Point(150, 300);
			this->idProductoText->Name = L"idProductoText";
			this->idProductoText->Size = System::Drawing::Size(374, 28);
			this->idProductoText->TabIndex = 28;
			// 
			// descripcionText
			// 
			this->descripcionText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->descripcionText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descripcionText->Location = System::Drawing::Point(150, 340);
			this->descripcionText->Name = L"descripcionText";
			this->descripcionText->Size = System::Drawing::Size(374, 28);
			this->descripcionText->TabIndex = 29;
			// 
			// precioText
			// 
			this->precioText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->precioText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioText->Location = System::Drawing::Point(150, 380);
			this->precioText->Name = L"precioText";
			this->precioText->Size = System::Drawing::Size(374, 28);
			this->precioText->TabIndex = 30;
			// 
			// cantidadText
			// 
			this->cantidadText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->cantidadText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantidadText->Location = System::Drawing::Point(150, 420);
			this->cantidadText->Name = L"cantidadText";
			this->cantidadText->Size = System::Drawing::Size(374, 28);
			this->cantidadText->TabIndex = 31;
			// 
			// subtotalLabel
			// 
			this->subtotalLabel->AutoSize = true;
			this->subtotalLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtotalLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->subtotalLabel->Location = System::Drawing::Point(626, 397);
			this->subtotalLabel->Name = L"subtotalLabel";
			this->subtotalLabel->Size = System::Drawing::Size(83, 20);
			this->subtotalLabel->TabIndex = 32;
			this->subtotalLabel->Text = L"Subtotal";
			// 
			// descuentoLabel
			// 
			this->descuentoLabel->AutoSize = true;
			this->descuentoLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descuentoLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->descuentoLabel->Location = System::Drawing::Point(205, 478);
			this->descuentoLabel->Name = L"descuentoLabel";
			this->descuentoLabel->Size = System::Drawing::Size(101, 20);
			this->descuentoLabel->TabIndex = 33;
			this->descuentoLabel->Text = L"Descuento";
			// 
			// totalLabel
			// 
			this->totalLabel->AutoSize = true;
			this->totalLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->totalLabel->Location = System::Drawing::Point(625, 470);
			this->totalLabel->Name = L"totalLabel";
			this->totalLabel->Size = System::Drawing::Size(71, 28);
			this->totalLabel->TabIndex = 34;
			this->totalLabel->Text = L"Total";
			// 
			// subtotalText
			// 
			this->subtotalText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtotalText->Location = System::Drawing::Point(604, 420);
			this->subtotalText->Name = L"subtotalText";
			this->subtotalText->ReadOnly = true;
			this->subtotalText->Size = System::Drawing::Size(126, 27);
			this->subtotalText->TabIndex = 35;
			this->subtotalText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// descuentoText
			// 
			this->descuentoText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descuentoText->Location = System::Drawing::Point(194, 501);
			this->descuentoText->Name = L"descuentoText";
			this->descuentoText->Size = System::Drawing::Size(126, 27);
			this->descuentoText->TabIndex = 36;
			this->descuentoText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// totalText
			// 
			this->totalText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalText->Location = System::Drawing::Point(604, 501);
			this->totalText->Name = L"totalText";
			this->totalText->ReadOnly = true;
			this->totalText->Size = System::Drawing::Size(126, 30);
			this->totalText->TabIndex = 37;
			this->totalText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dniLabel
			// 
			this->dniLabel->AutoSize = true;
			this->dniLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->dniLabel->Location = System::Drawing::Point(30, 210);
			this->dniLabel->Name = L"dniLabel";
			this->dniLabel->Size = System::Drawing::Size(39, 20);
			this->dniLabel->TabIndex = 12;
			this->dniLabel->Text = L"DNI";
			// 
			// dniText
			// 
			this->dniText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dniText->Font = (gcnew System::Drawing::Font(L"Rubik", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dniText->Location = System::Drawing::Point(150, 210);
			this->dniText->Name = L"dniText";
			this->dniText->Size = System::Drawing::Size(374, 28);
			this->dniText->TabIndex = 24;
			// 
			// facturarLabel
			// 
			this->facturarLabel->AutoSize = true;
			this->facturarLabel->Font = (gcnew System::Drawing::Font(L"Rubik", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facturarLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->facturarLabel->Location = System::Drawing::Point(567, 9);
			this->facturarLabel->Name = L"facturarLabel";
			this->facturarLabel->Size = System::Drawing::Size(232, 56);
			this->facturarLabel->TabIndex = 38;
			this->facturarLabel->Text = L"Facturar";
			// 
			// aplicarbutton
			// 
			this->aplicarbutton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->aplicarbutton->Font = (gcnew System::Drawing::Font(L"Rubik", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aplicarbutton->Location = System::Drawing::Point(356, 479);
			this->aplicarbutton->Name = L"aplicarbutton";
			this->aplicarbutton->Size = System::Drawing::Size(168, 49);
			this->aplicarbutton->TabIndex = 39;
			this->aplicarbutton->Text = L"Aplicar";
			this->aplicarbutton->UseVisualStyleBackColor = false;
			// 
			// dataGridFacturar
			// 
			this->dataGridFacturar->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridFacturar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridFacturar->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->idCliente,
					this->Nombre, this->Apellido, this->DNI, this->idProducto, this->Descrip, this->Precio, this->Cant
			});
			this->dataGridFacturar->Location = System::Drawing::Point(34, 555);
			this->dataGridFacturar->Name = L"dataGridFacturar";
			this->dataGridFacturar->RowHeadersWidth = 51;
			this->dataGridFacturar->RowTemplate->Height = 24;
			this->dataGridFacturar->Size = System::Drawing::Size(722, 229);
			this->dataGridFacturar->TabIndex = 40;
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
			// idProducto
			// 
			this->idProducto->HeaderText = L"idProducto";
			this->idProducto->MinimumWidth = 6;
			this->idProducto->Name = L"idProducto";
			// 
			// Descrip
			// 
			this->Descrip->HeaderText = L"Descrip";
			this->Descrip->MinimumWidth = 6;
			this->Descrip->Name = L"Descrip";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			// 
			// Cant
			// 
			this->Cant->HeaderText = L"Cant";
			this->Cant->MinimumWidth = 6;
			this->Cant->Name = L"Cant";
			// 
			// Facturar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(811, 796);
			this->Controls->Add(this->dataGridFacturar);
			this->Controls->Add(this->aplicarbutton);
			this->Controls->Add(this->facturarLabel);
			this->Controls->Add(this->totalText);
			this->Controls->Add(this->descuentoText);
			this->Controls->Add(this->subtotalText);
			this->Controls->Add(this->totalLabel);
			this->Controls->Add(this->descuentoLabel);
			this->Controls->Add(this->subtotalLabel);
			this->Controls->Add(this->cantidadText);
			this->Controls->Add(this->precioText);
			this->Controls->Add(this->descripcionText);
			this->Controls->Add(this->idProductoText);
			this->Controls->Add(this->dniText);
			this->Controls->Add(this->apellidoText);
			this->Controls->Add(this->nombreText);
			this->Controls->Add(this->idClienteText);
			this->Controls->Add(this->cantidadLabel);
			this->Controls->Add(this->precioLabel);
			this->Controls->Add(this->descripcionLabel);
			this->Controls->Add(this->idProductoLabel);
			this->Controls->Add(this->dniLabel);
			this->Controls->Add(this->apellidoLabel);
			this->Controls->Add(this->nombreLabel);
			this->Controls->Add(this->idClienteLabel);
			this->Controls->Add(this->productoLabel);
			this->Controls->Add(this->clienteLabel);
			this->Controls->Add(this->calcularButton);
			this->Controls->Add(this->eliminarButton);
			this->Controls->Add(this->modificarButton);
			this->Controls->Add(this->guardarButton);
			this->Controls->Add(this->proveedorButton);
			this->Controls->Add(this->clientesButton);
			this->Controls->Add(this->stockButton);
			this->Name = L"Facturar";
			this->Text = L"Facturar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFacturar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

};
}
