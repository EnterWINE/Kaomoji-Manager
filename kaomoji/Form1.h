#pragma once

namespace kaomoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::Button^  button76;
	private: System::Windows::Forms::Button^  button55;

	private: System::Windows::Forms::Button^  button56;

	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button73;


	private: System::Windows::Forms::Button^  button74;

	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button58;




























	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button59;




	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button60;





	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

































	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Location = System::Drawing::Point(1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(318, 325);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->button76);
			this->tabPage1->Controls->Add(this->button55);
			this->tabPage1->Controls->Add(this->button56);
			this->tabPage1->Controls->Add(this->button57);
			this->tabPage1->Controls->Add(this->button73);
			this->tabPage1->Controls->Add(this->button74);
			this->tabPage1->Controls->Add(this->button75);
			this->tabPage1->Controls->Add(this->button70);
			this->tabPage1->Controls->Add(this->button71);
			this->tabPage1->Controls->Add(this->button72);
			this->tabPage1->Controls->Add(this->button67);
			this->tabPage1->Controls->Add(this->button68);
			this->tabPage1->Controls->Add(this->button69);
			this->tabPage1->Controls->Add(this->button64);
			this->tabPage1->Controls->Add(this->button65);
			this->tabPage1->Controls->Add(this->button66);
			this->tabPage1->Controls->Add(this->button61);
			this->tabPage1->Controls->Add(this->button58);
			this->tabPage1->Controls->Add(this->button62);
			this->tabPage1->Controls->Add(this->button59);
			this->tabPage1->Controls->Add(this->button63);
			this->tabPage1->Controls->Add(this->button60);
			this->tabPage1->Controls->Add(this->button52);
			this->tabPage1->Controls->Add(this->button53);
			this->tabPage1->Controls->Add(this->button54);
			this->tabPage1->Controls->Add(this->button49);
			this->tabPage1->Controls->Add(this->button50);
			this->tabPage1->Controls->Add(this->button51);
			this->tabPage1->Controls->Add(this->button46);
			this->tabPage1->Controls->Add(this->button47);
			this->tabPage1->Controls->Add(this->button48);
			this->tabPage1->Controls->Add(this->button43);
			this->tabPage1->Controls->Add(this->button44);
			this->tabPage1->Controls->Add(this->button45);
			this->tabPage1->Controls->Add(this->button40);
			this->tabPage1->Controls->Add(this->button41);
			this->tabPage1->Controls->Add(this->button42);
			this->tabPage1->Controls->Add(this->button37);
			this->tabPage1->Controls->Add(this->button38);
			this->tabPage1->Controls->Add(this->button39);
			this->tabPage1->Controls->Add(this->button34);
			this->tabPage1->Controls->Add(this->button35);
			this->tabPage1->Controls->Add(this->button36);
			this->tabPage1->Controls->Add(this->button31);
			this->tabPage1->Controls->Add(this->button32);
			this->tabPage1->Controls->Add(this->button33);
			this->tabPage1->Controls->Add(this->button28);
			this->tabPage1->Controls->Add(this->button29);
			this->tabPage1->Controls->Add(this->button30);
			this->tabPage1->Controls->Add(this->button25);
			this->tabPage1->Controls->Add(this->button26);
			this->tabPage1->Controls->Add(this->button27);
			this->tabPage1->Controls->Add(this->button22);
			this->tabPage1->Controls->Add(this->button23);
			this->tabPage1->Controls->Add(this->button24);
			this->tabPage1->Controls->Add(this->button19);
			this->tabPage1->Controls->Add(this->button20);
			this->tabPage1->Controls->Add(this->button21);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button17);
			this->tabPage1->Controls->Add(this->button18);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(310, 299);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L":-)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button76
			// 
			this->button76->Location = System::Drawing::Point(7, 731);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(84, 23);
			this->button76->TabIndex = 76;
			this->button76->Text = L"=(";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &Form1::button76_Click);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(205, 528);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(84, 23);
			this->button55->TabIndex = 71;
			this->button55->Text = L"^^;";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(106, 528);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(84, 23);
			this->button56->TabIndex = 70;
			this->button56->Text = L"8-)";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(7, 528);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(84, 23);
			this->button57->TabIndex = 69;
			this->button57->Text = L"=[";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(205, 702);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(84, 23);
			this->button73->TabIndex = 73;
			this->button73->Text = L"Y.Y";
			this->button73->UseVisualStyleBackColor = true;
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(106, 702);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(84, 23);
			this->button74->TabIndex = 67;
			this->button74->Text = L":\'(";
			this->button74->UseVisualStyleBackColor = true;
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(7, 702);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(84, 23);
			this->button75->TabIndex = 66;
			this->button75->Text = L"=P";
			this->button75->UseVisualStyleBackColor = true;
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(205, 673);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(84, 23);
			this->button70->TabIndex = 65;
			this->button70->Text = L"^_-";
			this->button70->UseVisualStyleBackColor = true;
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(106, 673);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(84, 23);
			this->button71->TabIndex = 64;
			this->button71->Text = L";D";
			this->button71->UseVisualStyleBackColor = true;
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(7, 673);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(84, 23);
			this->button72->TabIndex = 63;
			this->button72->Text = L"=]";
			this->button72->UseVisualStyleBackColor = true;
			// 
			// button67
			// 
			this->button67->Location = System::Drawing::Point(205, 644);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(84, 23);
			this->button67->TabIndex = 62;
			this->button67->Text = L"^^";
			this->button67->UseVisualStyleBackColor = true;
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(106, 644);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(84, 23);
			this->button68->TabIndex = 61;
			this->button68->Text = L":]";
			this->button68->UseVisualStyleBackColor = true;
			// 
			// button69
			// 
			this->button69->Location = System::Drawing::Point(7, 644);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(84, 23);
			this->button69->TabIndex = 60;
			this->button69->Text = L"> <";
			this->button69->UseVisualStyleBackColor = true;
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(205, 615);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(84, 23);
			this->button64->TabIndex = 59;
			this->button64->Text = L"-_-";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(106, 615);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(84, 23);
			this->button65->TabIndex = 58;
			this->button65->Text = L">.<";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(7, 615);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(84, 23);
			this->button66->TabIndex = 57;
			this->button66->Text = L":-S";
			this->button66->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(205, 586);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(84, 23);
			this->button61->TabIndex = 5;
			this->button61->Text = L"$_$";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(205, 557);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(84, 23);
			this->button58->TabIndex = 56;
			this->button58->Text = L"=_=";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(106, 586);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(84, 23);
			this->button62->TabIndex = 4;
			this->button62->Text = L":S";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(106, 557);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(84, 23);
			this->button59->TabIndex = 55;
			this->button59->Text = L"B-)";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(7, 586);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(84, 23);
			this->button63->TabIndex = 3;
			this->button63->Text = L"-0-";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(7, 557);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(84, 23);
			this->button60->TabIndex = 54;
			this->button60->Text = L":-*";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(205, 499);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(84, 23);
			this->button52->TabIndex = 53;
			this->button52->Text = L"*_*";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(106, 499);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(84, 23);
			this->button53->TabIndex = 52;
			this->button53->Text = L":O(";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(7, 499);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(84, 23);
			this->button54->TabIndex = 51;
			this->button54->Text = L">_<";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(205, 470);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(84, 23);
			this->button49->TabIndex = 50;
			this->button49->Text = L"-.-";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(106, 470);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(84, 23);
			this->button50->TabIndex = 49;
			this->button50->Text = L":|";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(7, 470);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(84, 23);
			this->button51->TabIndex = 48;
			this->button51->Text = L"=D";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(205, 441);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(84, 23);
			this->button46->TabIndex = 47;
			this->button46->Text = L":-3";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(106, 441);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(84, 23);
			this->button47->TabIndex = 46;
			this->button47->Text = L":O)";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(7, 441);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(84, 23);
			this->button48->TabIndex = 45;
			this->button48->Text = L"=)";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(205, 412);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(84, 23);
			this->button43->TabIndex = 44;
			this->button43->Text = L"^.^";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(106, 412);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(84, 23);
			this->button44->TabIndex = 43;
			this->button44->Text = L":-]";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(7, 412);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(84, 23);
			this->button45->TabIndex = 42;
			this->button45->Text = L";O)";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(205, 383);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(84, 23);
			this->button40->TabIndex = 41;
			this->button40->Text = L"^_+";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(106, 383);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(84, 23);
			this->button41->TabIndex = 40;
			this->button41->Text = L";]";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(7, 383);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(84, 23);
			this->button42->TabIndex = 39;
			this->button42->Text = L"=.=";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(205, 354);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(84, 23);
			this->button37->TabIndex = 38;
			this->button37->Text = L";_;";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(106, 354);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(84, 23);
			this->button38->TabIndex = 37;
			this->button38->Text = L"ђ_ђ";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(7, 354);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(84, 23);
			this->button39->TabIndex = 36;
			this->button39->Text = L":O";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(205, 325);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(84, 23);
			this->button34->TabIndex = 35;
			this->button34->Text = L"O_O";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(106, 325);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(84, 23);
			this->button35->TabIndex = 34;
			this->button35->Text = L"+_+";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(7, 325);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(84, 23);
			this->button36->TabIndex = 33;
			this->button36->Text = L":[";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(205, 296);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(84, 23);
			this->button31->TabIndex = 32;
			this->button31->Text = L"T_T";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(106, 296);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(84, 23);
			this->button32->TabIndex = 31;
			this->button32->Text = L";(";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(7, 296);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(84, 23);
			this->button33->TabIndex = 30;
			this->button33->Text = L"=/";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(205, 267);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(84, 23);
			this->button28->TabIndex = 29;
			this->button28->Text = L"X_X";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(106, 267);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(84, 23);
			this->button29->TabIndex = 28;
			this->button29->Text = L":/";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(7, 267);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(84, 23);
			this->button30->TabIndex = 27;
			this->button30->Text = L":-x";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(205, 238);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(84, 23);
			this->button25->TabIndex = 26;
			this->button25->Text = L"^3^";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(106, 238);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(84, 23);
			this->button26->TabIndex = 25;
			this->button26->Text = L"<3";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(7, 238);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(84, 23);
			this->button27->TabIndex = 24;
			this->button27->Text = L":-S";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(205, 209);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(84, 23);
			this->button22->TabIndex = 23;
			this->button22->Text = L"^o^";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(106, 209);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(84, 23);
			this->button23->TabIndex = 22;
			this->button23->Text = L"~_~";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(7, 209);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(84, 23);
			this->button24->TabIndex = 21;
			this->button24->Text = L":-0";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(205, 180);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(84, 23);
			this->button19->TabIndex = 20;
			this->button19->Text = L"O.O";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(106, 180);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(84, 23);
			this->button20->TabIndex = 19;
			this->button20->Text = L":-O";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(7, 180);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(84, 23);
			this->button21->TabIndex = 18;
			this->button21->Text = L"):";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(205, 151);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(84, 23);
			this->button16->TabIndex = 17;
			this->button16->Text = L">\"<";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(106, 151);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(84, 23);
			this->button17->TabIndex = 16;
			this->button17->Text = L">:(";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(7, 151);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(84, 23);
			this->button18->TabIndex = 15;
			this->button18->Text = L":[";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(205, 122);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(84, 23);
			this->button13->TabIndex = 14;
			this->button13->Text = L"U_U";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(106, 122);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(84, 23);
			this->button14->TabIndex = 13;
			this->button14->Text = L":-(";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(7, 122);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(84, 23);
			this->button15->TabIndex = 12;
			this->button15->Text = L":(";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(205, 93);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(84, 23);
			this->button10->TabIndex = 11;
			this->button10->Text = L":P";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(106, 93);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(84, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L":-P";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(7, 93);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(84, 23);
			this->button12->TabIndex = 9;
			this->button12->Text = L":P";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(205, 64);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(84, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L":-D";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(106, 64);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"^0^";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(7, 64);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 23);
			this->button9->TabIndex = 6;
			this->button9->Text = L":D";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(205, 35);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L":-)";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(106, 35);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"^_^";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(7, 35);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 23);
			this->button6->TabIndex = 3;
			this->button6->Text = L":)";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L";)";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(106, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"^_~";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L";-)";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(310, 299);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"=)";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(310, 299);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L":D";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(310, 299);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L";P";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(310, 299);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L":-(";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(310, 299);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L">:(";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(310, 299);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L":-0";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 324);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Kaomoji Manager";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}

