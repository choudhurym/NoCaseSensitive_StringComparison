#include<stdio.h>

//function prototypes
char toUpper( char value );
int nocasecmp( const char* s1, const char* s2 );

/**********************
if string 1 == string 2 return 0
if string 1 < string 2 then return -1
if string 1 > string 2 then return 1

however in this case, during comparison the function will ignore case sensitivity
*********************/
int main()
{
	//variable declaration for taking two input strings
	char str1[100];
	char str2[100];
	
	//promt the user to enter the first string
	printf("Enter the first string to compare (string 1): ");
	scanf("%[^\n]s", str1); //read string with space character

	getchar(); // read enter after first string

	printf("Enter the second string to compare (string 2): ");
	scanf("%[^\n]s", str2); //read string with space character

	if(nocasecmp (str1, str2) == 0)
		printf("Strings are equal");
	else
		printf("Strings are not equal");

	printf("\n");

	return 0;
}
char toUpper( char value )
{
	if( value >= 'a' && value <= 'z')
		return value - 'a' + 'A';
	else
		return value;
}
int nocasecmp( const char* s1, const char* s2 )
{
	int i;
	for( i = 0; s1[i] != '\0'; i++)
	{
		if( toUpper(s1[i]) != toUpper(s2[i]) )
			return toUpper(s1[i]) - toUpper(s2[i]);
	}
	return toUpper(s1[i]) - toUpper(s2[i]);
}

