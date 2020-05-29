#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int cesar_code;
    char car;
    
    cin>> cesar_code;
    cin>> car;
    while (car != '0')
    {
    	char decode_char = car - cesar_code;
    	if (decode_char < 'A')
    	    decode_char = decode_char + 26;
    	cout<< car << "->" << decode_char << endl;
    	cin>> car;
    }
    return 0;
}
