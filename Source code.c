#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
// Declartions of functions
int _take_And_Making_Binary();
int _arrage_Binary_Data(int *, int *);
int _printer_Of_Binary_Data(int *, int *);
int _taking_User_Data(void);
int _binary_To_Decimal_Convert(unsigned long long *);
int _decimal_Fraction_To_Binary_Conversion(void);
int _fractional_Binary_To_Decimal(void);
int _decimal_To_Octal(void);
int _octal_To_Decimal(void);
int _fractional_Decimal_To_Octal(void);
int _binary_To_Octal(void);
int _octal_To_Binary(void);
int _fractional_Octal_To_Binary(void);
int _hexadecimal_To_Decimal(void);
int _binary_To_Hexadecimal(void);
int _preset_For_Hexadecimal_Value(int *);
int _fractional_Binary_To_Hexadecimal(void);
int _fractional_Hexadecimal_To_Binary(void);
int _octal_To_Hexadecimal(void);
int _fractional_Octal_To_Hexadecimal(void);
int _fractional_Hexadecimal_To_Octal(void);
int _binary_Addition(void);
int _binary_Division(void);
int _binary_Multiplication(void);
int main(void)
{
	int _user_Choice = 0;
	int _recive_User_Data = 0;
	while (1)
	{
		printf("1 For decimal to binary.\n2 For binary to decimal.\n3 For fractional decimal to binary.\n4 For fractional binary to decimal.\n5 For Decimal to octal.\n6 For octal to decimal.\n7 For fractaional decimal to octal.\n8 For fractional octal to decimal.\n9 For binary to octal.\n10 For fractional binary to octal.\n11 For octal to binary.\n12 For fractional octal to binary.\n13 For Hexadecimal to decimal.\n14 For binary hexadecimal. \n15 For fractional binary to hexadecimal.\n16 For hexadecimal to binary.\n17 For fractional hexadecimal to binary.\n18 For octal to hexadecimal.\n19 For fractional octal to hexadecimal.\n20 For hexadecimal to octal.\n21 For fractional hexadecimal to octal.\n22 For binary addition.\n23 For binary subtraction.\n24 For binary division.\n25 For binary multplication.\n26 For exit. \nEnter your choice:");
		fflush(stdin);
		scanf("%d", &_user_Choice);
		system("cls");
		switch (_user_Choice)
		{
		case 1:
			_take_And_Making_Binary();
			getch();
			system("cls");
			break;
		case 2:
			_taking_User_Data();
			getch();
			break;
		case 3:
			_decimal_Fraction_To_Binary_Conversion();
			getch();
			system("cls");
			break;
		case 4:
			_fractional_Binary_To_Decimal();
			system("cls");
			break;
		case 5:
			_decimal_To_Octal();
			getch();
			system("cls");
			break;
		case 6:
			_octal_To_Decimal();
			getch();
			system("cls");
			break;
		case 7:
			_fractional_Decimal_To_Octal();
			getch();
			system("cls");
			break;
		case 8:
			_fractional_Octal_To_Decimal();
			getch();
			system("cls");
			break;
		case 9:
			_binary_To_Octal();
			getch();
			system("cls");
			break;
		case 10:
			_fractional_Binary_To_Octal();
			getch();
			system("cls");
			break;
		case 11:
			_octal_To_Binary();
			getch();
			system("cls");
			break;
		case 12:
			_fractional_Octal_To_Binary();
			getch();
			system("cls");
			break;
		case 13:
			_hexadecimal_To_Decimal();
			getch();
			system("cls");
			break;
		case 14:
			_binary_To_Hexadecimal();
			getch();
			system("cls");
			break;
		case 15:
			_fractional_Binary_To_Hexadecimal();
			getch();
			system("cls");
			break;
		case 16:
			hexadecimal_To_Binary();
			getch();
			system("cls");
			break;
		case 17:
			_fractional_Hexadecimal_To_Binary();
			getch();
			system("cls");
			break;
		case 18:
			_octal_To_Hexadecimal();
			getch();
			system("cls");
			break;
		case 19:
			_fractional_Octal_To_Hexadecimal();
			getch();
			system("cls");
			break;
		case 20:
			_hexadecimal_To_Octal();
			getch();
			system("cls");
			break;
		case 21:
			_fractional_Hexadecimal_To_Octal();
			getch();
			system("cls");
			break;
		case 22:
			_binary_Addition();
			getch();
			system("cls");
			break;
		case 23:
			_binary_Subtraction();
			getch();
			system("cls");
			break;
		case 24:
			_binary_Division();
			getch();
			system("cls");
			break;
		case 25:
			_binary_Multiplication();
			getch();
			system("cls");
			break;
		case 26:
			exit(1);
			break;
		default:
			printf("You entered a wrong value.\n");
			getch();
			system("cls");
			break;
		}
	}
}

// Decimal to binary.
int _take_And_Making_Binary(void)
{
	int _store_Binary[500];
	int _loop = 0;
	int _pressed_Data = 0;
	unsigned long long _arrange_Data = 0;
	printf("Enter your number, Wich you want to convert in binary:");
	while (1)
	{
		_pressed_Data = getch();
		if (_pressed_Data >= 48 && _pressed_Data <= 57)
		{
			printf("%c", _pressed_Data);
			_arrange_Data = (_arrange_Data * 10 + (_pressed_Data - 48));
		}
		else if (_pressed_Data == 13)
		{
			break;
		}
		else if (_pressed_Data == 8)
		{
			_arrange_Data = (_arrange_Data / 10);
			system("cls");
			printf("Enter your number, Wich you want to convert in binary:");
			printf("%llu", _arrange_Data);
			if (_arrange_Data == 0)
			{
				system("cls");
				printf("Enter your number, Wich you want to convert in binary:");
			}
		}
	}
	for (; _arrange_Data >= 1; _loop++)
	{
		_store_Binary[_loop] = _arrange_Data % 2;
		_arrange_Data = _arrange_Data / 2;
	}
	_arrage_Binary_Data(&_store_Binary, &_loop);
	_printer_Of_Binary_Data(&_store_Binary, &_loop);
	return 0;
}
// Arrange binary data
int _arrage_Binary_Data(int *_address_Of_Store_Binary, int *_swaping_Time_Through_Of_Loop)
{
	int _swapping_Time = (*(_swaping_Time_Through_Of_Loop) / 2);
	int _swapping_Loop = 0;
	int _temporary = 0;
	int _last_Index_Target = (*(_swaping_Time_Through_Of_Loop)-1);
	for (; _swapping_Time > 0; _swapping_Time--)
	{
		_temporary = _address_Of_Store_Binary[_swapping_Loop];
		_address_Of_Store_Binary[_swapping_Loop] = _address_Of_Store_Binary[_last_Index_Target - _swapping_Loop];
		_address_Of_Store_Binary[_last_Index_Target - _swapping_Loop] = _temporary;
		_swapping_Loop++;
	}
	return 0;
}
// Afret everything Print binary data.
int _printer_Of_Binary_Data(int *_address_Of_Store_Binary, int *_loop)
{
	printf("\nYour binary is:");
	for (int _loop1 = 0; _loop1 < *(_loop); _loop1++)
	{
		printf("%d", _address_Of_Store_Binary[_loop1]);
	}
	// printf("\nPress any key for go to meun.");
	return 0;
}
// binary to Decimal section.
int _taking_User_Data(void)
{
	int _pressed_Data = 0;
	unsigned long long _arrange_Data = 0;
	printf("Enter your binary number:");
	while (1)
	{
		_pressed_Data = getch();
		if (_pressed_Data == 48 || _pressed_Data == 49)
		{
			printf("%c", _pressed_Data);
			_arrange_Data = _arrange_Data * 10 + (_pressed_Data - 48);
		}
		else if (_pressed_Data == 13)
		{
			break;
		}
		else if (_pressed_Data == 8)
		{
			_arrange_Data = _arrange_Data / 10;
			system("cls");
			printf("Enter your binary number:");
			printf("%lld", _arrange_Data);
			if (_arrange_Data == 0)
			{
				system("cls");
				printf("Enter your binary number:");
			}
		}
	}
	_binary_To_Decimal_Convert(&_arrange_Data);
	return 0;
}
// Convert to decimal
int _binary_To_Decimal_Convert(unsigned long long *_address_Of_Binary_Data)
{
	// Taking data form outside.
	int _base = 1;
	int _total_Counter = 0;

	while (*(_address_Of_Binary_Data) > 0)
	{
		_total_Counter = _total_Counter + _base * (*(_address_Of_Binary_Data) % 10);
		*(_address_Of_Binary_Data) = *(_address_Of_Binary_Data) / 10;
		_base = _base * 2;
	}
	system("cls");
	printf("Decimal data is:%d", _total_Counter);
	getch();
	system("cls");
	return 0;
}
// Fraction decimal to binary conversion.
int _decimal_Fraction_To_Binary_Conversion(void)
{
	double _decimal_Data;
	printf("Enter your decimal fractional number wich you want to convert to binary:");
	scanf("%lf", &_decimal_Data);
	double _without_Integer_Part = _decimal_Data - (int)_decimal_Data;
	int _only_Integer_Part = (int)_decimal_Data;
	// Work only the whole part.
	int _store_Binary[20];
	int _loop = 0;
	for (; _only_Integer_Part >= 1; _loop++)
	{
		_store_Binary[_loop] = _only_Integer_Part % 2;
		_only_Integer_Part = _only_Integer_Part / 2;
	}
	_arrage_Binary_Data(&_store_Binary, &_loop);
	_printer_Of_Binary_Data(&_store_Binary, &_loop);
	// Code for fractional part.
	double _gentrated_Value[6] = {0};
	int _precision_Counter = 1;
	int _index_Of_Arrays = 0;
	int _array_Checking_Loop = 0;
	int _one_Step_Advance = 0;
	bool _break_Outer_Loop = false;
	while (_precision_Counter != 7)
	{
		/*
		Defination of downward code.
		0.123456 * 2 = 0.246921; store 0
		0.246921 * 2 = 0.493824; store 0
		0.493824 * 2 = 0.987648; store 0
		0.987648 * 2 = 1.975296; store 1 [I taken this 1 for this reason second step multiplay 1.975296 - 1 = 0.975296, 0.975296 * 2 = show on... like this.] 
		0.975296 * 2 = 1.950592; store 1
		0.950592 * 2 = 1.901184; store 1
		We can do calculation further but in this program I am only write code for calculate 6 steps.
		*/
		_gentrated_Value[_index_Of_Arrays] = _without_Integer_Part * 2;
		if ((_without_Integer_Part * 2) > 1)
		{
			_without_Integer_Part = (_without_Integer_Part * 2) - 1;
		}
		else
		{
			_without_Integer_Part *= 2;
		}
		/*
		This downward section for after multiply one time next step if we will get same result then block further calculation.
		0.123456 * 2 = x; store 0
		0.246921 * 2 = 0.493824; store 0
		0.493824 * 2 = x; store 0 [Before x and this x is same and after store step's 0 block further calculation].
		*/
		_one_Step_Advance = _without_Integer_Part * 2;
		while (_index_Of_Arrays >= _array_Checking_Loop)
		{
			if (_one_Step_Advance == _gentrated_Value[_array_Checking_Loop])
			{
				_gentrated_Value[_index_Of_Arrays + 1] = _one_Step_Advance;
				_break_Outer_Loop = true;
				break;
			}

			_array_Checking_Loop++;
		}
		if (_break_Outer_Loop == true)
		{
			break;
		}
		_index_Of_Arrays++;
		_precision_Counter++;
	}
	printf(".");
	_index_Of_Arrays = 0;
	while (_index_Of_Arrays <= 5)
	{
		printf("%d", (int)_gentrated_Value[_index_Of_Arrays]);
		_index_Of_Arrays++;
	}
	printf("(Approximatly)");
	printf("\nPress any key for go to meun.");
	return 0;
}
// Fractional decimal to binary conversion.
int _fractional_Binary_To_Decimal(void)
{
	char _store_Binary_data[500];
	printf("Enter your fractional binary data wich you want to convert into decimal:");
	fflush(stdin);
	gets(_store_Binary_data);
	printf("\n");
	int _index = 0;
	// Working with whole part.
	int _total_Of_Whole_Part = 0;
	int _power = 1;
	int _reverse_Index = 0;
	for (; _store_Binary_data[_index] != 46;)
	{
		_index++;
	}
	for (_reverse_Index = (_index - 1); (_reverse_Index) != -1;)
	{
		_total_Of_Whole_Part = _total_Of_Whole_Part + _power * (_store_Binary_data[_reverse_Index] - 48);
		_power *= 2;
		_reverse_Index--;
	}
	// Working with fractional part.
	_index += 1;
	int _power_Counter = 1;
	double _total_Of_Fractional_Part = 0.000000;
	for (; _store_Binary_data[_index] != '\0';)
	{
		_total_Of_Fractional_Part = _total_Of_Fractional_Part + ((1 / pow(2, _power_Counter)) * (_store_Binary_data[_index] - 48));
		_power_Counter += 1;
		_index++;
	}
	printf("Decimal data is:%lf", _total_Of_Whole_Part + _total_Of_Fractional_Part);
	getch();
	return 0;
}
// Decimal to octal.
int _decimal_To_Octal(void)
{
	int _store_Octal[500];
	int _loop = 0;
	int _pressed_Data = 0;
	unsigned long long _arrange_Data = 0;
	printf("Enter your decimal number, Wich you want to convert in octal:");
	while (1)
	{
		_pressed_Data = getch();
		if (_pressed_Data >= 48 && _pressed_Data <= 57)
		{
			printf("%c", _pressed_Data);
			_arrange_Data = (_arrange_Data * 10 + (_pressed_Data - 48));
		}
		else if (_pressed_Data == 13)
		{
			break;
		}
		else if (_pressed_Data == 8)
		{
			_arrange_Data = (_arrange_Data / 10);
			system("cls");
			printf("Enter your decimal number, Wich you want to convert in octal:");
			printf("%llu", _arrange_Data);
			if (_arrange_Data == 0)
			{
				system("cls");
				printf("Enter your decimal number, Wich you want to convert in octal:");
			}
		}
	}
	for (; _arrange_Data >= 1; _loop++)
	{
		_store_Octal[_loop] = _arrange_Data % 8;
		_arrange_Data = _arrange_Data / 8;
	}
	// Use arrange binary data use for arange octal data.
	_arrage_Binary_Data(&_store_Octal, &_loop);
	// Printer binary data use for print octal data.
	_printer_Of_Binary_Data(&_store_Octal, &_loop);
	return 0;
}
// Octal to decimal.
int _octal_To_Decimal(void)
{
	unsigned long long _octal_Data = 0000000000;
	printf("Enter your octal data, Wich you want to convert into decimal:");
	fflush(stdin);
	scanf("%d", &_octal_Data);
	// Eroor handling because octal symbol are betwee 0-7 if user enter any number grater then 7 this program will show eroor message.
	unsigned long long _eroor_Handling = _octal_Data;
	bool _forward_Calculation = true;
	while (_eroor_Handling > 0)
	{
		if ((_eroor_Handling % 10) > 7)
		{
			printf("\nIn your numbe have %d, This is not an symbol of octal, Octal all symbol have between 0-7.", (_eroor_Handling % 10));
			_forward_Calculation = false;
			break;
		}

		_eroor_Handling /= 10;
	}
	if (_forward_Calculation == true)
	{
		int _total_Counter = 0;
		int _power = 1;
		while (_octal_Data > 0)
		{
			_total_Counter = _total_Counter + _power * (_octal_Data % 10);
			_octal_Data = _octal_Data / 10;
			_power = _power * 8;
		}
		printf("\nDecimal data is:%d", _total_Counter);
	}
	getch();
	system("cls");
	return 0;
}
// Fractional decimal to octal.
int _fractional_Decimal_To_Octal(void)
{
	double _decimal_Data = 0.000000;
	printf("Enter your fractional decimal data, Wich you convert into octal:");
	fflush(stdin);
	scanf("%lf", &_decimal_Data);
	// Code for octal,s whole part.
	int _only_Whole_Part_Of_decimal_Data = (int)_decimal_Data;
	int _store_Octal_Of_Whole_Part_Of_Decimal[20] = {0};
	int _store_Octal_Of_Whole_Part_Of_Decimal_Index = 0;

	while (_only_Whole_Part_Of_decimal_Data >= 1)
	{
		_store_Octal_Of_Whole_Part_Of_Decimal[_store_Octal_Of_Whole_Part_Of_Decimal_Index] = _only_Whole_Part_Of_decimal_Data % 8;
		_only_Whole_Part_Of_decimal_Data = _only_Whole_Part_Of_decimal_Data / 8;
		_store_Octal_Of_Whole_Part_Of_Decimal_Index++;
	}
	// The arrange binary data using for arrange octal data.
	_arrage_Binary_Data(&_store_Octal_Of_Whole_Part_Of_Decimal, &_store_Octal_Of_Whole_Part_Of_Decimal_Index);
	_printer_Of_Binary_Data(&_store_Octal_Of_Whole_Part_Of_Decimal, &_store_Octal_Of_Whole_Part_Of_Decimal_Index);
	// Working only fractional part.
	double _fractional_Part_Of_Decimal_Data = _decimal_Data - ((int)_decimal_Data);
	int _store_Fractional_Octal_Part[6] = {0};
	int _presion_Counter_And_Array_Index = 0;
	int _store_Multiplayed_Result = 0;
	while (_presion_Counter_And_Array_Index != 6)
	{
		_store_Fractional_Octal_Part[_presion_Counter_And_Array_Index] = (_fractional_Part_Of_Decimal_Data * 8);
		if ((_fractional_Part_Of_Decimal_Data * 8) > 1)
		{
			_fractional_Part_Of_Decimal_Data = (_fractional_Part_Of_Decimal_Data * 8) - _store_Fractional_Octal_Part[_presion_Counter_And_Array_Index];
		}
		else
		{
			_fractional_Part_Of_Decimal_Data *= 8;
		}

		_presion_Counter_And_Array_Index++;
	}
	printf(".");
	_presion_Counter_And_Array_Index = 0;
	while (_presion_Counter_And_Array_Index != 6)
	{
		printf("%d", _store_Fractional_Octal_Part[_presion_Counter_And_Array_Index]);
		_presion_Counter_And_Array_Index++;
	}
	getch();
}
// Fractional octal to decimal.
int _fractional_Octal_To_Decimal(void)
{
	// Variable section.
	char _fractional_Octal_Data[30] = {'`'};
	int _eroor_Handling_Loop = 0;
	bool _nothing_Have_Any_Eroor_Calculation_Can_Be_Send_Forward = true;
	printf("Enter your feactional octal data, Wich you want to convert in decimal:");
	fflush(stdin);
	gets(_fractional_Octal_Data);
	while (_fractional_Octal_Data[_eroor_Handling_Loop] != '\0')
	{
		if (!(_fractional_Octal_Data[_eroor_Handling_Loop] >= 48 && _fractional_Octal_Data[_eroor_Handling_Loop] <= 55 || _fractional_Octal_Data[_eroor_Handling_Loop] == 46))
		{
			printf("On your number have %c, This digit is not a symbol of octal for this further calculation not possiable.", _fractional_Octal_Data[_eroor_Handling_Loop]);
			_nothing_Have_Any_Eroor_Calculation_Can_Be_Send_Forward = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	if (_nothing_Have_Any_Eroor_Calculation_Can_Be_Send_Forward == true)
	{
		// Working with whole part.
		int _power_Count = 1;
		int _loop_For_Whole_Part = 0;
		int _total = 0;
		// This downward loop for calculation the fractional part.
		int _loop_For_Fractional_Part = 0;
		while (_fractional_Octal_Data[_loop_For_Whole_Part] != 46)
		{
			_loop_For_Whole_Part++;
		}
		_loop_For_Fractional_Part = _loop_For_Whole_Part + 1;
		_loop_For_Whole_Part -= 1;
		// Genrate the whole's decimal.
		while (_loop_For_Whole_Part != -1)
		{
			_total = _total + ((_power_Count) * (_fractional_Octal_Data[_loop_For_Whole_Part] - 48));
			_power_Count *= 8;
			_loop_For_Whole_Part--;
		}
		// Genrate the fraction part's decimal.
		double _total_Of_Fractional_Part = 0;
		int _power = 1;
		while (_fractional_Octal_Data[_loop_For_Fractional_Part] != '\0')
		{
			_total_Of_Fractional_Part = _total_Of_Fractional_Part + (pow(8, (_power * -1)) * (_fractional_Octal_Data[_loop_For_Fractional_Part] - 48));
			_loop_For_Fractional_Part++;
			_power++;
		}

		printf("\nThe decimal data is:%lf", _total_Of_Fractional_Part + _total);
		getch();
	}
}
// Binary to octal.
int _binary_To_Octal(void)
{
	char _binary_Data[210] = {[0 ... 209] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _condition_Send_Forward = true;
	printf("Enter your binary data, Wich you want to convert into octal:");
	fflush(stdin);
	gets(_binary_Data);
	while (_binary_Data[_eroor_Handling_Loop] != '\0')
	{
		if (!(_binary_Data[_eroor_Handling_Loop] == 48 || _binary_Data[_eroor_Handling_Loop] == 49 || _binary_Data[_eroor_Handling_Loop] == 95))
		{
			printf("\nIn your enterd binary number have %c, That is not symbol of binary because binary symbol have between have 0-1.", _binary_Data[_eroor_Handling_Loop]);
			_condition_Send_Forward = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	// If the [_condition_Send_Forward == true], Then on the binary data nothing have any unwanted value except 0,1 binary digit.
	// Here use array insertion data structure for insert elemetne on sub-seript 0.
	if (_condition_Send_Forward == true)
	{
		// Needable variables.
		int _push_Position = 0;
		int _last_Index_Shift = 0;
		// bool _one_Time_True = true;
		int _how_Many_Element_Have_On_This_Binary_Store_Array;
		// Find the last index where have null.
		_last_Index_Shift = _eroor_Handling_Loop;
		// I want to make 3 pair of every binary element, The eroor handling loop was go upto null that mean null-place - 1 = how many element have on this array.
		_how_Many_Element_Have_On_This_Binary_Store_Array = _eroor_Handling_Loop;
		while (_how_Many_Element_Have_On_This_Binary_Store_Array % 3 != 0)
		{
			if (_eroor_Handling_Loop != 201)
			{
				// For updat the null chracter.
				_binary_Data[_eroor_Handling_Loop + 1] = '\0';
				// For update last index index shift.
				_last_Index_Shift = _eroor_Handling_Loop;
				while (_push_Position < _last_Index_Shift)
				{
					_binary_Data[_last_Index_Shift] = _binary_Data[_last_Index_Shift - 1];
					_last_Index_Shift--;
				}
				if (_last_Index_Shift == 0)
				{
					_binary_Data[_last_Index_Shift] = '0';
				}

				_eroor_Handling_Loop++;
			}
			_how_Many_Element_Have_On_This_Binary_Store_Array++;
		}
		// Now take three pair of formated binary wich have store on _binary_Data and convert the three three pair one one by one decimal.
		int _find_Null_Chracter_In_Binary_Array = 0;

		int _right_Side = 0;
		int _left_Side = 0;
		int _total_Of_Three_Pair = 0;
		int _power = 2;
		// int _where_Have_Null_Chracter_In_Binary_Array =
		for (; _binary_Data[_find_Null_Chracter_In_Binary_Array] != '\0'; _find_Null_Chracter_In_Binary_Array++)
			;

		printf("Octal is:");
		for (; _find_Null_Chracter_In_Binary_Array != 0;)
		{
			for (_right_Side = _left_Side + 2, _power = 2, _total_Of_Three_Pair = 0; _left_Side <= _right_Side;)
			{
				_total_Of_Three_Pair = _total_Of_Three_Pair + pow(2, _power) * (_binary_Data[_left_Side] - 48);
				_power--;
				_left_Side++;
			}
			printf("%d", _total_Of_Three_Pair);
			_find_Null_Chracter_In_Binary_Array -= 3;
		}
	}
	return 0;
}
// Fractional binary to octal.
int _fractional_Binary_To_Octal(void)
{
	char _binary_Data[210] = {[0 ... 209] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _condition_Send_Forward = true;
	printf("Enter your fractional binary data, Wich you want to convert into octal:");
	fflush(stdin);
	gets(_binary_Data);
	while (_binary_Data[_eroor_Handling_Loop] != '\0')
	{
		if (!(_binary_Data[_eroor_Handling_Loop] == 48 || _binary_Data[_eroor_Handling_Loop] == 49 || _binary_Data[_eroor_Handling_Loop] == 95 || _binary_Data[_eroor_Handling_Loop] == 46))
		{
			printf("\nIn your enterd binary number have %c, That is not symbol of binary because binary symbol have between have 0-1.", _binary_Data[_eroor_Handling_Loop]);
			_condition_Send_Forward = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	// If the [_condition_Send_Forward == true], Then on the binary data nothing have any unwanted value except 0,1 binary digit.
	// Here use array insertion data structure for insert elemetne on sub-seript 0.

	if (_condition_Send_Forward == true)
	{
		// Needable variables.
		int _push_Position = 0;
		int _last_Index_Shift = 0;
		// bool _one_Time_True = true;
		int _find_Where_Have_Dot_On_Binary_Array = 0;
		// Find the last index where have null.
		_last_Index_Shift = _eroor_Handling_Loop;
		for (; _binary_Data[_find_Where_Have_Dot_On_Binary_Array] != 46; _find_Where_Have_Dot_On_Binary_Array++)
			;
		while (_find_Where_Have_Dot_On_Binary_Array % 3 != 0)
		{
			// 209 is ending position of _binary.
			if (_eroor_Handling_Loop != 209)
			{
				// For updat the null chracter.
				_binary_Data[_eroor_Handling_Loop + 1] = '\0';
				// For update last index index shift.
				_last_Index_Shift = _eroor_Handling_Loop;
				while (_push_Position < _last_Index_Shift)
				{
					_binary_Data[_last_Index_Shift] = _binary_Data[_last_Index_Shift - 1];
					_last_Index_Shift--;
				}
				if (_last_Index_Shift == 0)
				{
					_binary_Data[_last_Index_Shift] = '0';
				}

				_eroor_Handling_Loop++;
			}
			_find_Where_Have_Dot_On_Binary_Array++;
		}
		// Now take three pair of formated binary wich have store on _binary_Data and convert the three three pair one one by one decimal.
		int _find_Dot_Chracter_In_Binary_Array = 0;

		int _right_Side = 0;
		int _left_Side = 0;
		int _total_Of_Three_Pair = 0;
		int _power = 2;
		// int _where_Have_Null_Chracter_In_Binary_Array =
		for (; _binary_Data[_find_Dot_Chracter_In_Binary_Array] != '.'; _find_Dot_Chracter_In_Binary_Array++)
			;

		printf("Octal is:");
		for (; _find_Dot_Chracter_In_Binary_Array != 0;)
		{
			for (_right_Side = _left_Side + 2, _power = 2, _total_Of_Three_Pair = 0; _left_Side <= _right_Side;)
			{
				_total_Of_Three_Pair = _total_Of_Three_Pair + pow(2, _power) * (_binary_Data[_left_Side] - 48);
				_power--;
				_left_Side++;
			}
			if (_total_Of_Three_Pair != 0)
			{
				printf("%d", _total_Of_Three_Pair);
			}
			_find_Dot_Chracter_In_Binary_Array -= 3;
		}
		// Calculate after dot [.].
		printf(".");
		int _find_The_Dot_In_Binary_Array = 0;
		for (; _binary_Data[_find_The_Dot_In_Binary_Array] != 46; _find_The_Dot_In_Binary_Array++)
			;
		// After fetch dot simple plus one because after dot will be start a new calculation.
		_find_The_Dot_In_Binary_Array += 1;
		// Now find how many values have after dot can will be after dot values lenght divisible by 3 because I want three three pair and if do't possible to make three three pair then i will make it.
		int _check_Can_After_Dot_Values_Lenght_Is_Divisible_By_Three = 1;
		for (; _binary_Data[_find_The_Dot_In_Binary_Array] != '\0'; _find_The_Dot_In_Binary_Array++, _check_Can_After_Dot_Values_Lenght_Is_Divisible_By_Three++)
			;
		_check_Can_After_Dot_Values_Lenght_Is_Divisible_By_Three -= 1;
		for (; (_check_Can_After_Dot_Values_Lenght_Is_Divisible_By_Three % 3) != 0;)
		{
			_binary_Data[_find_The_Dot_In_Binary_Array] = '0';
			_find_The_Dot_In_Binary_Array++;
			_check_Can_After_Dot_Values_Lenght_Is_Divisible_By_Three++;
		}
		// So after make the situation to get three three pair now calculate the value of three thre pair.
		_find_The_Dot_In_Binary_Array = 0;
		int _alarm_Of_Three_Pair = 1;
		int _total_Counter = 0;
		for (; _binary_Data[_find_The_Dot_In_Binary_Array] != 46; _find_The_Dot_In_Binary_Array++)
			;
		_find_The_Dot_In_Binary_Array += 1;
		// After gaet  dot chracter.
		for (; _binary_Data[_find_The_Dot_In_Binary_Array] != '\0';)
		{
			for (_alarm_Of_Three_Pair = 1, _power = 2, _total_Counter = 0; _alarm_Of_Three_Pair <= 3; _alarm_Of_Three_Pair++)
			{
				_total_Counter = _total_Counter + (pow(2, _power) * (_binary_Data[_find_The_Dot_In_Binary_Array] - 48));
				_power--;
				_find_The_Dot_In_Binary_Array++;
			}
			if (_total_Counter != 0)
			{
				printf("%d", _total_Counter);
			}
		}
	}
	return 0;
}
// Octal to binary.
int _octal_To_Binary(void)
{
	char _octal_Storer[200] = {[0 ... 199] = '\0'};
	bool _send_Clculation_Forward = true;
	int _divide_Element_In_Integer = 0;
	int _store_Binary[3] = {[0 ... 2] = 0};
	int _index;
	printf("Enter you octal data, Wich you want to convert in binary:");
	fflush(stdin);
	gets(_octal_Storer);
	for (int _eroor_Handling_Loop = 0; _octal_Storer[_eroor_Handling_Loop] != '\0'; _eroor_Handling_Loop++)
	{
		if ((_octal_Storer[_eroor_Handling_Loop] - 48) > 7)
		{
			printf("\nIn you octal's value have %c, Wich is not a symbol of octal for this fornt's calculation not possible.", _octal_Storer[_eroor_Handling_Loop]);
			_send_Clculation_Forward = false;
			break;
		}
	}
	// If do't have any eroor then calculate further.
	printf("\nBinary is:");
	if (_send_Clculation_Forward == true)
	{

		for (int _visit_Every_Element = 0; _octal_Storer[_visit_Every_Element] != '\0'; _visit_Every_Element++)
		{
			_divide_Element_In_Integer = (_octal_Storer[_visit_Every_Element] - 48);
			_store_Binary[0] = 0;
			_store_Binary[1] = 0;
			_store_Binary[2] = 0;
			for (_index = 0; _divide_Element_In_Integer >= 1; _index++)
			{
				_store_Binary[_index] = _divide_Element_In_Integer % 2;
				_divide_Element_In_Integer /= 2;
			}
			printf("%d%d%d ", _store_Binary[2], _store_Binary[1], _store_Binary[0]);
		}
	}
}
// Fractional octal to binary.
int _fractional_Octal_To_Binary(void)
{
	char _octal_Storer[200] = {[0 ... 199] = '\0'};
	bool _send_Clculation_Forward = true;
	int _divide_Element_In_Integer = 0;
	int _store_Binary[3] = {[0 ... 2] = 0};
	int _index;
	printf("Enter you octal data, Wich you want to convert in binary:");
	fflush(stdin);
	gets(_octal_Storer);
	for (int _eroor_Handling_Loop = 0; _octal_Storer[_eroor_Handling_Loop] != '\0'; _eroor_Handling_Loop++)
	{
		if ((_octal_Storer[_eroor_Handling_Loop] - 48) > 7 || !(46))
		{
			printf("\nIn you octal's value have %c, Wich is not a symbol of octal for this fornt's calculation not possible.", _octal_Storer[_eroor_Handling_Loop]);
			_send_Clculation_Forward = false;
			break;
		}
	}
	// If do't have any eroor then calculate further.
	printf("\nBinary is:");
	if (_send_Clculation_Forward == true)
	{
		int _visit_Every_Element = 0;

		for (; _octal_Storer[_visit_Every_Element] != 46; _visit_Every_Element++)
		{
			_divide_Element_In_Integer = (_octal_Storer[_visit_Every_Element] - 48);
			_store_Binary[0] = 0;
			_store_Binary[1] = 0;
			_store_Binary[2] = 0;
			for (_index = 0; _divide_Element_In_Integer >= 1; _index++)
			{
				_store_Binary[_index] = _divide_Element_In_Integer % 2;
				_divide_Element_In_Integer /= 2;
			}
			printf("%d%d%d ", _store_Binary[2], _store_Binary[1], _store_Binary[0]);
		}
		printf(".");
		for (; _octal_Storer[_visit_Every_Element + 1] != '\0'; _visit_Every_Element++)
		{
			_divide_Element_In_Integer = (_octal_Storer[_visit_Every_Element + 1] - 48);
			_store_Binary[0] = 0;
			_store_Binary[1] = 0;
			_store_Binary[2] = 0;
			for (_index = 0; _divide_Element_In_Integer >= 1; _index++)
			{
				_store_Binary[_index] = _divide_Element_In_Integer % 2;
				_divide_Element_In_Integer /= 2;
			}
			printf("%d%d%d ", _store_Binary[2], _store_Binary[1], _store_Binary[0]);
		}
	}
}
// Hexadecimal to decimal.
int _hexadecimal_To_Decimal(void)
{
	// Variables sections.
	char _take_Hex_Value_Form_User[250];
	int _total = 0;
	printf("Enter your hexadecimal data, Wich you want to convert in decimal.");
	fflush(stdin);
	gets(_take_Hex_Value_Form_User);
	// Eroor handling.
	int _eroor_Handling_Loop = 0;
	bool _calculation_Send_Forward = true;
	for (; _take_Hex_Value_Form_User[_eroor_Handling_Loop] != '\0'; _eroor_Handling_Loop++)
	{
		if (!(((_take_Hex_Value_Form_User[_eroor_Handling_Loop] - 48) >= 0 && (_take_Hex_Value_Form_User[_eroor_Handling_Loop] - 48) <= 9) || (_take_Hex_Value_Form_User[_eroor_Handling_Loop] >= 'A' && _take_Hex_Value_Form_User[_eroor_Handling_Loop] <= 'F')))
		{
			printf("In your enterd hexadecimal number have \" %c \",It is not a symbol of hexadecimal.", _take_Hex_Value_Form_User[_eroor_Handling_Loop]);
			_calculation_Send_Forward = false;

			break;
		}
		if (_eroor_Handling_Loop > 249)
		{
			printf("Your entered value is cross maximum of size.");
			_calculation_Send_Forward = false;
			break;
		}
	}

	if (_calculation_Send_Forward == true)
	{
		int _index_Of_Array = 0;
		// Assign hex value in integer form in a integer array.
		int _assign_Crossponding_Value[250];
		for (; (_eroor_Handling_Loop - 1) >= _index_Of_Array; _index_Of_Array++)
		{
			if ((_take_Hex_Value_Form_User[_index_Of_Array] - 48) >= 0 && (_take_Hex_Value_Form_User[_index_Of_Array] - 48) <= 9)
			{
				_assign_Crossponding_Value[_index_Of_Array] = (_take_Hex_Value_Form_User[_index_Of_Array] - 48);
			}
			else
			{
				_assign_Crossponding_Value[_index_Of_Array] = (_take_Hex_Value_Form_User[_index_Of_Array] - 55);
			}
		}
		// Now find the power like if hex is 125A then {1 * (16)^2 + 2 * (16)^1 + 10 * (16)^0}
		int _terminate_Loop = 0;
		int _exponent = 0;
		while (_terminate_Loop <= (_index_Of_Array - 1))
		{
			_total = _total + (_assign_Crossponding_Value[(_index_Of_Array - 1)] * pow(16, _exponent));
			_exponent++;
			_index_Of_Array--;
		}
		printf("\nDecimal is:%d", _total);
	}

	return 0;
}
// Binary to hexadecimal.
int _binary_To_Hexadecimal(void)
{
	char _binary_Array[200] = {[0 ... 199] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _condition_Send_Forward = true;
	printf("Enter your binary number, Wich you want to convert in to hexadecimal:");
	fflush(stdin);
	gets(_binary_Array);
	while (_binary_Array[_eroor_Handling_Loop] != '\0')
	{
		if (!(_binary_Array[_eroor_Handling_Loop] == '1' || _binary_Array[_eroor_Handling_Loop] == '0'))
		{
			printf("In your enterd chracter have %c, Wich is not a symbol of binary for this not possible to calculation further.", _binary_Array[_eroor_Handling_Loop]);
			_condition_Send_Forward = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	// If do't have any eroor.
	if (_condition_Send_Forward == true)
	{
		// Now chek can four four pair in binary array, If not ohen make this situation.
		int _element_Of_This_Binary_Array = _eroor_Handling_Loop;
		int _position_Of_Null;
		while ((_element_Of_This_Binary_Array) % 4 != 0)
		{
			_position_Of_Null = 0;
			while (_binary_Array[_position_Of_Null] != '\0')
			{
				_position_Of_Null++;
			}

			while (_position_Of_Null != 0)
			{
				_binary_Array[_position_Of_Null] = _binary_Array[_position_Of_Null - 1];
				_position_Of_Null--;
			}
			if (_position_Of_Null == 0)
			{
				_binary_Array[0] = '0';
			}
			_element_Of_This_Binary_Array++;
		}
		// Data is arranged.
		int _terminate_All_Inner_Loop = 0;
		int _left_Side = 0;
		int _right_Side = 3;
		int _right_Side_Duplicate = _right_Side;
		int _power;
		int _total;
		printf("\nHexadecimal is:");
		while (_binary_Array[_right_Side] != '\0')
		{
			for (_power = 0, _right_Side_Duplicate = _right_Side, _total = 0; _left_Side <= _right_Side_Duplicate;)
			{
				_total = _total + ((_binary_Array[_right_Side_Duplicate] - 48) * pow(2, _power));
				_power++;
				_right_Side_Duplicate--;
			}
			_right_Side += 4;
			_left_Side += 4;
			_preset_For_Hexadecimal_Value(&_total);
		}
	}
}
int _preset_For_Hexadecimal_Value(int *_adress_Of_decimal_Value)
{
	switch (*(_adress_Of_decimal_Value))
	{
	case 0:
		printf("0");
		break;
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	case 4:
		printf("4");
		break;
	case 5:
		printf("5");
		break;
	case 6:
		printf("6");
		break;
	case 7:
		printf("7");
		break;
	case 8:
		printf("8");
		break;
	case 9:
		printf("9");
		break;
	case 10:
		printf("A");
		break;
	case 11:
		printf("B");
		break;
	case 12:
		printf("C");
		break;
	case 13:
		printf("D");
		break;
	case 14:
		printf("E");
		break;
	default:
		printf("F");
		break;
	}
}
// Fractional binary to hexadecimal.
int _fractional_Binary_To_Hexadecimal(void)
{
	char _binary_Array[200] = {[0 ... 199] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _condition_Send_Forward = true;
	printf("Enter your fractional. binary number, Wich you want to convert in to hexadecimal:");
	fflush(stdin);
	gets(_binary_Array);
	while (_binary_Array[_eroor_Handling_Loop] != '\0')
	{
		if (!(_binary_Array[_eroor_Handling_Loop] == '1' || _binary_Array[_eroor_Handling_Loop] == '0' || _binary_Array[_eroor_Handling_Loop] == '.'))
		{
			printf("In your enterd chracter have %c, Wich is not a symbol of binary for this not possible to calculation further.", _binary_Array[_eroor_Handling_Loop]);
			_condition_Send_Forward = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	// If do't have any eroor.
	if (_condition_Send_Forward == true)
	{
		// Now chek can four four pair in binary array, If not ohen make this situation.
		int _total_Element_Before_Of_Dot_Chracter = 0;
		// Counting total element before of dot chracter.
		while (_binary_Array[_total_Element_Before_Of_Dot_Chracter] != '.')
		{
			_total_Element_Before_Of_Dot_Chracter++;
		}

		int _position_Of_Null;
		while ((_total_Element_Before_Of_Dot_Chracter) % 4 != 0)
		{
			// Updata where have null value.
			_position_Of_Null = 0;
			while (_binary_Array[_position_Of_Null] != '\0')
			{
				_position_Of_Null++;
			}

			while (_position_Of_Null != 0)
			{
				_binary_Array[_position_Of_Null] = _binary_Array[_position_Of_Null - 1];
				_position_Of_Null--;
			}
			if (_position_Of_Null == 0)
			{
				_binary_Array[0] = '0';
			}
			_total_Element_Before_Of_Dot_Chracter++;
		}
		// Chek after dot how many binary element have and chek in this binary element can be possible to make four four pair if yes go forward outherwise make this type situation.
		int _position_Of_Dot_Chracter = 0;
		int _size_Of_Binary_Element_In_Binary_Array_After_Dot = 1;
		while (_binary_Array[_position_Of_Dot_Chracter] != '.')
		{
			_position_Of_Dot_Chracter++;
		}
		// I will add one because to go after dot where start the fractional part.
		_position_Of_Dot_Chracter += 1;
		// After find the position of dot, Determine that how many binary element have after the dot.
		while (_binary_Array[_size_Of_Binary_Element_In_Binary_Array_After_Dot] != '\0')
		{
			_size_Of_Binary_Element_In_Binary_Array_After_Dot++;
		}
		// I will subtract by one because ignor the null chracter.
		_size_Of_Binary_Element_In_Binary_Array_After_Dot -= 1;
		while (_size_Of_Binary_Element_In_Binary_Array_After_Dot % 4 != 0)
		{
			_binary_Array[_size_Of_Binary_Element_In_Binary_Array_After_Dot + 1] = '0';
			_size_Of_Binary_Element_In_Binary_Array_After_Dot++;
		}
		// Now convert in to binary to hexadecimal.
		// The steps of this section is
		/*
			1)Find the position dot chracter.
			2)Delete dot chracter.
			3)Take four four pair and convert decimal then decimal to hexadecimal in every ittration in this "Position of dot chracter" subtract by four and when "Position of dot chracter" value will be zero on this time print a dot in console.
			4)Repeat this steps until when does't come the null chracter.
		*/
		// Find position of dot chracter.
		_position_Of_Dot_Chracter = 0;
		while (_binary_Array[_position_Of_Dot_Chracter] != '.')
		{
			_position_Of_Dot_Chracter++;
		}
		for (int _duplicate_Position_Of_Dot_Chracter = _position_Of_Dot_Chracter; _binary_Array[_duplicate_Position_Of_Dot_Chracter] != '\0'; _duplicate_Position_Of_Dot_Chracter++)
		{
			_binary_Array[_duplicate_Position_Of_Dot_Chracter] = _binary_Array[_duplicate_Position_Of_Dot_Chracter + 1];
		}
		// Convert decimal and decimal to hexadecimal.
		int _left_Side = 0;
		int _right_Side = 3;
		int _right_Side_Duplicate = _right_Side;
		int _power;
		int _total;
		printf("\nHexadecimal is:");
		while (_binary_Array[_right_Side] != '\0')
		{
			for (_power = 0, _right_Side_Duplicate = _right_Side, _total = 0; _left_Side <= _right_Side_Duplicate;)
			{
				_total = _total + ((_binary_Array[_right_Side_Duplicate] - 48) * pow(2, _power));
				_power++;
				_right_Side_Duplicate--;
			}
			_right_Side += 4;
			_left_Side += 4;
			_preset_For_Hexadecimal_Value(&_total);
			if ((_position_Of_Dot_Chracter -= 4) == 0)
			{
				printf(".");
			}
		}
	}
	return 0;
}
// Hexadecimal to binary
int hexadecimal_To_Binary(void)
{
	char _hexadecimal_Data[200] = {[0 ... 199] = '\0'};
	printf("Enter your hexadecimal data, Wich you want to convert in to binary.");
	fflush(stdin);
	gets(_hexadecimal_Data);
	// Eroor checking section
	bool _calculation_Further = true;
	int _eroor_Handling_Loop = 0;
	for (; _hexadecimal_Data[_eroor_Handling_Loop] != '\0'; _eroor_Handling_Loop++)
	{
		if (!((_hexadecimal_Data[_eroor_Handling_Loop] >= '0' && _hexadecimal_Data[_eroor_Handling_Loop] <= '9') || (_hexadecimal_Data[_eroor_Handling_Loop] >= 'A' && _hexadecimal_Data[_eroor_Handling_Loop] <= 'F')))
		{
			printf("Your entered hexadecimal data have %c, Wich is wrong.", _hexadecimal_Data[_eroor_Handling_Loop]);
			_calculation_Further = false;
			break;
		}
	}
	if (_calculation_Further == true)
	{
		// Steps.
		/*
			1)Take first data from hexadecimal array.
			2)Pass this data in to preset.
			3)Wich data will return the preset simple convert it into binary .
			4)Print the genrated binary data.
			5)Perform the all upward steps untill do't come the null chracter in hexadecimal array.
		*/
		int _return_Value_From_Preset = 0;
		int _index_For_Visit_All_Hexadecimal_Array_Element;
		int _store_Binary_Array[4] = {[0 ... 3] = -1};
		int _index_For_store_In_Binary_Array = 0;
		for (_index_For_Visit_All_Hexadecimal_Array_Element = 0; _hexadecimal_Data[_index_For_Visit_All_Hexadecimal_Array_Element] != '\0'; _index_For_Visit_All_Hexadecimal_Array_Element++)
		{
			_return_Value_From_Preset = _preset_For_Crossponding_Hexadecimal_Value(&_hexadecimal_Data[_index_For_Visit_All_Hexadecimal_Array_Element]);
			_store_Binary_Array[0] = 0;
			_store_Binary_Array[1] = 0;
			_store_Binary_Array[2] = 0;
			_store_Binary_Array[3] = 0;
			for (_index_For_store_In_Binary_Array = 0; _return_Value_From_Preset > 0; _index_For_store_In_Binary_Array++)
			{
				_store_Binary_Array[_index_For_store_In_Binary_Array] = _return_Value_From_Preset % 2;
				_return_Value_From_Preset /= 2;
			}
			printf("%d%d%d%d ", _store_Binary_Array[3], _store_Binary_Array[2], _store_Binary_Array[1], _store_Binary_Array[0]);
		}
	}
}

int _preset_For_Crossponding_Hexadecimal_Value(char *_address_Of_Hexdecimal_Value)
{
	switch (*(_address_Of_Hexdecimal_Value))
	{
	case '0':
		return 0;
		break;
	case '1':
		return 1;
		break;
	case '2':
		return 2;
		break;
	case '3':
		return 3;
		break;
	case '4':
		return 4;
		break;
	case '5':
		return 5;
		break;
	case '6':
		return 6;
		break;
	case '7':
		return 7;
		break;
	case '8':
		return 8;
		break;
	case '9':
		return 9;
		break;
	case 'A':
		return 10;
		break;
	case 'B':
		return 11;
		break;
	case 'C':
		return 12;
		break;
	case 'D':
		return 13;
		break;
	case 'E':
		return 14;
		break;
	default:
		return 15;
		break;
	}
}
// Fractional hexadecimal to binary.
int _fractional_Hexadecimal_To_Binary(void)
{
	char _hexadecimal_Data[200] = {[0 ... 199] = '\0'};
	printf("Enter your fractional hexadecimal data, Wich you want to convert in to binary:");
	fflush(stdin);
	gets(_hexadecimal_Data);
	// Eroor checking section
	bool _calculation_Further = true;
	int _eroor_Handling_Loop = 0;
	for (; _hexadecimal_Data[_eroor_Handling_Loop] != '\0'; _eroor_Handling_Loop++)
	{
		if (!((_hexadecimal_Data[_eroor_Handling_Loop] >= '0' && _hexadecimal_Data[_eroor_Handling_Loop] <= '9') || (_hexadecimal_Data[_eroor_Handling_Loop] >= 'A' && _hexadecimal_Data[_eroor_Handling_Loop] <= 'F') || _hexadecimal_Data[_eroor_Handling_Loop] <= '.'))
		{
			printf("Your entered hexadecimal data have %c, Wich is wrong.", _hexadecimal_Data[_eroor_Handling_Loop]);
			_calculation_Further = false;
			break;
		}
	}
	if (_calculation_Further == true)
	{
		// Steps.
		/*
			1)Take first data from hexadecimal array.
			2)Pass this data in to preset.
			3)Wich data will return the preset simple convert it into binary .
			4)Print the genrated binary data.
			5)Perform the all upward steps untill do't come the null chracter in hexadecimal array.
		*/
		int _return_Value_From_Preset = 0;
		int _index_For_Visit_All_Hexadecimal_Array_Element;
		int _store_Binary_Array[4] = {[0 ... 3] = -1};
		int _index_For_store_In_Binary_Array = 0;
		for (_index_For_Visit_All_Hexadecimal_Array_Element = 0; _hexadecimal_Data[_index_For_Visit_All_Hexadecimal_Array_Element] != '\0'; _index_For_Visit_All_Hexadecimal_Array_Element++)
		{
			// This downward condition because
			if (_hexadecimal_Data[_index_For_Visit_All_Hexadecimal_Array_Element] != '.')
			{
				_return_Value_From_Preset = _preset_For_Crossponding_Hexadecimal_Value(&_hexadecimal_Data[_index_For_Visit_All_Hexadecimal_Array_Element]);
				_store_Binary_Array[0] = 0;
				_store_Binary_Array[1] = 0;
				_store_Binary_Array[2] = 0;
				_store_Binary_Array[3] = 0;
				for (_index_For_store_In_Binary_Array = 0; _return_Value_From_Preset > 0; _index_For_store_In_Binary_Array++)
				{
					_store_Binary_Array[_index_For_store_In_Binary_Array] = _return_Value_From_Preset % 2;
					_return_Value_From_Preset /= 2;
				}
				printf("%d%d%d%d ", _store_Binary_Array[3], _store_Binary_Array[2], _store_Binary_Array[1], _store_Binary_Array[0]);
			}
		}
	}
	return 0;
}
// Octal to hexadecimal.
int _octal_To_Hexadecimal(void)
{
	// How to convert octal to hexadecimal.
	/*
			Let the octal data is:
			 2	 5	 7	 5	 2 
			010 101 111 101 010 [Divided each octal digit in binary].
			Now, making four four pair of binary data's form rightside of binary data, If will get short then simple add zero.
			0010	1011	1110	1010 
			 2       B		 E       A  Convert the topward binary to hexadecimal.
	*/
	char _octal_Data[200] = {[0 ... 199] = '\0'};
	printf("Enter you octal data, Wich you want to convert in to hexadecimal:");
	fflush(stdin);
	gets(_octal_Data);
	// Eroor handling.
	int _eroor_Handling = 0;
	bool _calculation_Further = true;
	for (; _octal_Data[_eroor_Handling] != '\0'; _eroor_Handling++)
	{
		if (!(_octal_Data[_eroor_Handling] >= '0' && _octal_Data[_eroor_Handling] <= '7'))
		{
			_calculation_Further = false;
			printf("In your entered your chracter have %c, Wich is not a symbol of hexadecimal.", _octal_Data[_eroor_Handling]);
			break;
		}
	}
	if (_calculation_Further == true)
	{
		// First calculate the binary.
		int _Store_Binary_Data_Respect_Of_Octal_Data[600] = {[0 ... 599] = 0};
		int _index_For_Store_Binary_Data = 0;
		int _index_For_Access_Octal_Data = 0;
		int _time = 1;
		int _octal_Data_In_Integer_Method = 0;
		for (; _octal_Data[_index_For_Access_Octal_Data] != '\0'; _index_For_Access_Octal_Data++)
		{
			_octal_Data_In_Integer_Method = 0;
			_time = 1;
			_octal_Data_In_Integer_Method = _octal_Data[_index_For_Access_Octal_Data] - 48;
			for (; _octal_Data_In_Integer_Method > 0;)
			{
				if (_time == 1)
				{
					_Store_Binary_Data_Respect_Of_Octal_Data[_index_For_Store_Binary_Data + 2] = _octal_Data_In_Integer_Method % 2;
				}
				else if (_time == 2)
				{
					_Store_Binary_Data_Respect_Of_Octal_Data[_index_For_Store_Binary_Data + 1] = _octal_Data_In_Integer_Method % 2;
				}
				else
				{
					_Store_Binary_Data_Respect_Of_Octal_Data[_index_For_Store_Binary_Data] = _octal_Data_In_Integer_Method % 2;
				}
				_octal_Data_In_Integer_Method /= 2;
				_time++;
			}

			_index_For_Store_Binary_Data = _index_For_Store_Binary_Data + 3;
		}
		// Insertion because of I want to make four four pair form right side then if I will get sort to make four four pair then add simple 0 at the first of array.
		int _last_Element_Place = _index_For_Store_Binary_Data - 1;
		while (_index_For_Store_Binary_Data % 4 != 0)
		{
			_last_Element_Place = _index_For_Store_Binary_Data - 1;
			while (_last_Element_Place != -1)
			{

				_Store_Binary_Data_Respect_Of_Octal_Data[_last_Element_Place + 1] = _Store_Binary_Data_Respect_Of_Octal_Data[_last_Element_Place];
				_last_Element_Place--;
			}
			_Store_Binary_Data_Respect_Of_Octal_Data[0] = 0;
			_index_For_Store_Binary_Data++;
		}
		// Now simple take four four pair form left side and convert in into hexa decimal.
		int _alarm = 1;
		int _right_Side = 3;
		int _right_Side_Incrementor = 0;
		int _coppy_Of_Right_Side;
		int _left_Side = 0;
		int _total = 0;
		int _power = 0;
		for (; 0 < (_index_For_Store_Binary_Data);)
		{

			for (_coppy_Of_Right_Side = _right_Side, _total = 0, _power = 0; _left_Side <= _coppy_Of_Right_Side; _coppy_Of_Right_Side--, _power++)
			{
				_total = _total + (_Store_Binary_Data_Respect_Of_Octal_Data[_coppy_Of_Right_Side] * pow(2, _power));
			}
			_right_Side = _right_Side + 4;
			_left_Side = _left_Side + 4;
			_index_For_Store_Binary_Data -= 4;
			_preset_For_Hexadecimal_Value(&_total);
		}
	}

	return 0;
}
// Fractional octal to hexadecimal conversion.

int _fractional_Octal_To_Hexadecimal(void)
{
	// How to convert octal to hexadecimal.
	/*
			Let the octal data is:
			 2	 5	 7	 5	 2 .  2	  5
			010 101 111 101 010  010 101[Divided each octal digit in binary].
			Now, making four four pair of binary data's form rightside of binary data, If will get short then simple add zero.
			0010	1011	1110	1010 . 1001	0100 [For binary add zeros on the last places accoding to the four pair]
		     2       B		 E        A      5    4     Convert the topward binary to hexadecimal.
	*/
	char _octal_Data[200] = {[0 ... 199] = '\0'};
	printf("Enter you fractional octal data, Wich you want to convert in to hexadecimal:");
	fflush(stdin);
	gets(_octal_Data);
	// Eroor handling.
	int _eroor_Handling = 0;
	bool _calculation_Further = true;
	for (; _octal_Data[_eroor_Handling] != '\0'; _eroor_Handling++)
	{
		if (!((_octal_Data[_eroor_Handling] >= '0' && _octal_Data[_eroor_Handling] <= '7') || (_octal_Data[_eroor_Handling] == '.')))
		{
			_calculation_Further = false;
			printf("In your entered your chracter have %c, Wich is not a symbol of hexadecimal.", _octal_Data[_eroor_Handling]);
			break;
		}
	}
	if (_calculation_Further == true)
	{
		// Working with whole part.
		int _Store_Binary_Data_Respect_Of_Octal_Data[600] = {[0 ... 599] = 0};
		int _index_For_Store_Binary_Data = 0;
		int _index_For_Access_Octal_Data = 0;
		int _time = 1;
		int _octal_Data_In_Integer_Method = 0;
		for (; _octal_Data[_index_For_Access_Octal_Data] != '.'; _index_For_Access_Octal_Data++)
		{
			_octal_Data_In_Integer_Method = 0;
			_octal_Data_In_Integer_Method = _octal_Data[_index_For_Access_Octal_Data] - 48;
			_time = 1;
			for (; _octal_Data_In_Integer_Method > 0;)
			{
				if (_time == 1)
				{
					_Store_Binary_Data_Respect_Of_Octal_Data[_index_For_Store_Binary_Data + 2] = _octal_Data_In_Integer_Method % 2;
				}
				else if (_time == 2)
				{
					_Store_Binary_Data_Respect_Of_Octal_Data[_index_For_Store_Binary_Data + 1] = _octal_Data_In_Integer_Method % 2;
				}
				else
				{
					_Store_Binary_Data_Respect_Of_Octal_Data[_index_For_Store_Binary_Data] = _octal_Data_In_Integer_Method % 2;
				}
				_octal_Data_In_Integer_Method /= 2;
				_time++;
			}

			_index_For_Store_Binary_Data = _index_For_Store_Binary_Data + 3;
		}
		// Insertion because of I want to make four four pair form right side then if I will get sort to make four four pair then add simple 0 at the first of array.
		int _last_Element_Place = _index_For_Store_Binary_Data - 1;
		while (_index_For_Store_Binary_Data % 4 != 0)
		{
			_last_Element_Place = _index_For_Store_Binary_Data - 1;
			while (_last_Element_Place != -1)
			{

				_Store_Binary_Data_Respect_Of_Octal_Data[_last_Element_Place + 1] = _Store_Binary_Data_Respect_Of_Octal_Data[_last_Element_Place];
				_last_Element_Place--;
			}
			_Store_Binary_Data_Respect_Of_Octal_Data[0] = 0;
			_index_For_Store_Binary_Data++;
		}
		// Now simple take four four pair form left side and convert in into hexa decimal.
		int _alarm = 1;
		int _right_Side = 3;
		int _right_Side_Incrementor = 0;
		int _coppy_Of_Right_Side;
		int _left_Side = 0;
		int _total = 0;
		int _power = 0;
		for (; 0 < (_index_For_Store_Binary_Data);)
		{

			for (_coppy_Of_Right_Side = _right_Side, _total = 0, _power = 0; _left_Side <= _coppy_Of_Right_Side; _coppy_Of_Right_Side--, _power++)
			{
				_total = _total + (_Store_Binary_Data_Respect_Of_Octal_Data[_coppy_Of_Right_Side] * pow(2, _power));
			}
			_right_Side = _right_Side + 4;
			_left_Side = _left_Side + 4;
			_index_For_Store_Binary_Data -= 4;
			_preset_For_Hexadecimal_Value(&_total);
		}

		// Working with the fractional part, First fins where have the dot chracter.
		int _place_Of_Dot_Chracter = 0;
		while (_octal_Data[_place_Of_Dot_Chracter] != '.')
		{
			_place_Of_Dot_Chracter++;
		}
		// Find how many chracter have after dot and if the lenght of dot chracter is devisible by 4 the will be calculate further or if do not possiable four four pair then must be make this type situation then calculate decimal value of genrated binary and print the hexadecimal value respect of decimal value.
		int _Store_Binary_Data_Respect_Of_Octal_Data_After_Dot[600] = {[0 ... 599] = 0};
		_index_For_Store_Binary_Data = 0;
		_index_For_Access_Octal_Data = _place_Of_Dot_Chracter + 1;
		_time = 1;
		_octal_Data_In_Integer_Method = 0;
		for (; _octal_Data[_index_For_Access_Octal_Data] != '\0'; _index_For_Access_Octal_Data++)
		{
			_octal_Data_In_Integer_Method = 0;
			_octal_Data_In_Integer_Method = _octal_Data[_index_For_Access_Octal_Data] - 48;
			_time = 1;
			for (; _octal_Data_In_Integer_Method > 0;)
			{
				if (_time == 1)
				{
					_Store_Binary_Data_Respect_Of_Octal_Data_After_Dot[_index_For_Store_Binary_Data + 2] = _octal_Data_In_Integer_Method % 2;
				}
				else if (_time == 2)
				{
					_Store_Binary_Data_Respect_Of_Octal_Data_After_Dot[_index_For_Store_Binary_Data + 1] = _octal_Data_In_Integer_Method % 2;
				}
				else
				{
					_Store_Binary_Data_Respect_Of_Octal_Data_After_Dot[_index_For_Store_Binary_Data] = _octal_Data_In_Integer_Method % 2;
				}
				_octal_Data_In_Integer_Method /= 2;
				_time++;
			}
			_index_For_Store_Binary_Data = _index_For_Store_Binary_Data + 3;
		}
		int _lenght_Of_The_Fractional_Part = _index_For_Store_Binary_Data;
		while (_lenght_Of_The_Fractional_Part % 4 != 0)
		{
			_Store_Binary_Data_Respect_Of_Octal_Data_After_Dot[_lenght_Of_The_Fractional_Part] = 0;
			_lenght_Of_The_Fractional_Part++;
		}
		_alarm = 1;
		_right_Side = 3;
		_coppy_Of_Right_Side;
		_left_Side = 0;
		_total = 0;
		_power = 0;
		printf(".");
		for (; 0 < (_lenght_Of_The_Fractional_Part);)
		{

			for (_coppy_Of_Right_Side = _right_Side, _total = 0, _power = 0; _left_Side <= _coppy_Of_Right_Side; _coppy_Of_Right_Side--, _power++)
			{
				_total = _total + (_Store_Binary_Data_Respect_Of_Octal_Data_After_Dot[_coppy_Of_Right_Side] * pow(2, _power));
			}
			_right_Side = _right_Side + 4;
			_left_Side = _left_Side + 4;
			_lenght_Of_The_Fractional_Part -= 4;
			_preset_For_Hexadecimal_Value(&_total);
		}
		printf(" (Approximatly).");
		return 0;
	}
}
// Hexadecimal to octal.
int _hexadecimal_To_Octal(void)
{
	// Take hexadecimal data and eroor handling.
	char _store_Hexadecimal_Data[200] = {[0 ... 199] = '\0'};
	int _crossponding_Hexadecimal_Integer_Value[200] = {[0 ... 199] = 0};
	int _loop_For_Index_Of_Assigner_Crossponding_Value = 0;
	bool _calculation_Further = true;
	printf("Enter your hexadecimal data, Wich you want to convert in octal:");
	fflush(stdin);
	gets(_store_Hexadecimal_Data);
	for (; _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] != '\0'; _loop_For_Index_Of_Assigner_Crossponding_Value++)
	{
		_crossponding_Hexadecimal_Integer_Value[_loop_For_Index_Of_Assigner_Crossponding_Value] = _preset_For_Crossponding_Hexadecimal_Value(&_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value]);
		if (!((_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] >= '0' && _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] <= '9') || (_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] >= 'A' && _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] <= 'F')))
		{
			printf("In your entered hexadecimal value have \'%c\' wich is not a hexadecimal symbol.", _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value]);
			_calculation_Further = false;
			break;
		}
	}
	if (_calculation_Further == true)
	{
		int _binary_Of_Hexadecimal_Integer_Value[800] = {[0 ... 799] = 0};
		int _alarm = 4;
		int _index_Of_Binary_Store_Array = 0;
		for (int _terminate_Loop = 0; (_loop_For_Index_Of_Assigner_Crossponding_Value - 1) >= _terminate_Loop; _terminate_Loop++)
		{
			for (_alarm = 1; _alarm <= 4; _alarm++)
			{
				if (_alarm == 1)
				{
					_binary_Of_Hexadecimal_Integer_Value[_index_Of_Binary_Store_Array + 3] = _crossponding_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else if (_alarm == 2)
				{
					_binary_Of_Hexadecimal_Integer_Value[_index_Of_Binary_Store_Array + 2] = _crossponding_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else if (_alarm == 3)
				{
					_binary_Of_Hexadecimal_Integer_Value[_index_Of_Binary_Store_Array + 1] = _crossponding_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else
				{
					_binary_Of_Hexadecimal_Integer_Value[_index_Of_Binary_Store_Array + 0] = _crossponding_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				_crossponding_Hexadecimal_Integer_Value[_terminate_Loop] /= 2;
			}
			_index_Of_Binary_Store_Array += 4;
		}
		int _total_Length = _index_Of_Binary_Store_Array - 1;
		int _duplicate_Of_total_Lenght = _total_Length;
		while ((_total_Length + 1) % 3 != 0)
		{
			_duplicate_Of_total_Lenght = _total_Length;
			while (_duplicate_Of_total_Lenght != -1)
			{
				_binary_Of_Hexadecimal_Integer_Value[_duplicate_Of_total_Lenght + 1] = _binary_Of_Hexadecimal_Integer_Value[_duplicate_Of_total_Lenght];
				_duplicate_Of_total_Lenght--;
			}
			_binary_Of_Hexadecimal_Integer_Value[0] = 0;
			_total_Length++;
		}
		// Taking three three pair form left side and convert every pair in to 	decimal.
		printf("Your octal data is:");
		int _total;
		int _power;
		int _right_Side = 2;
		int _left_Side = 0;
		int coppy_Of_Right_Side_Value;
		for (; _total_Length >= _right_Side;)
		{
			for (coppy_Of_Right_Side_Value = _right_Side, _power = 0, _total = 0; _left_Side <= coppy_Of_Right_Side_Value; _power++, coppy_Of_Right_Side_Value--)
			{
				_total = _total + (_binary_Of_Hexadecimal_Integer_Value[coppy_Of_Right_Side_Value] * pow(2, _power));
			}
			printf("%d", _total);
			_right_Side += 3;
			_left_Side += 3;
		}
		return 0;
	}
}
// Fractional hexadecimal to octal.
int _fractional_Hexadecimal_To_Octal(void)
{
	// Take hexadecimal data and eroor handling.
	char _store_Hexadecimal_Data[200] = {[0 ... 199] = '\0'};
	int _crossponding_Whole_Hexadecimal_Integer_Value[200] = {[0 ... 199] = 0};
	int _crossponding_Fractional_Hexadecimal_Integer_Value[200] = {[0 ... 199] = 0};
	int _loop_For_Index_Of_Assigner_Crossponding_Value = 0;
	int _index_For_Assigner_Fracrional_Value = 0;
	int _index_For_Assignner_Whole_Part = 0;
	bool _calculation_Further = true;
	int _integer_Or_Fractionl = 1;
	printf("Enter your fractional hexadecimal data, Wich you want to convert in octal:");
	fflush(stdin);
	gets(_store_Hexadecimal_Data);
	for (; _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] != '\0'; _loop_For_Index_Of_Assigner_Crossponding_Value++)
	{
		// _integer_Or_Fractionl == 0 is fractional part.
		// _integer_Or_Fractionl == 1 is whole part.
		if (_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] == '.')
		{
			_integer_Or_Fractionl = 0;
			continue;
		}

		if (_integer_Or_Fractionl == 1)
		{
			_crossponding_Whole_Hexadecimal_Integer_Value[_index_For_Assignner_Whole_Part] = _preset_For_Crossponding_Hexadecimal_Value(&_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value]);
			_index_For_Assignner_Whole_Part++;
		}
		else
		{
			_crossponding_Fractional_Hexadecimal_Integer_Value[_index_For_Assigner_Fracrional_Value] = _preset_For_Crossponding_Hexadecimal_Value(&_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value]);
			_index_For_Assigner_Fracrional_Value++;
		}

		// Eroor handling.
		if (!((_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] >= '0' && _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] <= '9') || (_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] >= 'A' && _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] <= 'F') || (_store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value] == '.')))
		{
			printf("In your entered hexadecimal value have \'%c\' wich is not a hexadecimal symbol.", _store_Hexadecimal_Data[_loop_For_Index_Of_Assigner_Crossponding_Value]);
			_calculation_Further = false;
			break;
		}
	}
	if (_calculation_Further == true)
	{

		// Making binar of whole part.
		int _binary_Of_Heaxdecimal_Integer_Only_Whole_Part[800] = {[0 ... 799] = 0};
		int _alarm = 4;
		int _index_Of_Binary_Store_Array = 0;
		for (int _terminate_Loop = 0; (_index_For_Assignner_Whole_Part - 1) >= _terminate_Loop; _terminate_Loop++)
		{
			for (_alarm = 1; _alarm <= 4; _alarm++)
			{
				if (_alarm == 1)
				{
					_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[_index_Of_Binary_Store_Array + 3] = _crossponding_Whole_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else if (_alarm == 2)
				{
					_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[_index_Of_Binary_Store_Array + 2] = _crossponding_Whole_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else if (_alarm == 3)
				{
					_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[_index_Of_Binary_Store_Array + 1] = _crossponding_Whole_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else
				{
					_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[_index_Of_Binary_Store_Array + 0] = _crossponding_Whole_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				_crossponding_Whole_Hexadecimal_Integer_Value[_terminate_Loop] /= 2;
			}
			_index_Of_Binary_Store_Array += 4;
		}
		// Arrange binary of whole part.
		int total_Length_Of_Whole_Part_Binary = _index_Of_Binary_Store_Array - 1;
		int _duplicate_Of_total_Lenght = total_Length_Of_Whole_Part_Binary;
		while ((total_Length_Of_Whole_Part_Binary + 1) % 3 != 0)
		{
			_duplicate_Of_total_Lenght = total_Length_Of_Whole_Part_Binary;
			while (_duplicate_Of_total_Lenght != -1)
			{
				_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[_duplicate_Of_total_Lenght + 1] = _binary_Of_Heaxdecimal_Integer_Only_Whole_Part[_duplicate_Of_total_Lenght];
				_duplicate_Of_total_Lenght--;
			}
			_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[0] = 0;
			total_Length_Of_Whole_Part_Binary++;
		}
		// Making binary of fractional part.
		int _binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[800] = {[0 ... 799] = 0};
		_alarm = 4;
		_index_Of_Binary_Store_Array = 0;
		for (int _terminate_Loop = 0; (_index_For_Assigner_Fracrional_Value - 1) >= _terminate_Loop; _terminate_Loop++)
		{
			for (_alarm = 1; _alarm <= 4; _alarm++)
			{
				if (_alarm == 1)
				{
					_binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[_index_Of_Binary_Store_Array + 3] = _crossponding_Fractional_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else if (_alarm == 2)
				{
					_binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[_index_Of_Binary_Store_Array + 2] = _crossponding_Fractional_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else if (_alarm == 3)
				{
					_binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[_index_Of_Binary_Store_Array + 1] = _crossponding_Fractional_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				else
				{
					_binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[_index_Of_Binary_Store_Array + 0] = _crossponding_Fractional_Hexadecimal_Integer_Value[_terminate_Loop] % 2;
				}
				_crossponding_Fractional_Hexadecimal_Integer_Value[_terminate_Loop] /= 2;
			}
			_index_Of_Binary_Store_Array += 4;
		}
		int total_Lenght_Of_Fractional_Part_binary = _index_Of_Binary_Store_Array - 1;
		while (total_Lenght_Of_Fractional_Part_binary % 3 != 0)
		{
			_binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[total_Lenght_Of_Fractional_Part_binary] = 0;
			total_Lenght_Of_Fractional_Part_binary++;
		}
		// Calculate the whole part.
		printf("Your octal data is:");
		int _total;
		int _power;
		int _right_Side = 2;
		int _left_Side = 0;
		int coppy_Of_Right_Side_Value;
		for (; total_Length_Of_Whole_Part_Binary >= _right_Side;)
		{
			for (coppy_Of_Right_Side_Value = _right_Side, _power = 0, _total = 0; _left_Side <= coppy_Of_Right_Side_Value; _power++, coppy_Of_Right_Side_Value--)
			{
				_total = _total + (_binary_Of_Heaxdecimal_Integer_Only_Whole_Part[coppy_Of_Right_Side_Value] * pow(2, _power));
			}
			printf("%d", _total);
			_right_Side += 3;
			_left_Side += 3;
		}
		printf(".");
		_total;
		_power;
		_right_Side = 2;
		_left_Side = 0;
		coppy_Of_Right_Side_Value;
		for (; total_Lenght_Of_Fractional_Part_binary >= _right_Side;)
		{
			for (coppy_Of_Right_Side_Value = _right_Side, _power = 0, _total = 0; _left_Side <= coppy_Of_Right_Side_Value; _power++, coppy_Of_Right_Side_Value--)
			{
				_total = _total + (_binary_Of_Heaxdecimal_Integer_Only_Fractional_Part[coppy_Of_Right_Side_Value] * pow(2, _power));
			}
			printf("%d", _total);
			_right_Side += 3;
			_left_Side += 3;
		}
	}

	return 0;
}
// Binary addition.
int _binary_Addition(void)
{
	char _first_Number[100] = {[0 ... 99] = '\0'};
	char _second_Number[100] = {[0 ... 99] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _calculation_Further = true;
	printf("Enter your first number:");
	fflush(stdin);
	gets(_first_Number);
	strrev(_first_Number);
	// First number eroor.
	while (_first_Number[_eroor_Handling_Loop] != '\0')
	{
		if (!((_first_Number[_eroor_Handling_Loop] == '1') || (_first_Number[_eroor_Handling_Loop] == '0')))
		{
			printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _first_Number[_eroor_Handling_Loop]);
			_calculation_Further = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	if (_calculation_Further == true)
	{
		printf("\nEnter your second number:");
		fflush(stdin);
		gets(_second_Number);
		strrev(_second_Number);
		_eroor_Handling_Loop = 0;
		while (_second_Number[_eroor_Handling_Loop] != '\0')
		{
			if (!(_second_Number[_eroor_Handling_Loop] == '1' || _second_Number[_eroor_Handling_Loop] == '0'))
			{
				printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _second_Number[_eroor_Handling_Loop]);
				_calculation_Further = false;
				break;
			}
			_eroor_Handling_Loop++;
		}
	}

	// Now convert first number and second number in decimal from.
	if (_calculation_Further == true)
	{
		int _exponent = 0;
		int _index_Of_First_Number = 0;
		int _total_Of_First_Number = 0;
		while (_first_Number[_index_Of_First_Number] != '\0')
		{
			_total_Of_First_Number = _total_Of_First_Number + ((_first_Number[_index_Of_First_Number] - 48) * pow(2, _exponent));
			_index_Of_First_Number++;
			_exponent++;
		}
		_exponent = 0;
		int _index_Of_Second_Number = 0;
		int _total_Of_Second_Number = 0;
		while (_second_Number[_index_Of_Second_Number] != '\0')
		{
			_total_Of_Second_Number = _total_Of_Second_Number + ((_second_Number[_index_Of_Second_Number] - 48) * pow(2, _exponent));
			_index_Of_Second_Number++;
			_exponent++;
		}
		// Addition first number and second number.
		int _addition_Result_In_Decimal = _total_Of_First_Number + _total_Of_Second_Number;
		printf("\nAddition result in decimal:%d", _addition_Result_In_Decimal);
		printf("\nAddition result in decimal:");
		char _store_Added_Binary[100] = {[0 ... 99] = '\0'};
		int _index = 0;
		while (_addition_Result_In_Decimal > 0)
		{
			if ((_addition_Result_In_Decimal % 2) == 0)
			{
				_store_Added_Binary[_index] = '0';
			}
			else
			{
				_store_Added_Binary[_index] = '1';
			}

			_addition_Result_In_Decimal /= 2;
			_index++;
		}
		strrev(_store_Added_Binary);
		printf("%s", _store_Added_Binary);
	}
}
// Binary subtraction
int _binary_Subtraction(void)
{
	char _first_Number[100] = {[0 ... 99] = '\0'};
	char _second_Number[100] = {[0 ... 99] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _calculation_Further = true;
	printf("Enter your first number:");
	fflush(stdin);
	gets(_first_Number);
	strrev(_first_Number);
	// First number eroor.
	while (_first_Number[_eroor_Handling_Loop] != '\0')
	{
		if (!((_first_Number[_eroor_Handling_Loop] == '1') || (_first_Number[_eroor_Handling_Loop] == '0')))
		{
			printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _first_Number[_eroor_Handling_Loop]);
			_calculation_Further = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	if (_calculation_Further == true)
	{
		printf("\nEnter your second number:");
		fflush(stdin);
		gets(_second_Number);
		strrev(_second_Number);
		_eroor_Handling_Loop = 0;
		while (_second_Number[_eroor_Handling_Loop] != '\0')
		{
			if (!(_second_Number[_eroor_Handling_Loop] == '1' || _second_Number[_eroor_Handling_Loop] == '0'))
			{
				printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _second_Number[_eroor_Handling_Loop]);
				_calculation_Further = false;
				break;
			}
			_eroor_Handling_Loop++;
		}
	}

	// Now convert first number and second number in decimal from.
	if (_calculation_Further == true)
	{
		int _exponent = 0;
		int _index_Of_First_Number = 0;
		int _total_Of_First_Number = 0;
		while (_first_Number[_index_Of_First_Number] != '\0')
		{
			_total_Of_First_Number = _total_Of_First_Number + ((_first_Number[_index_Of_First_Number] - 48) * pow(2, _exponent));
			_index_Of_First_Number++;
			_exponent++;
		}
		_exponent = 0;
		int _index_Of_Second_Number = 0;
		int _total_Of_Second_Number = 0;
		while (_second_Number[_index_Of_Second_Number] != '\0')
		{
			_total_Of_Second_Number = _total_Of_Second_Number + ((_second_Number[_index_Of_Second_Number] - 48) * pow(2, _exponent));
			_index_Of_Second_Number++;
			_exponent++;
		}
		// Subtract first number and second number.
		int _subtraction_Result_In_Decimal = _total_Of_First_Number - _total_Of_Second_Number;
		printf("\nAddition result in decimal:%d", _subtraction_Result_In_Decimal);
		printf("\nAddition result in decimal:");
		char _store_Subtract_Binary[100] = {[0 ... 99] = '\0'};
		int _index = 0;

		if (_subtraction_Result_In_Decimal < 0)
		{
			_subtraction_Result_In_Decimal *= -1;
			printf("-");
		}

		while (_subtraction_Result_In_Decimal > 0)
		{
			if ((_subtraction_Result_In_Decimal % 2) == 0)
			{
				_store_Subtract_Binary[_index] = '0';
			}
			else
			{
				_store_Subtract_Binary[_index] = '1';
			}

			_subtraction_Result_In_Decimal /= 2;
			_index++;
		}
		if (_store_Subtract_Binary[0] == '\0')
		{
			_store_Subtract_Binary[0] = '0';
		}
		strrev(_store_Subtract_Binary);
		printf("%s", _store_Subtract_Binary);
	}
}
// Binary division.
int _binary_Division(void)
{
	char _first_Number[100] = {[0 ... 99] = '\0'};
	char _second_Number[100] = {[0 ... 99] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _calculation_Further = true;
	printf("Enter your first number:");
	fflush(stdin);
	gets(_first_Number);
	strrev(_first_Number);
	// First number eroor.
	while (_first_Number[_eroor_Handling_Loop] != '\0')
	{
		if (!((_first_Number[_eroor_Handling_Loop] == '1') || (_first_Number[_eroor_Handling_Loop] == '0')))
		{
			printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _first_Number[_eroor_Handling_Loop]);
			_calculation_Further = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	if (_calculation_Further == true)
	{
		printf("\nEnter your second number:");
		fflush(stdin);
		gets(_second_Number);
		strrev(_second_Number);
		_eroor_Handling_Loop = 0;
		while (_second_Number[_eroor_Handling_Loop] != '\0')
		{
			if (!(_second_Number[_eroor_Handling_Loop] == '1' || _second_Number[_eroor_Handling_Loop] == '0'))
			{
				printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _second_Number[_eroor_Handling_Loop]);
				_calculation_Further = false;
				break;
			}
			_eroor_Handling_Loop++;
		}
	}

	// Now convert first number and second number in decimal from.
	if (_calculation_Further == true)
	{
		int _exponent = 0;
		int _index_Of_First_Number = 0;
		double _total_Of_First_Number = 0;
		while (_first_Number[_index_Of_First_Number] != '\0')
		{
			_total_Of_First_Number = _total_Of_First_Number + ((_first_Number[_index_Of_First_Number] - 48) * pow(2, _exponent));
			_index_Of_First_Number++;
			_exponent++;
		}
		printf("\nFirst Number in decimal:%d", (int)_total_Of_First_Number);
		_exponent = 0;
		int _index_Of_Second_Number = 0;
		double _total_Of_Second_Number = 0;
		while (_second_Number[_index_Of_Second_Number] != '\0')
		{
			_total_Of_Second_Number = _total_Of_Second_Number + ((_second_Number[_index_Of_Second_Number] - 48) * pow(2, _exponent));
			_index_Of_Second_Number++;
			_exponent++;
		}
		printf("\nSecond Number in decimal:%d", (int)_total_Of_Second_Number);
		// Division first number and second number.
		double _division_Result_In_The_Decimal = _total_Of_First_Number / _total_Of_Second_Number;
		int _remainder = ((int)_total_Of_First_Number) % ((int)_total_Of_Second_Number);
		printf("\n\nQuotient in decimal:%f", _division_Result_In_The_Decimal);
		printf("\nRemainder in decimal:%d", _remainder);
		// Convert decimal quotient to binary.
		printf("\n\nQuotient in binary:");
		double _decimal_Data = _division_Result_In_The_Decimal;
		double _without_Integer_Part = _decimal_Data - (int)_decimal_Data;
		int _only_Integer_Part = (int)_decimal_Data;
		// Work only the whole part.
		int _store_Binary[20];
		int _loop = 0;
		if (_only_Integer_Part == 0)
		{
			printf("0");
		}
		else
		{
			for (; _only_Integer_Part >= 1; _loop++)
			{
				_store_Binary[_loop] = _only_Integer_Part % 2;
				_only_Integer_Part = _only_Integer_Part / 2;
			}
			_arrage_Binary_Data(&_store_Binary, &_loop);
			_printer_Of_Binary_Data(&_store_Binary, &_loop);
		}
		// Code for fractional part.
		double _gentrated_Value[6] = {0};
		int _precision_Counter = 1;
		int _index_Of_Arrays = 0;
		int _array_Checking_Loop = 0;
		int _one_Step_Advance = 0;
		bool _break_Outer_Loop = false;
		while (_precision_Counter != 7)
		{
			/*
		Defination of downward code.
		0.123456 * 2 = 0.246921; store 0
		0.246921 * 2 = 0.493824; store 0
		0.493824 * 2 = 0.987648; store 0
		0.987648 * 2 = 1.975296; store 1 [I taken this 1 for this reason second step multiplay 1.975296 - 1 = 0.975296, 0.975296 * 2 = show on... like this.] 
		0.975296 * 2 = 1.950592; store 1
		0.950592 * 2 = 1.901184; store 1
		We can do calculation further but in this program I am only write code for calculate 6 steps.
		*/
			_gentrated_Value[_index_Of_Arrays] = _without_Integer_Part * 2;
			if ((_without_Integer_Part * 2) > 1)
			{
				_without_Integer_Part = (_without_Integer_Part * 2) - 1;
			}
			else
			{
				_without_Integer_Part *= 2;
			}
			/*
		This downward section for after multiply one time next step if we will get same result then block further calculation.
		0.123456 * 2 = x; store 0
		0.246921 * 2 = 0.493824; store 0
		0.493824 * 2 = x; store 0 [Before x and this x is same and after store step's 0 block further calculation].
		*/
			_one_Step_Advance = _without_Integer_Part * 2;
			while (_index_Of_Arrays >= _array_Checking_Loop)
			{
				if (_one_Step_Advance == _gentrated_Value[_array_Checking_Loop])
				{
					_gentrated_Value[_index_Of_Arrays + 1] = _one_Step_Advance;
					_break_Outer_Loop = true;
					break;
				}

				_array_Checking_Loop++;
			}
			if (_break_Outer_Loop == true)
			{
				break;
			}
			_index_Of_Arrays++;
			_precision_Counter++;
		}
		printf(".");
		_index_Of_Arrays = 0;
		while (_index_Of_Arrays <= 5)
		{
			printf("%d", (int)_gentrated_Value[_index_Of_Arrays]);
			_index_Of_Arrays++;
		}
		printf("(Approximatly)");
		// Remainder in binary.
		printf("\nRemainder in binaey:");
		if (_remainder == 0)
		{
			printf("0");
		}
		while (_remainder > 0)
		{
			printf("%d", _remainder % 2);
			_remainder /= 2;
		}
	}
}
// Binary multiplication
int _binary_Multiplication(void)
{
	char _first_Number[100] = {[0 ... 99] = '\0'};
	char _second_Number[100] = {[0 ... 99] = '\0'};
	int _eroor_Handling_Loop = 0;
	bool _calculation_Further = true;
	printf("Enter your first number:");
	fflush(stdin);
	gets(_first_Number);
	strrev(_first_Number);
	// First number eroor.
	while (_first_Number[_eroor_Handling_Loop] != '\0')
	{
		if (!((_first_Number[_eroor_Handling_Loop] == '1') || (_first_Number[_eroor_Handling_Loop] == '0')))
		{
			printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _first_Number[_eroor_Handling_Loop]);
			_calculation_Further = false;
			break;
		}
		_eroor_Handling_Loop++;
	}
	if (_calculation_Further == true)
	{
		printf("\nEnter your second number:");
		fflush(stdin);
		gets(_second_Number);
		strrev(_second_Number);
		_eroor_Handling_Loop = 0;
		while (_second_Number[_eroor_Handling_Loop] != '\0')
		{
			if (!(_second_Number[_eroor_Handling_Loop] == '1' || _second_Number[_eroor_Handling_Loop] == '0'))
			{
				printf("\nIn you entered binary number have %c, Wich is not a symbol of binary", _second_Number[_eroor_Handling_Loop]);
				_calculation_Further = false;
				break;
			}
			_eroor_Handling_Loop++;
		}
	}

	// Now convert first number and second number in decimal from.
	if (_calculation_Further == true)
	{
		int _exponent = 0;
		int _index_Of_First_Number = 0;
		int _total_Of_First_Number = 0;
		while (_first_Number[_index_Of_First_Number] != '\0')
		{
			_total_Of_First_Number = _total_Of_First_Number + ((_first_Number[_index_Of_First_Number] - 48) * pow(2, _exponent));
			_index_Of_First_Number++;
			_exponent++;
		}
		_exponent = 0;
		int _index_Of_Second_Number = 0;
		int _total_Of_Second_Number = 0;
		while (_second_Number[_index_Of_Second_Number] != '\0')
		{
			_total_Of_Second_Number = _total_Of_Second_Number + ((_second_Number[_index_Of_Second_Number] - 48) * pow(2, _exponent));
			_index_Of_Second_Number++;
			_exponent++;
		}
		// Multiply first number and second number.
		int _multiply_Result_In_Decimal = _total_Of_First_Number * _total_Of_Second_Number;
		printf("\nAddition result in decimal:%d", _multiply_Result_In_Decimal);
		printf("\nAddition result in decimal:");
		char _store_Multiplyed_Binary[100] = {[0 ... 99] = '\0'};
		int _index = 0;
		while (_multiply_Result_In_Decimal > 0)
		{
			if ((_multiply_Result_In_Decimal % 2) == 0)
			{
				_store_Multiplyed_Binary[_index] = '0';
			}
			else
			{
				_store_Multiplyed_Binary[_index] = '1';
			}

			_multiply_Result_In_Decimal /= 2;
			_index++;
		}
		if (_store_Multiplyed_Binary[0] == '\0')
		{
			_store_Multiplyed_Binary[0] = '0';
		}
		strrev(_store_Multiplyed_Binary);
		printf("%s", _store_Multiplyed_Binary);
	}
}