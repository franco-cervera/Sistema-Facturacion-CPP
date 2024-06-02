#include "pch.h"
#include "Log.h"
#include "Registro.h";
#include "Clientes.h";
#include "Stock.h";
#include "Proveedor.h";
#include "Facturar.h";
#include "Usuario.h";

using namespace System;
using namespace System::Windows::Forms;

ref class Controlador {

private: 
	CppCLRWinFormsProject::Log^ logForm;
	CppCLRWinFormsProject::Registro^ registroForm;
	CppCLRWinFormsProject::Proveedor^ proveedorForm;
	CppCLRWinFormsProject::Stock^ stockForm;
	CppCLRWinFormsProject::Clientes^ clientesForm;
	CppCLRWinFormsProject::Facturar^ facturarForm;
	Usuario^ usuario;

	double subtotal = 0.0;
	double total = 0.0;
	double descuento = 0.0;

	

public:
	Controlador() {
	
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		// Instancias

		this->logForm = gcnew CppCLRWinFormsProject::Log();
		this->registroForm = gcnew CppCLRWinFormsProject::Registro();
		this->proveedorForm = gcnew CppCLRWinFormsProject::Proveedor();
		this->stockForm = gcnew CppCLRWinFormsProject::Stock();
		this->clientesForm = gcnew CppCLRWinFormsProject::Clientes();
		this->facturarForm = gcnew CppCLRWinFormsProject::Facturar();

		//Log
		this->logForm->registrarButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_registroForm);
		this->logForm->ingresarButton->Click += gcnew System::EventHandler(this, &Controlador::Ingresar_logForm);

		//Registro
		this->registroForm->registrarButton->Click += gcnew System::EventHandler(this, &Controlador::Registrar_registroForm);
		this->registroForm->regresarButton->Click += gcnew System::EventHandler(this, &Controlador::Regresar_registroForm);
		this->registroForm->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Controlador::FinalizarApp);

		//Clientes
		this->clientesForm->facturarButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_facturarForm);
		this->clientesForm->stockButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_stockForm);
		this->clientesForm->proveedorButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_proveedorForm);
		this->clientesForm->guardarButton->Click += gcnew System::EventHandler(this, &Controlador::Agregar_clientes);
		this->clientesForm->eliminarButton->Click += gcnew System::EventHandler(this, &Controlador::Eliminar_clientes);
		this->clientesForm->modificarButton->Click += gcnew System::EventHandler(this, &Controlador::Modificar_clientes);
		this->clientesForm->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Controlador::FinalizarApp);

		//Stock
		this->stockForm->facturarButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_facturarForm);
		this->stockForm->clientesButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_clientesForm);
		this->stockForm->proveedorButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_proveedorForm);
		this->stockForm->guardarButton->Click += gcnew System::EventHandler(this, &Controlador::Agregar_stock);
		this->stockForm->eliminarButton->Click += gcnew System::EventHandler(this, &Controlador::Eliminar_stock);
		this->stockForm->modificarButton->Click += gcnew System::EventHandler(this, &Controlador::Modificar_stock);
		this->stockForm->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Controlador::FinalizarApp);

		//Proveedor
		this->proveedorForm->facturarButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_facturarForm);
		this->proveedorForm->stockButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_stockForm);
		this->proveedorForm->clientesButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_clientesForm);
		this->proveedorForm->guardarButton->Click += gcnew System::EventHandler(this, &Controlador::Agregar_proveedor);
		this->proveedorForm->eliminarButton->Click += gcnew System::EventHandler(this, &Controlador::Eliminar_proveedor);
		this->proveedorForm->modificarButton->Click += gcnew System::EventHandler(this, &Controlador::Modificar_proveedor);
		this->proveedorForm->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Controlador::FinalizarApp);

		//Facturar
		this->facturarForm->proveedorButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_proveedorForm);
		this->facturarForm->stockButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_stockForm);
		this->facturarForm->clientesButton->Click += gcnew System::EventHandler(this, &Controlador::Abrir_clientesForm);
		this->facturarForm->guardarButton->Click += gcnew System::EventHandler(this, &Controlador::Agregar_facturar);
		this->facturarForm->eliminarButton->Click += gcnew System::EventHandler(this, &Controlador::Eliminar_facturar);
		this->facturarForm->modificarButton->Click += gcnew System::EventHandler(this, &Controlador::Modificar_facturar);
		this->facturarForm->calcularButton->Click += gcnew System::EventHandler(this, &Controlador::Aplicar_Subtotal);
		this->facturarForm->aplicarbutton->Click += gcnew System::EventHandler(this, &Controlador::Aplicar_TotalconDescuento);
		this->facturarForm->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Controlador::FinalizarApp);


		Application::Run(logForm);
	}

	// **** Log ****
	Void Ingresar_logForm(System::Object^ sender, System::EventArgs^ e) {
		if (this->usuario) {

			try {

				String^ username = this->logForm->usuarioText->Text;
				String^ password = this->logForm->passwordText->Text;

				if (username == this->usuario->getLegajo() && password == this->usuario->getPassword()) {
					MessageBox::Show("Inicio de sesión exitoso.", "Login", MessageBoxButtons::OK, MessageBoxIcon::Information);
					this->clientesForm->Show();
					this->logForm->Hide();

				} else {
					MessageBox::Show("Usuario o contraseña incorrectos", "Login", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (System::FormatException^) { }

		} else {
			MessageBox::Show("Debe registrarse primero", "Login", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}

	// **** Registro ****
	Void Abrir_registroForm(System::Object^ sender, System::EventArgs^ e) {
		this->registroForm->Show();
		this->logForm->Hide();
	}
	
	Void Regresar_registroForm(System::Object^ sender, System::EventArgs^ e) {
		this->registroForm->Hide();
		this->logForm->Show();
	}

	Void Registrar_registroForm(System::Object^ sender, System::EventArgs^ e) {

		String^ nombre = this->registroForm->nombreText->Text;
		String^ apellido = this->registroForm->apellidoText->Text;
		String^ legajo = this->registroForm->legajoText->Text;
		String^ password = this->registroForm->passwordText->Text;
		String^ correo = this->registroForm->correoText->Text;
		String^ sector = this->registroForm->sectorText->Text;

		usuario = gcnew Usuario(nombre, apellido, legajo, password, correo, sector);

		MessageBox::Show("Registro exitoso.", "Registro", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->registroForm->Hide();
		this->logForm->Show();

	}


	// **** Apertura de formularios ****
	Void Abrir_clientesForm(System::Object^ sender, System::EventArgs^ e) {
		this->clientesForm->Show();
		this->facturarForm->Hide();
		this->stockForm->Hide();
		this->proveedorForm->Hide();
	
	}

	Void Abrir_facturarForm(System::Object^ sender, System::EventArgs^ e) {
		this->facturarForm->Show();
		this->clientesForm->Hide();
		this->stockForm->Hide();
		this->proveedorForm->Hide();
	}

	Void Abrir_stockForm(System::Object^ sender, System::EventArgs^ e) {
		this->stockForm->Show();
		this->clientesForm->Hide();
		this->facturarForm->Hide();
		this->proveedorForm->Hide();
	}

	Void Abrir_proveedorForm(System::Object^ sender, System::EventArgs^ e) {
		this->proveedorForm->Show();
		this->facturarForm->Hide();
		this->stockForm->Hide();
		this->clientesForm->Hide();
	}
	// **** Cierre de formularios ****
	Void Cerrar_clientesForm(System::Object^ sender, System::EventArgs^ e) {
		this->clientesForm->Hide();
	}

	Void Cerrar_facturarForm(System::Object^ sender, System::EventArgs^ e) {
		this->facturarForm->Hide();
	}

	Void Cerrar_stockForm(System::Object^ sender, System::EventArgs^ e) {
		this->stockForm->Hide();
	}

	Void Cerrar_proveedorForm(System::Object^ sender, System::EventArgs^ e) {
		this->proveedorForm->Hide();
	}

	// **** Clientes ****
	Void Agregar_clientes(System::Object^ sender, System::EventArgs^ e) {
		
		
		this->clientesForm->dataGridClientes->Rows->Add(

				this->clientesForm->idClienteText->Text,
				this->clientesForm->nombreText->Text,
				this->clientesForm->apellidoText->Text,
				this->clientesForm->dniText->Text,
				this->clientesForm->telefonoText->Text,
				this->clientesForm->domicilioText->Text,
				this->clientesForm->correoText->Text

			);

	}

	Void Eliminar_clientes(System::Object^ sender, System::EventArgs^ e) {
		if (this->clientesForm->dataGridClientes->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->clientesForm->dataGridClientes->SelectedRows[0]->Index;
			this->clientesForm->dataGridClientes->Rows->RemoveAt(indiceSeleccionado);

		}
		else {

			MessageBox::Show("Por favor, selecciona una fila para eliminar", "Clientes", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	Void Modificar_clientes(System::Object^ sender, System::EventArgs^ e) {
		if (this->clientesForm->dataGridClientes->SelectedRows->Count > 0) {
			
			int indiceSeleccionado = this->clientesForm->dataGridClientes->SelectedRows[0]->Index;


			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[0]->Value = this->clientesForm->idClienteText->Text;
			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[1]->Value = this->clientesForm->nombreText->Text;
			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[2]->Value = this->clientesForm->apellidoText->Text;
			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[3]->Value = this->clientesForm->dniText->Text;
			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[4]->Value = this->clientesForm->telefonoText->Text;
			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[5]->Value = this->clientesForm->domicilioText->Text;
			this->clientesForm->dataGridClientes->Rows[indiceSeleccionado]->Cells[6]->Value = this->clientesForm->correoText->Text;
		}
		else {
		
			MessageBox::Show("Por favor, selecciona una fila para modificar", "Clientes", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// **** Stock ****
	Void Agregar_stock(System::Object^ sender, System::EventArgs^ e) {
		this->stockForm->dataGridStock->Rows->Add(

			this->stockForm->idProductoText->Text,
			this->stockForm->descripcionText->Text,
			this->stockForm->precioText->Text,
			this->stockForm->cantidadText->Text

		);
	}

	Void Eliminar_stock(System::Object^ sender, System::EventArgs^ e) {
		if (this->stockForm->dataGridStock->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->stockForm->dataGridStock->SelectedRows[0]->Index;
			this->stockForm->dataGridStock->Rows->RemoveAt(indiceSeleccionado);

		}
		else {
			MessageBox::Show("Por favor, selecciona una fila para eliminar", "Stock", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	Void Modificar_stock(System::Object^ sender, System::EventArgs^ e) {
		if (this->stockForm->dataGridStock->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->stockForm->dataGridStock->SelectedRows[0]->Index;


			this->stockForm->dataGridStock->Rows[indiceSeleccionado]->Cells[0]->Value = this->stockForm->idProductoText->Text;
			this->stockForm->dataGridStock->Rows[indiceSeleccionado]->Cells[1]->Value = this->stockForm->descripcionText->Text;
			this->stockForm->dataGridStock->Rows[indiceSeleccionado]->Cells[2]->Value = this->stockForm->precioText->Text;
			this->stockForm->dataGridStock->Rows[indiceSeleccionado]->Cells[3]->Value = this->stockForm->cantidadText->Text;
		}
		else {

			MessageBox::Show("Por favor, selecciona una fila para modificar","Stock", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// **** Proveedor ****
	Void Agregar_proveedor(System::Object^ sender, System::EventArgs^ e) {
		this->proveedorForm->dataGridProveedor->Rows->Add(

			this->proveedorForm->idProveedorText->Text,
			this->proveedorForm->nombreText->Text,
			this->proveedorForm->cuitCuilText->Text,
			this->proveedorForm->telefonoText->Text,
			this->proveedorForm->domicilioText->Text,
			this->proveedorForm->correoText->Text

		);
	}

	Void Eliminar_proveedor(System::Object^ sender, System::EventArgs^ e) {
		if (this->proveedorForm->dataGridProveedor->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->proveedorForm->dataGridProveedor->SelectedRows[0]->Index;
			this->proveedorForm->dataGridProveedor->Rows->RemoveAt(indiceSeleccionado);

		}
		else {
			MessageBox::Show("Por favor, selecciona una fila para eliminar", "Stock", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	Void Modificar_proveedor(System::Object^ sender, System::EventArgs^ e) {
		if (this->proveedorForm->dataGridProveedor->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->proveedorForm->dataGridProveedor->SelectedRows[0]->Index;

			this->proveedorForm->dataGridProveedor->Rows[indiceSeleccionado]->Cells[0]->Value = this->proveedorForm->idProveedorText->Text;
			this->proveedorForm->dataGridProveedor->Rows[indiceSeleccionado]->Cells[1]->Value = this->proveedorForm->nombreText->Text;
			this->proveedorForm->dataGridProveedor->Rows[indiceSeleccionado]->Cells[2]->Value = this->proveedorForm->cuitCuilText->Text;
			this->proveedorForm->dataGridProveedor->Rows[indiceSeleccionado]->Cells[3]->Value = this->proveedorForm->telefonoText->Text;
			this->proveedorForm->dataGridProveedor->Rows[indiceSeleccionado]->Cells[4]->Value = this->proveedorForm->domicilioText->Text;
			this->proveedorForm->dataGridProveedor->Rows[indiceSeleccionado]->Cells[5]->Value = this->proveedorForm->correoText->Text;
		}
		else {

			MessageBox::Show("Por favor, selecciona una fila para modificar", "Proveedor", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// **** Facturar ****
	Void Agregar_facturar(System::Object^ sender, System::EventArgs^ e) {
		this->facturarForm->dataGridFacturar->Rows->Add(

			this->facturarForm->idClienteText->Text,
			this->facturarForm->nombreText->Text,
			this->facturarForm->apellidoText->Text,
			this->facturarForm->dniText->Text,
			this->facturarForm->idProductoText->Text,
			this->facturarForm->descripcionText->Text, 
			this->facturarForm->precioText->Text,
			this->facturarForm->cantidadText->Text


		);
	}

	Void Eliminar_facturar(System::Object^ sender, System::EventArgs^ e) {
		if (this->facturarForm->dataGridFacturar->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->facturarForm->dataGridFacturar->SelectedRows[0]->Index;
			this->facturarForm->dataGridFacturar->Rows->RemoveAt(indiceSeleccionado);
			this->subtotal = 0.0;
			this->total = 0.0;
			this->Actualizar_Total_Subtotal();

		}
		else {
			MessageBox::Show("Por favor, selecciona una fila para eliminar", "Facturar", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	Void Modificar_facturar(System::Object^ sender, System::EventArgs^ e) {
		if (this->facturarForm->dataGridFacturar->SelectedRows->Count > 0) {

			int indiceSeleccionado = this->facturarForm->dataGridFacturar->SelectedRows[0]->Index;

			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[0]->Value = this->facturarForm->idClienteText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[1]->Value = this->facturarForm->nombreText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[2]->Value = this->facturarForm->apellidoText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[3]->Value = this->facturarForm->dniText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[4]->Value = this->facturarForm->idProductoText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[5]->Value = this->facturarForm->descripcionText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[6]->Value = this->facturarForm->precioText->Text;
			this->facturarForm->dataGridFacturar->Rows[indiceSeleccionado]->Cells[7]->Value = this->facturarForm->cantidadText->Text;
		}
		else {

			MessageBox::Show("Por favor, selecciona una fila para modificar", "Facturar", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	Void Aplicar_Subtotal(System::Object^ sender, System::EventArgs^ e) {
		this->subtotal = 0.0;

		
		for each (DataGridViewRow ^ row in this->facturarForm->dataGridFacturar->Rows) {
			double precio = Convert::ToDouble(row->Cells[6]->Value);
			int cantidad = Convert::ToInt32(row->Cells[7]->Value);
			subtotal += precio * cantidad;
		}

		this->facturarForm->subtotalText->Text = subtotal.ToString();
	}

	Void Aplicar_TotalconDescuento(System::Object^ sender, System::EventArgs^ e) {
		
		double subtotal = Convert::ToDouble(this->facturarForm->subtotalText->Text);

		this->total = 0.0;

		if (subtotal > 0) {
			double descuento = Convert::ToDouble(this->facturarForm->descuentoText->Text);
			this->total = subtotal - (subtotal * (descuento / 100.0));
		}
		else if (this->facturarForm->subtotalText == nullptr)
		{
			MessageBox::Show("Por favor, ingrese un valor en el campo de Descuento", "Facturar", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		this->facturarForm->totalText->Text = total.ToString();
	}

	

	Void Actualizar_Total_Subtotal() {
		this->facturarForm->subtotalText->Text = "$ " + Convert::ToString(this->subtotal);
		this->facturarForm->totalText->Text = "$ " + Convert::ToString(this->total);
	}


	Void FinalizarApp(Object^ sender, FormClosingEventArgs^ e) {
		Application::Exit();
	}

	Void mensajeFormatoIncorrecto(String^ ventana) {
		MessageBox::Show("Los datos ingresados no son del tipo correcto", ventana);
	}



};

















[STAThread]
int main()
{
	Controlador^ controlador = gcnew Controlador();

  return 0;
}