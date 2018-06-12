#include "funtion.h"


int  funtion_DB::Counter = 0;
int funtion_DB::n = 0; 
string funtion_DB::Text = " ";
size_t funtion_DB::ANS1 ;
size_t funtion_DB::ANS2 ; 
string funtion_DB::SaveSQL = " ";
string funtion_DB::user = "root";
string funtion_DB::pwd = "1234";
string funtion_DB::dbName = "f";
string funtion_DB::EName = "E";
bool funtion_DB::Y = true;

funtion_DB::funtion_DB()
{
	
	//判斷初始化資料庫是否成功
	if (0 != mysql_library_init(0, NULL, NULL))
	{
		FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
		sp->ShowDialog();;
		Y = false;
		//FinalProject::MyForm1.Enabled = false;
	}
	//判斷初始化數據結構是否成功
	if (NULL == mysql_init(&mydata))
	{
		FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
		sp->ShowDialog();;
		Y = false;
		//this->Enabled = false;
	}
	//判斷連接資料庫是否成功
	if (NULL == mysql_real_connect(&mydata, "localhost", user.c_str(), pwd.c_str(), dbName.c_str(), 3306, NULL, 0))
		//IP，使用者名稱，密碼，資料庫綱要名稱，TCP/IP Port，Unix socket )
	{
		FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
		sp->ShowDialog();;
		Y = false;
		//this->Enabled = false;
	}
}
funtion_DB::funtion_DB(string name, string passwd, string dbname)
{
	setuser(name, passwd, dbname);
	//判斷初始化資料庫是否成功
	if (0 != mysql_library_init(0, NULL, NULL))
	{
		FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
		sp->ShowDialog();;
		Y = false;
		//FinalProject::MyForm1.Enabled = false;
	}
	//判斷初始化數據結構是否成功
	if (NULL == mysql_init(&mydata))
	{
		FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
		sp->ShowDialog();;
		Y = false;
		//this->Enabled = false;
	}
	//判斷連接資料庫是否成功
	if (NULL == mysql_real_connect(&mydata, "localhost", user.c_str(), pwd.c_str(), dbName.c_str(), 3306, NULL, 0))
		//IP，使用者名稱，密碼，資料庫綱要名稱，TCP/IP Port，Unix socket )
	{
		FinalProject::MyForm6^sp = gcnew FinalProject::MyForm6;
		sp->ShowDialog();;
		Y = false;
		//this->Enabled = false;
	}
}
void funtion_DB::setName(string Outname) {
	EName = Outname;
	
}
string funtion_DB::getName() {
	return EName;
}
void funtion_DB::setCounter(int Ocounter) {
	Counter = Ocounter;
}
void funtion_DB::setText(string Outtext) {

	Text = Outtext;
	cout << Text <<  endl;
}
void funtion_DB::setEnumber(int number) {

	n = number;
	cout << number << endl;
}
void funtion_DB::setRow(size_t RowNum) {

	//ANS1 = RowNum;
	//cout << endl << endl << endl;
	//cout << SaveSQL << endl ;
}
void funtion_DB::setfieldsNum(size_t fieldsNum) {

	ANS2 = fieldsNum;
}
void funtion_DB::setuser(string name,string passwd,string dbname) {

	user = name;
	pwd = passwd;
	dbName = dbname;
}
int funtion_DB::getCounter() {


	return Counter;
}
int funtion_DB::getEnumber() {

	
	return n;
}
string funtion_DB::getText() {

	return Text;
}
size_t funtion_DB::getRow() {

	return ANS1;
}
size_t funtion_DB::getfieldsNum() {

	return ANS2;
}
bool funtion_DB::getY() {
	return Y;
}
bool funtion_DB::executeSQL(string opType, string sql)
///////////資料庫設定/////////////

{
	//預防斷線的可能
	mysql_ping(&(this->mydata));
	//判斷是否有錯誤
	if (mysql_query(&(this->mydata), sql.c_str()))
	{
		cout << "Error: " << mysql_error(&(this->mydata)) << endl;
		return false;
	}
	else
	{
		//確認指令是否正確且執行動作
		if (!mysql_field_count(&(this->mydata)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
//新增
bool  funtion_DB::insertSQL( string k1, string k2, string in,string k3, string k4, string k5, string k6, string k7, string k8, string k9, string k10)
{
	int c = 0;
	string key1 = k1;
	string key2 = k2;
	string key3 = in;
	string key4 = k3;
	string key5 = k4;
	string key6 = k5;
	string key7 = k6;
	string key8 = k7;
	string key9 = k8;
	string key10 = k9;
	string key11 = k10;
	string ANS;
	if (key5 == "NULL" && key6 == "NULL" && key7 == "NULL" && key8 == "NULL"&& key9 == "NULL" && key10 == "NULL"&& key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" +
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else if ( key6 == "NULL" && key7 == "NULL" && key8 == "NULL"&& key9 == "NULL"&& key10 == "NULL"&& key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" +
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else if ( key7 == "NULL" && key8 == "NULL"&& key9 == "NULL"&& key10 == "NULL"&& key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" + "," + "'" + key6 + "'" +
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else if (key8 == "NULL"&& key9 == "NULL"&& key10 == "NULL"&& key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" + "," + "'" + key6 + "'" + "," + "'" + key7 + "'" +
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else if (key9 == "NULL"&& key10 == "NULL"&& key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" + "," + "'" + key6 + "'" + "," + "'" + key7 + "'" + "," + "'" + key8 + "'" +
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else if (key10 == "NULL"&& key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" + "," + "'" + key6 + "'" + "," + "'" + key7 + "'" + "," + "'" + key8 + "'" + "," + "'" + key9 + "'"+
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else if (key11 == "NULL")
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" + "," + "'" + key6 + "'" + "," + "'" + key7 + "'" + "," + "'" + key8 + "'" + "," + "'" + key9 + "'"  + "," + "'" + key10 + "'"+
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	else 
	{
		ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" + "," + "'" + key5 + "'" + "," + "'" + key6 + "'" + "," + "'" + key7 + "'" + "," + "'" + key8 + "'" + "," + "'" + key9  + "'" + "," + "'" + key10  + "'" + "," + "'" + key11 + "'" +
			" ) " + ";";
		cout << ANS << endl << endl;
	}
	if (executeSQL("INSERT", ANS) == false)
	{
		setText(mysql_error(&(mydata)));
		return false;
	}
	/*ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" +
		" ) " + ",";

	SaveSQL += " ( '" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" +
		" ) " + ",";*/
	
	
}
bool  funtion_DB::insertSQL_Counter(string k1, string k2, string k3)
{
	int c = 0;
	string key1 = k1;
	int i = Counter;
	string key2 = to_string(i);
	string key3 = k2;
	string key4 = k3;

	string ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" +
		" ) " + ";";
	cout << ANS << endl << endl;
	if (executeSQL("INSERT", ANS) == false)
	{
		return -1;
	} ANS = Insert + Into + key1 + Values + " ( " + "'" + key2 + "'" + "," + "'" + key3 + "'" + "," + "'" + key4 + "'" +
		" ) " + ",";
	

}
// 查詢
string funtion_DB::selectSQL(string k1,string k2,string k3,string k4)
{
	using namespace System;
	using namespace Runtime::InteropServices;
	string key1 = k1;
	string key2 = k2;
	string key3 = k3;
	string key4 = k4;
	string ANS1;
	string ANS2;
	
	ANS1 = Select + key2 + From + key1 + Where + key3 + " = " + "'" + key4 + "'" + ";";
	
	
	cout << ANS1 << endl;
	//預防斷線的可能
	mysql_ping(&(mydata));
	//判斷是否有錯誤
	if (mysql_query(&(mydata), ANS1.c_str()))
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
	// 抓取相關的全部資訊
	result = mysql_store_result(&(mydata));
	// 查詢結果的行數
	size_t rowsNum = mysql_num_rows(result);
	setRow(rowsNum);
	// 查詢結果的字長
	size_t fieldsNum = mysql_num_fields(result);
	setfieldsNum(fieldsNum);

	while ((row = mysql_fetch_row(result)))
	{
		for (size_t i = 0; i < fieldsNum; ++i)
		{
			cout << (row[i] ? row[i] : "NULL") << '\t';
			ANS2 = (row[i] ? row[i] : "NULL");
		}
	}
	// 釋放資源
	mysql_free_result(result);

	return ANS2;
}
string funtion_DB::selectSQL_Max(string k1, string k2, string k3, string k4)
{
	using namespace System;
	using namespace Runtime::InteropServices;
	
	string key1 = k1;
	string key2 = k2;
	string key3 = k3;
	string key4 = k4;
	string ANS1;
	string ANS2;
	if ( key3 == "NULL")
	{
		ANS1 = Select + Max + "( " + key2 + " ) " + From + key1 + ";";
	}
	else 
	{
			ANS1 = Select + Max +  "( " + key2 + " ) " + From + key1 + Where + key3 + " = " + "'" +  key4 + "'"+ ";";
	}

	cout << ANS1 << endl;
	//預防斷線的可能
	mysql_ping(&(mydata));
	//判斷是否有錯誤
	if (mysql_query(&(mydata), ANS1.c_str()))
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
	// 抓取相關的全部資訊
	result = mysql_store_result(&(mydata));
	size_t rowsNum = mysql_num_rows(result);
	setRow(rowsNum);
	// 查詢結果的字長
	size_t fieldsNum = mysql_num_fields(result);
	setfieldsNum(fieldsNum);

	while ((row = mysql_fetch_row(result)))
	{
		for (size_t i = 0; i < fieldsNum; ++i)
		{
			cout << (row[i] ? row[i] : "NULL") << '\t';
			ANS2 = (row[i] ? row[i] : "NULL");
		}
	}
	// 釋放資源
	mysql_free_result(result);
	return ANS2;
}
string funtion_DB::selectSQL_Counter(string k1, string k2, string k3)
{
	using namespace System;
	using namespace Runtime::InteropServices;
	string key1 = k1;
	string key2 = k2;
	string key3 = k3;
	
	string ANS1;
	string ANS2;
	int i = Counter;
	string key4 = to_string(i);
	ANS1 = Select + key2 + From + key1 + Where + key3 + " = " + key4 +  ";";

	cout << ANS1 << endl;
	//預防斷線的可能
	mysql_ping(&(mydata));
	//判斷是否有錯誤
	if (mysql_query(&(mydata), ANS1.c_str()))
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
	// 抓取相關的全部資訊
	result = mysql_store_result(&(mydata));
	size_t rowsNum = mysql_num_rows(result);
	setRow(rowsNum);
	// 查詢結果的字長
	size_t fieldsNum = mysql_num_fields(result);
	setfieldsNum(fieldsNum);

	while ((row = mysql_fetch_row(result)))
	{
		for (size_t i = 0; i < fieldsNum; ++i)
		{
			cout << (row[i] ? row[i] : "NULL") << '\t';
			ANS2 = (row[i] ? row[i] : "NULL");
		}
	}
	// 釋放資源
	mysql_free_result(result);
	return ANS2;
	Counter++;
}
string funtion_DB::selectSQL_All(string k1, string k2)
{
	using namespace System;
	using namespace Runtime::InteropServices;
	string key1 = k1;
	string key2 = k2;
	string ANS1;
	string ANS2;
	ANS1 = Select + key2 + From + key1 ;

	cout << ANS1 << endl;
	//預防斷線的可能
	mysql_ping(&(mydata));
	//判斷是否有錯誤
	if (mysql_query(&(mydata), ANS1.c_str()))
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
	// 抓取相關的全部資訊
	result = mysql_store_result(&(mydata));
	size_t rowsNum = mysql_num_rows(result);
	setRow(rowsNum);
	// 查詢結果的字長
	size_t fieldsNum = mysql_num_fields(result);
	setfieldsNum(fieldsNum);

	while ((row = mysql_fetch_row(result)))
	{
		for (size_t i = 0; i < fieldsNum; ++i)
		{
			cout << (row[i] ? row[i] : "NULL") << '\t';
			ANS2 = (row[i] ? row[i] : "NULL");
		}
	}
	// 釋放資源
	mysql_free_result(result);
	return ANS2;
	Counter++;
}
//修改:
bool funtion_DB::updateSQL(string k1, string k2, string k3, string k4 )
{
	string key1 = k1;
	string key2 = k2;
	string key3 = k3;
	int i = Counter;
	string key4 = k4;
	string key5 = to_string(i);
	string ANS = Update + key1 + Set + key2 + " = " + "'" + key3 + "'"
		+ Where + key4 + " = " + "'" + key5 + "'";
	cout << ANS << endl << endl;
	
	if (executeSQL("UPDATE", ANS)) {
		cout << "update done.." << endl;
	}
	else
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
	
}
bool funtion_DB::updateSQL_NotCounter(string k1, string k2, string k3, string k4, string k5)
{
	string key1 = k1;
	string key2 = k2;
	string key3 = k3;
	string key4 = k4;
	string key5 = k5;
	string ANS = Update + key1 + Set + key2 + " = " + "'" + key3 + "'"
		+ Where + key4 + " = " + "'" + key5 + "'";
	cout << ANS << endl << endl;
	if (executeSQL("UPDATE", ANS)) {
		cout << "update done.." << endl;
	}
	else
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
}
//刪除:
bool funtion_DB::deleteSQL(string k1, string k2, string k3)
{
	string key1 = k1;
	string key2 = k2;
	string key3 = k3;
	string ANS = Delete + From + key1 + Where + key2 + " = " + "'" + key3 + "'";
	cout << ANS << endl << endl;
	if (executeSQL("DELETE", ANS)) {
		cout << "delete done.." << endl;
	}
	else
	{
		cout << "Error: " << mysql_error(&(mydata)) << endl;
		return false;
	}
}
