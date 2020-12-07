----------

## Iterating Over an Array

C++ allows you to iterate over a list. That means starting with the first element and progressing through to the end of the array. Using a for loop is the easiest way to iterate over an array list.

![Iterating Over an Array](.guides/img/array-iterate.png)

<details>
	<summary><b><code>endl</code> or <code>"\n"</code>?</b></summary>
	Both <code>endl</code> and <code>"\n"</code> will add a newline character to the output. Either one will work. Remember <code>endl</code> does not need quotation marks, while <code>"\n"</code> must have them.
</details>

```cpp
#include <iostream>
using namespace std;

int numbers[4] = {1, 2, 3, 4};

int main () {
  for ( int n=0 ; n<4 ; ++n ) {
    cout << numbers[n] << endl;
  }
  return 0;
}
```

[Code Visualizer](open_tutor cpp_demo.cpp)
{Compile code}(g++ -o cpp_demo2 cpp_demo.cpp)
{Run Code}(./cpp_demo2 1)

|||challenge
## What happens if you:
* Change the [cout statement](open_file cpp_demo.cpp panel=0 ref="cout" count=1) to `cout << numbers[n];`?

[Remove highlighting](open_file cpp_demo.cpp panel=0)

|||

[Code Visualizer](open_tutor cpp_demo.cpp)
{Compile code}(g++ -o cpp_demo cpp_demo.cpp)
{Run Code}(./cpp_demo 2)

{Check It!|assessment}(parsons-puzzle-2650837085)
