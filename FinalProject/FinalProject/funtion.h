#ifndef FUNTION_H
#define FUNTION_H

#include <Windows.h>
#include <mysql.h>
#include <string>
#include "MyForm6.h"
#include <stdio.h>
#include <iostream>


using namespace std;

class funtion_DB
{
public:
	funtion_DB(); 
	funtion_DB(string name, string passwd, string dbname);
	bool executeSQL(string opType, string sql);
	string selectSQL(string, string, string, string);
	string selectSQL_Max(string, string, string, string);
	string selectSQL_Counter(string, string, string);
	string selectSQL_All(string, string);
	bool updateSQL(string, string, string, string);
	bool updateSQL_NotCounter(string, string, string, string,string);
	bool deleteSQL(string, string, string);
	bool insertSQL(string, string, string, string, string, string, string, string, string, string, string);
	bool insertSQL_Counter(string, string, string);
	void setCounter(int);
	int getCounter();
	void setText(string);
	void setEnumber(int);
	string getText();
	void setName(string);
	string getName();
	int getEnumber();
	void setRow(size_t);
	void setfieldsNum(size_t);
	size_t getRow();
	size_t getfieldsNum();
	void setuser(string,string,string);
	bool getY();
	

private:
	static int Counter;
	static int n;
	static string Text;
	static size_t ANS1;
	static size_t ANS2;
	static string SaveSQL;
	static string user;
	static string pwd;
	static string dbName;
	static string EName;
	static bool Y;
	MYSQL mydata;
	MYSQL_RES *result;
	MYSQL_ROW row;
	string Select = "select ";
	string Delete = "delete";
	string Insert = "insert ";
	string Update = "update ";
	string From = " from ";
	string Where = " where ";
	string Max = "MAX";
	string Into= "into ";
	string Values = " values ";
	string Set = " set ";
	
};

#endif 
