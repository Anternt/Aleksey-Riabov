/**
 * @mainpage
 * <b> ������������ ��������. <br/></b>
 * <b><i>������������ ��������: �������� ������ �������, ����� ���� ����� �������� ������ (��������� 100 �����). ǳ ������ ��������� "������"</i></b><br/>
 * @author Momot Roman
 * @date 2020.05.26
 * @version 1.0
 */

/**
* @file main.cpp
* ���� ��������� ������ ����� Menu
*/

#include "programList.h"	/** ϳ��������� ����� programList.h */
#include "Menu.h"			/** ϳ��������� ����� Menu.h */
#include "FuncTester.h"		/** ϳ��������� ����� FuncTester.h */

void main()
{
	setlocale(LC_ALL, "Rus");	/** ����������� ������ */
	Menu menu;					/** ��������� ����� ����� Menu */

	menu.menu();				/** ������ ������ ���� */

	cout << endl << "������������ ������� � ������� ������-������������" << endl;
	FuncTester tester;			/** ��������� ����� ����� FuncTester */
	tester.ReadFile_Test();		/** ������ ������ ���������� ������ ������� ����� */
	tester.Add_Test();			/** ������ ������ ���������� ������ ��������� �������� */
	tester.Delete_Test();		/** ������ ������ ���������� ������ ��������� �������� */
	tester.SaveFile_Test();		/** ������ ������ ���������� ������ ��������� ����� � ���� */
	tester.Sort_Test();			/** ������ ������ ���������� ������ ���������� */
	tester.Task_Test();			/** ������ ������ ���������� ������ ��������� �������������� �������� */
	tester.~FuncTester();	

	if (_CrtDumpMemoryLeaks())	/** �������� ������ ���'�� */
		cout << endl << "���� ������ ������." << endl;			/** ��������� ���������� ���� ������ � */
	else 
		cout << endl << "������ ������ �����������." << endl;	/** ��������� ���������� ���� ������ ���� */

	return;						/** ���������� ������ �������� */
}
