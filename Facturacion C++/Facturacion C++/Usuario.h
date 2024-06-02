#pragma once

using namespace System;

public ref class Usuario {

private:
	String^ nombre;
	String^ apellido;
	String^ legajo;
	String^ password;
	String^ correo;
	String^ sector;

public:
	Usuario(String^ nombre, String^ apellido, String^ legajo, String^ password, String^ correo, String^ sector) {
		this->nombre = nombre;
		this->apellido = apellido;
		this->legajo = legajo;
		this->password = password;
		this->correo = correo;
		this->sector = sector;

	}

	String^ getLegajo() {

		return this->legajo;
	}

	String^ getPassword() {
		return this->password;
	}


};