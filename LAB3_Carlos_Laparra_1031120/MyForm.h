#include"Lista.h"
#include"Pila.h";
#pragma once
#include<time.h>;
#include <stdlib.h>
#include<iostream>



namespace LAB3CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:		
		Lista* miLista;
		Pila* miPila;
		Pila* miPila1;
		Pila* miPila2;
		Pila* miPila3;
		Pila* miPila4;
		Pila* miPila5;
		Pila* miPila6;
		Pila* miPila7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_m;
	private: System::Windows::Forms::Label^ lbl_Movimientos_Totales;
	public:
		Lista* miPilaGeneral;
		MyForm(void)
		{
			InitializeComponent();
			miLista = new Lista();
			miLista->conta = 0;
			miLista->start = nullptr;
			miLista->end = nullptr;
			miPila = new Pila();
			miPila1 = new Pila();
			miPila2 = new Pila();
			miPila3 = new Pila();
			miPila4 = new Pila();
			miPila5 = new Pila();
			miPila6 = new Pila();
			miPila7 = new Pila();
			miPilaGeneral = new Lista();
			miPilaGeneral->conta = 0;
			miPilaGeneral->start = nullptr;
			miPilaGeneral->end = nullptr;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lb_g1;
	protected:
	private: System::Windows::Forms::ListBox^ lb_g2;
	private: System::Windows::Forms::ListBox^ lb_g3;
	private: System::Windows::Forms::ListBox^ lb_g4;
	private: System::Windows::Forms::ListBox^ lb_g5;
	private: System::Windows::Forms::ListBox^ lb_g6;
	private: System::Windows::Forms::ListBox^ lb_g7;
	private: System::Windows::Forms::ListBox^ lb_Mazo;
	private: System::Windows::Forms::Label^ lbl_mazo;
	private: System::Windows::Forms::Label^ lbl_g1;
	private: System::Windows::Forms::Label^ lbl_g2;
	private: System::Windows::Forms::Label^ lbl_g3;
	private: System::Windows::Forms::Label^ lbl_g4;
	private: System::Windows::Forms::Label^ lbl_g5;
	private: System::Windows::Forms::Label^ lbl_g6;
	private: System::Windows::Forms::Label^ lbl_g7;
	private: System::Windows::Forms::Label^ lbl_presione_r;
	private: System::Windows::Forms::Button^ btn_extraer;
	private: System::Windows::Forms::Button^ btn_insertar;
	private: System::Windows::Forms::TextBox^ txt_extraer;
	private: System::Windows::Forms::TextBox^ txt_insertar;


	private: System::Windows::Forms::Button^ btn_Mostrar_Carta_Mazo;

	protected:








	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lb_g1 = (gcnew System::Windows::Forms::ListBox());
			this->lb_g2 = (gcnew System::Windows::Forms::ListBox());
			this->lb_g3 = (gcnew System::Windows::Forms::ListBox());
			this->lb_g4 = (gcnew System::Windows::Forms::ListBox());
			this->lb_g5 = (gcnew System::Windows::Forms::ListBox());
			this->lb_g6 = (gcnew System::Windows::Forms::ListBox());
			this->lb_g7 = (gcnew System::Windows::Forms::ListBox());
			this->lb_Mazo = (gcnew System::Windows::Forms::ListBox());
			this->lbl_mazo = (gcnew System::Windows::Forms::Label());
			this->lbl_g1 = (gcnew System::Windows::Forms::Label());
			this->lbl_g2 = (gcnew System::Windows::Forms::Label());
			this->lbl_g3 = (gcnew System::Windows::Forms::Label());
			this->lbl_g4 = (gcnew System::Windows::Forms::Label());
			this->lbl_g5 = (gcnew System::Windows::Forms::Label());
			this->lbl_g6 = (gcnew System::Windows::Forms::Label());
			this->lbl_g7 = (gcnew System::Windows::Forms::Label());
			this->lbl_presione_r = (gcnew System::Windows::Forms::Label());
			this->btn_extraer = (gcnew System::Windows::Forms::Button());
			this->btn_insertar = (gcnew System::Windows::Forms::Button());
			this->txt_extraer = (gcnew System::Windows::Forms::TextBox());
			this->txt_insertar = (gcnew System::Windows::Forms::TextBox());
			this->btn_Mostrar_Carta_Mazo = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_m = (gcnew System::Windows::Forms::Label());
			this->lbl_Movimientos_Totales = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lb_g1
			// 
			this->lb_g1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g1->FormattingEnabled = true;
			this->lb_g1->ItemHeight = 20;
			this->lb_g1->Location = System::Drawing::Point(236, 50);
			this->lb_g1->Name = L"lb_g1";
			this->lb_g1->Size = System::Drawing::Size(78, 440);
			this->lb_g1->TabIndex = 1;
			// 
			// lb_g2
			// 
			this->lb_g2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g2->FormattingEnabled = true;
			this->lb_g2->ItemHeight = 20;
			this->lb_g2->Location = System::Drawing::Point(367, 50);
			this->lb_g2->Name = L"lb_g2";
			this->lb_g2->Size = System::Drawing::Size(78, 440);
			this->lb_g2->TabIndex = 2;
			// 
			// lb_g3
			// 
			this->lb_g3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g3->FormattingEnabled = true;
			this->lb_g3->ItemHeight = 20;
			this->lb_g3->Location = System::Drawing::Point(498, 50);
			this->lb_g3->Name = L"lb_g3";
			this->lb_g3->Size = System::Drawing::Size(78, 440);
			this->lb_g3->TabIndex = 3;
			// 
			// lb_g4
			// 
			this->lb_g4->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g4->FormattingEnabled = true;
			this->lb_g4->ItemHeight = 20;
			this->lb_g4->Location = System::Drawing::Point(631, 50);
			this->lb_g4->Name = L"lb_g4";
			this->lb_g4->Size = System::Drawing::Size(78, 440);
			this->lb_g4->TabIndex = 4;
			// 
			// lb_g5
			// 
			this->lb_g5->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g5->FormattingEnabled = true;
			this->lb_g5->ItemHeight = 20;
			this->lb_g5->Location = System::Drawing::Point(758, 50);
			this->lb_g5->Name = L"lb_g5";
			this->lb_g5->Size = System::Drawing::Size(78, 440);
			this->lb_g5->TabIndex = 5;
			// 
			// lb_g6
			// 
			this->lb_g6->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g6->FormattingEnabled = true;
			this->lb_g6->ItemHeight = 20;
			this->lb_g6->Location = System::Drawing::Point(893, 50);
			this->lb_g6->Name = L"lb_g6";
			this->lb_g6->Size = System::Drawing::Size(78, 440);
			this->lb_g6->TabIndex = 6;
			// 
			// lb_g7
			// 
			this->lb_g7->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->lb_g7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_g7->FormattingEnabled = true;
			this->lb_g7->ItemHeight = 20;
			this->lb_g7->Location = System::Drawing::Point(1019, 50);
			this->lb_g7->Name = L"lb_g7";
			this->lb_g7->Size = System::Drawing::Size(78, 440);
			this->lb_g7->TabIndex = 7;
			// 
			// lb_Mazo
			// 
			this->lb_Mazo->BackColor = System::Drawing::Color::MediumAquamarine;
			this->lb_Mazo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_Mazo->FormattingEnabled = true;
			this->lb_Mazo->ItemHeight = 20;
			this->lb_Mazo->Location = System::Drawing::Point(40, 65);
			this->lb_Mazo->Name = L"lb_Mazo";
			this->lb_Mazo->Size = System::Drawing::Size(120, 80);
			this->lb_Mazo->TabIndex = 8;
			// 
			// lbl_mazo
			// 
			this->lbl_mazo->AutoSize = true;
			this->lbl_mazo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_mazo->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 14, System::Drawing::FontStyle::Bold));
			this->lbl_mazo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_mazo->Location = System::Drawing::Point(43, 9);
			this->lbl_mazo->Name = L"lbl_mazo";
			this->lbl_mazo->Size = System::Drawing::Size(98, 53);
			this->lbl_mazo->TabIndex = 9;
			this->lbl_mazo->Text = L"Mazo";
			// 
			// lbl_g1
			// 
			this->lbl_g1->AutoSize = true;
			this->lbl_g1->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g1->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g1->Location = System::Drawing::Point(229, 9);
			this->lbl_g1->Name = L"lbl_g1";
			this->lbl_g1->Size = System::Drawing::Size(90, 38);
			this->lbl_g1->TabIndex = 10;
			this->lbl_g1->Text = L"Grupo I";
			// 
			// lbl_g2
			// 
			this->lbl_g2->AutoSize = true;
			this->lbl_g2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g2->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g2->Location = System::Drawing::Point(360, 9);
			this->lbl_g2->Name = L"lbl_g2";
			this->lbl_g2->Size = System::Drawing::Size(97, 38);
			this->lbl_g2->TabIndex = 11;
			this->lbl_g2->Text = L"Grupo II";
			// 
			// lbl_g3
			// 
			this->lbl_g3->AutoSize = true;
			this->lbl_g3->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g3->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g3->Location = System::Drawing::Point(481, 9);
			this->lbl_g3->Name = L"lbl_g3";
			this->lbl_g3->Size = System::Drawing::Size(104, 38);
			this->lbl_g3->TabIndex = 12;
			this->lbl_g3->Text = L"Grupo III";
			// 
			// lbl_g4
			// 
			this->lbl_g4->AutoSize = true;
			this->lbl_g4->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g4->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g4->Location = System::Drawing::Point(615, 9);
			this->lbl_g4->Name = L"lbl_g4";
			this->lbl_g4->Size = System::Drawing::Size(105, 38);
			this->lbl_g4->TabIndex = 13;
			this->lbl_g4->Text = L"Grupo IV";
			// 
			// lbl_g5
			// 
			this->lbl_g5->AutoSize = true;
			this->lbl_g5->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g5->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g5->Location = System::Drawing::Point(751, 9);
			this->lbl_g5->Name = L"lbl_g5";
			this->lbl_g5->Size = System::Drawing::Size(98, 38);
			this->lbl_g5->TabIndex = 14;
			this->lbl_g5->Text = L"Grupo V";
			// 
			// lbl_g6
			// 
			this->lbl_g6->AutoSize = true;
			this->lbl_g6->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g6->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g6->Location = System::Drawing::Point(876, 9);
			this->lbl_g6->Name = L"lbl_g6";
			this->lbl_g6->Size = System::Drawing::Size(105, 38);
			this->lbl_g6->TabIndex = 15;
			this->lbl_g6->Text = L"Grupo VI";
			// 
			// lbl_g7
			// 
			this->lbl_g7->AutoSize = true;
			this->lbl_g7->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g7->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g7->Location = System::Drawing::Point(1002, 9);
			this->lbl_g7->Name = L"lbl_g7";
			this->lbl_g7->Size = System::Drawing::Size(112, 38);
			this->lbl_g7->TabIndex = 16;
			this->lbl_g7->Text = L"Grupo VII";
			// 
			// lbl_presione_r
			// 
			this->lbl_presione_r->AutoSize = true;
			this->lbl_presione_r->BackColor = System::Drawing::Color::Transparent;
			this->lbl_presione_r->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 14, System::Drawing::FontStyle::Bold));
			this->lbl_presione_r->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_presione_r->Location = System::Drawing::Point(-4, 234);
			this->lbl_presione_r->Name = L"lbl_presione_r";
			this->lbl_presione_r->Size = System::Drawing::Size(234, 159);
			this->lbl_presione_r->TabIndex = 17;
			this->lbl_presione_r->Text = L"Para repartir \r\nlas cartas pulse \r\nla tecla \"R\"";
			// 
			// btn_extraer
			// 
			this->btn_extraer->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btn_extraer->Enabled = false;
			this->btn_extraer->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->btn_extraer->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_extraer->Location = System::Drawing::Point(21, 523);
			this->btn_extraer->Name = L"btn_extraer";
			this->btn_extraer->Size = System::Drawing::Size(283, 49);
			this->btn_extraer->TabIndex = 18;
			this->btn_extraer->Text = L"Extraer carta del grupo:";
			this->btn_extraer->UseVisualStyleBackColor = false;
			this->btn_extraer->Click += gcnew System::EventHandler(this, &MyForm::btn_extraer_Click);
			// 
			// btn_insertar
			// 
			this->btn_insertar->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btn_insertar->Enabled = false;
			this->btn_insertar->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->btn_insertar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_insertar->Location = System::Drawing::Point(21, 578);
			this->btn_insertar->Name = L"btn_insertar";
			this->btn_insertar->Size = System::Drawing::Size(283, 49);
			this->btn_insertar->TabIndex = 19;
			this->btn_insertar->Text = L"Insertar carta en el grupo:";
			this->btn_insertar->UseVisualStyleBackColor = false;
			this->btn_insertar->Click += gcnew System::EventHandler(this, &MyForm::btn_insertar_Click);
			// 
			// txt_extraer
			// 
			this->txt_extraer->Location = System::Drawing::Point(341, 537);
			this->txt_extraer->Name = L"txt_extraer";
			this->txt_extraer->Size = System::Drawing::Size(116, 26);
			this->txt_extraer->TabIndex = 20;
			// 
			// txt_insertar
			// 
			this->txt_insertar->Location = System::Drawing::Point(341, 595);
			this->txt_insertar->Name = L"txt_insertar";
			this->txt_insertar->Size = System::Drawing::Size(116, 26);
			this->txt_insertar->TabIndex = 21;
			// 
			// btn_Mostrar_Carta_Mazo
			// 
			this->btn_Mostrar_Carta_Mazo->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->btn_Mostrar_Carta_Mazo->Enabled = false;
			this->btn_Mostrar_Carta_Mazo->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->btn_Mostrar_Carta_Mazo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_Mostrar_Carta_Mazo->Location = System::Drawing::Point(12, 151);
			this->btn_Mostrar_Carta_Mazo->Name = L"btn_Mostrar_Carta_Mazo";
			this->btn_Mostrar_Carta_Mazo->Size = System::Drawing::Size(181, 50);
			this->btn_Mostrar_Carta_Mazo->TabIndex = 22;
			this->btn_Mostrar_Carta_Mazo->Text = L"Mostrar carta";
			this->btn_Mostrar_Carta_Mazo->UseVisualStyleBackColor = false;
			this->btn_Mostrar_Carta_Mazo->Click += gcnew System::EventHandler(this, &MyForm::btn_Mostrar_Carta_Mazo_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(675, 522);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 47);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Reiniciar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(481, 580);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(448, 38);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Si desea extraer del mazo ingrese el grupo 0";
			// 
			// lbl_m
			// 
			this->lbl_m->AutoSize = true;
			this->lbl_m->BackColor = System::Drawing::Color::Transparent;
			this->lbl_m->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 12, System::Drawing::FontStyle::Bold));
			this->lbl_m->Location = System::Drawing::Point(937, 514);
			this->lbl_m->Name = L"lbl_m";
			this->lbl_m->Size = System::Drawing::Size(177, 46);
			this->lbl_m->TabIndex = 25;
			this->lbl_m->Text = L"Movimientos: ";
			// 
			// lbl_Movimientos_Totales
			// 
			this->lbl_Movimientos_Totales->AutoSize = true;
			this->lbl_Movimientos_Totales->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Movimientos_Totales->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 10, System::Drawing::FontStyle::Bold));
			this->lbl_Movimientos_Totales->Location = System::Drawing::Point(1032, 578);
			this->lbl_Movimientos_Totales->Name = L"lbl_Movimientos_Totales";
			this->lbl_Movimientos_Totales->Size = System::Drawing::Size(0, 38);
			this->lbl_Movimientos_Totales->TabIndex = 26;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1169, 652);
			this->Controls->Add(this->lbl_Movimientos_Totales);
			this->Controls->Add(this->lbl_m);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_Mostrar_Carta_Mazo);
			this->Controls->Add(this->txt_insertar);
			this->Controls->Add(this->txt_extraer);
			this->Controls->Add(this->btn_insertar);
			this->Controls->Add(this->btn_extraer);
			this->Controls->Add(this->lbl_presione_r);
			this->Controls->Add(this->lbl_g7);
			this->Controls->Add(this->lbl_g6);
			this->Controls->Add(this->lbl_g5);
			this->Controls->Add(this->lbl_g4);
			this->Controls->Add(this->lbl_g3);
			this->Controls->Add(this->lbl_g2);
			this->Controls->Add(this->lbl_g1);
			this->Controls->Add(this->lbl_mazo);
			this->Controls->Add(this->lb_Mazo);
			this->Controls->Add(this->lb_g7);
			this->Controls->Add(this->lb_g6);
			this->Controls->Add(this->lb_g5);
			this->Controls->Add(this->lb_g4);
			this->Controls->Add(this->lb_g3);
			this->Controls->Add(this->lb_g2);
			this->Controls->Add(this->lb_g1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^>^ mazo = gcnew array<String^>(52);
		array<String^>^ mazo_revuelto = gcnew array<String^>(52);
		array<String^>^ mazo_revuelto_letras = gcnew array<String^>(52);
		array<String^>^ mazo1= gcnew array<String^>(20);
		array<String^>^ mazo2= gcnew array<String^>(20);
		array<String^>^ mazo3= gcnew array<String^>(20);
		array<String^>^ mazo4= gcnew array<String^>(20);
		array<String^>^ mazo5= gcnew array<String^>(20);
		array<String^>^ mazo6= gcnew array<String^>(20);
		array<String^>^ mazo7= gcnew array<String^>(20);
		array<String^>^ mazogeneral = gcnew array<String^>(40);
		int guardar_numero;
		int numero_extraer;
		int numero_insertar;
		int contador1 = 0;
		int contador2 = 0;
		int contador3 = 0;
		int contador4 = 0;
		int contador5 = 0;
		int contador6 = 0;
		int contador7 = 0;
		int movimientos = 0;
		void hacer_mazo() {
			try {
				for (int i = 0; i < 52; i++) {
					if (i >= 0 && i <= 12) {
						mazo[i] =  "N";
						miLista->InsertAtStart(i+1);
					}
					else if (i >= 13 && i <= 25) {
						mazo[i] =  "N";
						miLista->InsertAtStart(i-12);
					}
					else if (i >= 26 && i <= 38) {
						mazo[i] =  "R";
						miLista->InsertAtStart(i-25);
					}
					else if (i >= 39 || i <= 52) {
						mazo[i] = "R";
						miLista->InsertAtStart(i-38);
					}
				}
				revolver_mazo();

			}
			catch (Exception^ e) {

			}
		}
		void revolver_mazo() {
			int random;
			int valor;
			try {
				for (int i = 0; i < 51; i++) {
					srand(time(NULL));
					random = rand() %mazo->Length;
					valor = miLista->GetValue(random);
					miPila->Insert(valor);
					miLista->ExtractAtPosition(random);
					mazo_revuelto[i] = Convert::ToString(miPila->Value(i)) + mazo[random];
					mazo_revuelto_letras[i] = mazo[random];
					for (int o = random; o < mazo->Length - 1; o++) {
						mazo[o] = mazo[o + 1];
					}
					mazo->Resize(mazo, mazo->Length - 1);
				}
				repartir_cartas(mazo_revuelto);
			}
			catch (Exception^ e) {

			}
			
		}
		void repartir_cartas(array<String^>^ mazoA) {
			String^ carta;
			array<Int32^>^ numeros = gcnew array<Int32^>(52);
			for (int i = 0; i < mazoA->Length; i++) {
				if (i < 1) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					miPila1->Insert(Convert::ToInt32(numeros[i]));
					mazo1[i] = mazo_revuelto_letras[i];
					lb_g1->Items->Add(mazoA[i]);
				}
				else if (i > 0 && i < 3) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					miPila2->Insert(Convert::ToInt32(numeros[i]));
					mazo2[i - 1] = mazoA[i];
					lb_g2->Items->Add(mazoA[i]);
				}
				else if (i > 2 && i < 6) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo3[i - 3] = mazo_revuelto_letras[i];
					miPila3->Insert(Convert::ToInt32(numeros[i]));
					lb_g3->Items->Add(mazoA[i]);
				}
				else if (i > 5 && i < 10) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo4[i - 6] = mazo_revuelto_letras[i];
					miPila4->Insert(Convert::ToInt32(numeros[i]));
					lb_g4->Items->Add(mazoA[i]);
				}
				else if (i > 9 && i < 15) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo5[i - 10] = mazo_revuelto_letras[i];
					miPila5->Insert(Convert::ToInt32(numeros[i]));
					lb_g5->Items->Add(mazoA[i]);
				}
				else if (i > 14 && i < 21) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo6[i - 15] = mazo_revuelto_letras[i];
					miPila6->Insert(Convert::ToInt32(numeros[i]));
					lb_g6->Items->Add(mazoA[i]);
				}
				else if (i > 20 && i < 28) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo7[i - 21] = mazo_revuelto_letras[i];
					miPila7->Insert(Convert::ToInt32(numeros[i]));
					lb_g7->Items->Add(mazoA[i]);
				}
				else if(i > 27 && i < 51) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazogeneral[i-28] = mazo_revuelto_letras[i];
					miPilaGeneral->InsertAtEnd(Convert::ToInt32(numeros[i]));
					
				}
			}
			lb_Mazo->Items->Add(miPilaGeneral->GetValueAtEnd() + mazogeneral[0]);
		}
		int definir_numero(String^ carta) {
			int numero;
			if (carta->Length > 2) {
				numero = Convert::ToInt32(carta->Substring(0, 2));
				return numero;
			}
			else {
				numero = Convert::ToInt32(carta->Substring(0, 1));
				return numero;
			}
		}
	private: System::Void dgv_Tablero_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::R)
	{
		hacer_mazo();
		btn_extraer->Enabled = true;
		btn_insertar->Enabled = true;
		btn_Mostrar_Carta_Mazo->Enabled = true;
	}
}
private: System::Void btn_Mostrar_Carta_Mazo_Click(System::Object^ sender, System::EventArgs^ e) {
	lb_Mazo->Items->Clear();
	int contador = 0;
	contador++;
	if (contador < 20) {
		miPilaGeneral->InsertAtStart(miPilaGeneral->GetValueAtEnd());
		miPilaGeneral->ExtractAtEnd();
		lb_Mazo->Items->Add(miPilaGeneral->GetValueAtEnd() + mazogeneral[contador]);
	}
	else {
		contador = 0;
	}

	//lb_Mazo->Items->Add(mazogeneral[])
}
private: System::Void btn_extraer_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		numero_extraer = Convert::ToInt32(txt_extraer->Text);

		if (numero_extraer == 0) {
			if (miPilaGeneral->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPilaGeneral->GetValueAtEnd();
			}
		}
		else if (numero_extraer == 1) {
			if (miPila1->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else{ 
				guardar_numero = miPila1->Value_Extract_Peek();
			}
		}
		else if (numero_extraer == 2) {
			if (miPila2->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPila2->Value_Extract_Peek();
			}
		}
		else if (numero_extraer == 3) {
			if (miPila3->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPila3->Value_Extract_Peek();
			}
		}
		else if (numero_extraer == 4) {
			if (miPila4->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPila4->Value_Extract_Peek();
			}
		}
		else if (numero_extraer == 5) {
			if (miPila5->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPila5->Value_Extract_Peek();
			}
		}
		else if (numero_extraer == 6) {
			if (miPila6->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPila6->Value_Extract_Peek();
			}
		}
		else if (numero_extraer == 7) {
			if (miPila7->isEmpty()) {
				MessageBox::Show("La Lista est� vac�a", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				guardar_numero = miPila7->Value_Extract_Peek();
			}
		}
		else {
			MessageBox::Show("El n�mero que ingres� no est� dentro de los par�metros");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Ingres� un valor inv�lido");
	}

}
private: System::Void btn_insertar_Click(System::Object^ sender, System::EventArgs^ e) {
	numero_insertar = Convert::ToInt32(txt_insertar->Text);

	if (numero_insertar == 1) {
		if (miPila1->isEmpty()) {
			miPila1->Insert(guardar_numero);
			lb_g1->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		else if (guardar_numero == (miPila1->Value_Extract_Peek()-1)) {
			miPila1->Insert(guardar_numero);
			lb_g1->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else if (numero_insertar == 2) {
		if (miPila2->isEmpty()) {
			miPila2->Insert(guardar_numero);
			lb_g2->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		else if (guardar_numero == (miPila2->Value_Extract_Peek()-1)) {
			miPila2->Insert(guardar_numero);
			lb_g2->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else if (numero_insertar == 3) {
		if (miPila3->isEmpty()) {
			miPila3->Insert(guardar_numero);
			lb_g3->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		if (guardar_numero == (miPila3->Value_Extract_Peek()-1)) {
			miPila3->Insert(guardar_numero);
			lb_g3->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else if (numero_insertar == 4) {
		if (miPila4->isEmpty()) {
			miPila4->Insert(guardar_numero);
			lb_g4->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		else if (guardar_numero == (miPila4->Value_Extract_Peek() - 1)) {
			miPila4->Insert(guardar_numero);
			lb_g4->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else if (numero_insertar == 5) {
		if (miPila5->isEmpty()) {
			miPila5->Insert(guardar_numero);
			lb_g5->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		else if (guardar_numero == (miPila5->Value_Extract_Peek()-1)) {
			miPila5->Insert(guardar_numero);
			lb_g5->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else if (numero_insertar == 6) {
		if (miPila6->isEmpty()) {
			miPila6->Insert(guardar_numero);
			lb_g6->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		else if (guardar_numero == (miPila6->Value_Extract_Peek()-1)) {
			miPila6->Insert(guardar_numero);
			lb_g6->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
			
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else if (numero_insertar == 7) {
		if (miPila7->isEmpty()) {
			miPila7->Insert(guardar_numero);
			lb_g7->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
		}
		else if (guardar_numero == (miPila7->Value_Extract_Peek()-1)) {
			miPila7->Insert(guardar_numero);
			lb_g7->Items->Add(guardar_numero + definir_letra(numero_extraer));
			definir_Pila(numero_extraer);
			movimientos++;
			lbl_Movimientos_Totales->Text = Convert::ToString(movimientos);
			ganador();
		}
		else {
			MessageBox::Show("No puede ingresar la carta aqu�");
		}
	}
	else {
		MessageBox::Show("El n�mero que ingres� no est� dentro de los par�metros");
	}

}
	   String^ definir_letra(int numero) {
		   if (numero_extraer == 0) {
			   return mazogeneral[lb_Mazo->Items->Count - 1];
		   }
		   if (numero_extraer == 1) {
			   return mazo1[lb_g1->Items->Count - 1];

		   }
		   if (numero_extraer == 2) {
			   return mazo2[lb_g2->Items->Count - 1];

		   }
		   if (numero_extraer == 3) {
			   return mazo3[lb_g3->Items->Count - 1];
		   }
		   if (numero_extraer == 4) {
			   return mazo4[lb_g4->Items->Count - 1];
		   }
		   if (numero_extraer == 5) {
			   return mazo5[lb_g5->Items->Count - 1];
		   }
		   if (numero_extraer == 6) {
			   return mazo6[lb_g6->Items->Count - 1];
		   }
		   if (numero_extraer == 7) {
			   return mazo7[lb_g7->Items->Count - 1];
		   }
	   }
	   void definir_Pila(int numero) {
		   if (numero_extraer == 0) {
			   miPilaGeneral->ExtractAtEnd();
			   lb_Mazo->Items->RemoveAt(lb_Mazo->Items->Count - 1);

		   }
		   if (numero_extraer == 1) {
			   miPila1->Peek();
			   lb_g1->Items->RemoveAt(lb_g1->Items->Count-1);

		   }
		   if (numero_extraer == 2) {
			   miPila2->Peek();
			   lb_g2->Items->RemoveAt(lb_g2->Items->Count-1);
			   
		   }
		   if (numero_extraer == 3) {
			   miPila3->Peek();
			   lb_g3->Items->RemoveAt(lb_g3->Items->Count - 1);
		   }
		   if (numero_extraer == 4) {
			   miPila4->Peek();
			   lb_g4->Items->RemoveAt(lb_g4->Items->Count - 1);			 
		   }
		   if (numero_extraer == 5) {
			   miPila5->Peek();
			   lb_g5->Items->RemoveAt(lb_g5->Items->Count - 1);			   
		   }
		   if (numero_extraer == 6) {
			   miPila6->Peek();
			   lb_g6->Items->RemoveAt(lb_g6->Items->Count - 1);			   
		   }
		   if (numero_extraer == 7) {
			   miPila7->Peek();
			   lb_g7->Items->RemoveAt(lb_g7->Items->Count - 1);		
		   }
	   }
	   void ganador() {
		   if (numero_insertar == 1) {
			   contador1;
			   contador1++;
				   if (contador1 > 3) {
					   MessageBox::Show("Ha ganado");
				   }
		   }
		   if (numero_insertar == 2) {
			   contador2;
			   contador2++;
			   if (contador2 > 3) {
				   MessageBox::Show("Ha ganado");
			   }
		   }
		   if (numero_insertar == 3) {
			   contador3;
			   contador3++;
			   if (contador3 > 3) {
				   MessageBox::Show("Ha ganado");
			   }
		   }
		   if (numero_insertar == 4) {
			   contador4;
			   contador4++;
			   if (contador4 > 3) {
				   MessageBox::Show("Ha ganado");
			   }
		   }
		   if (numero_insertar == 5) {
			   contador5;
			   contador5++;
			   if (contador5 > 3) {
				   MessageBox::Show("Ha ganado");
			   }
		   }
		   if (numero_insertar == 6) {
			   contador6;
			   contador6++;
			   if (contador6 > 3) {
				   MessageBox::Show("Ha ganado");
			   }
		   }
		   if (numero_insertar == 7) {
			   contador7;
			   contador7++;
			   if (contador7 > 3) {
				   MessageBox::Show("Ha ganado");
			   }
		   }
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}