----------

## Standard Code Test

Write a program that accepts a number and then multiplies that number by three. Here are some examples of input and expected output.

|Example Input|Expected Output|
|:-----------:|:-------------:|
|-5           |-15            |
|0            |0              |
|3            |9              |

{Compile code}(g++ -o code/code_test code/code_test.cpp)
{Test Code with -5}(code/code_test -5)
{Test Code with 0}(code/code_test 0)
{Test Code with 3}(code/code_test 3)

<table><tbody ><tr><td><details><summary>
	<strong>Solution</strong>
</summary>

Here is one solution to the problem. You can copy/paste it into the IDE if you would like.

```cpp
#include <iostream> 
using namespace std; 

int main(int argc, char **argv) 
{ 
  int num = stoi(argv[1]); // typecast the string to an int
  cout << num * 3;         // print the int multiplied by 3

  return 0; 
}
```
	
</details></td></tr></tbody>
</table>

{Check It!|assessment}(code-output-compare-3274365764)
