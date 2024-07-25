![alt text](https://github.com/Morg92b/holbertonschool-printf/blob/main/holbertonschoollogo.png?raw=true)

# Own \_Printf

The "\_PRINTF" project to understand how variadic functions work and how arguments are manipulated. It also aims to add custom format specifiers and develop a deeper understanding of fundamental concepts in C and system programming.

## How it's work

The printf function in C displays formatted output to the screen. It uses a format string containing text and specifiers:

`"%s"(string)`

`"%c"(character)`

`"%%"(percent sign)`

`"%i" (integer)`

`"%d"(decimal number)`

to indicate how to display each argument. Each specifier corresponds to an argument passed after the format string.

## Format Specifiers

```
Prototype : int _printf(const char *format, ...);

c : character
s : string
% : percentage sign
d : decimal number
i : integer
```

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \*.c

## Requirements

#### Working environment `Ubuntu 20.04 using GCC options -Wall -Werror -Wextra -pedantic -std=gnu89`

#### Checker `Betty`

#### Header file `main.h`

#### Allowed editors `vi, vim, emacs`

#### Compiler `GCC`

## Some examples of the use

#### Character :

`Input`

```
  #include "main.h"

  int main(void)
  {
      _printf("Character : [%c, %c]\n", 'a', 'B');

      return (0);
  }
```

`Output`

```
./testcharacter
Character : [a, B]
```

#### String :

`Input`

```
  #include "main.h"

  int main(void)
  {
      _printf("String : [%s]\n", "I'm in love with coding");

      return (0);
  }
```

`Output`

```
./teststring
String : [I'm in love with coding]
```

#### Percentage :

`Input`

```
  #include "main.h"

  int main(void)
  {
      _printf("Percent : [%%]\n");

      return (0);
  }
```

`Output`

```
./testpercentage
Percent : [%]
```

#### Decimal and Integer :

`Input`

```
  #include "main.h"

  int main(void)
  {
      int len;

      len = _printf("it's as complicated as rocket science\n");
      _printf("Our rating : [%d/%i]\n", len, len);

       return (0);
  }
```

`Output`

```
./testdecimal&integer
it's as complicated as rocket science
Our rating : [38/38]
```

## Flowchart

![alt text](https://github.com/Morg92b/holbertonschool-printf/blob/main/flowchart.png?raw=true)

## Man page

You can check the [Man Page](https://github.com/Morg92b/holbertonschool-printf/blob/main/man_3_printf) of the function here.

## Authors

If you have any questions ask:

- guillaume Farina [@Guillaume.farina](https://www.github.com/guillaumefarina)
- Morgan Bouaziz [@Morg92b](https://www.github.com/morg92b)
