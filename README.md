# 42-ft_printf
printf() is a well know function of the C standard librairy, this project consist of recreating it for my futures projects.

Subject : [English](https://github.com/ssfar/42-Subjects.pdf/blob/master/ft_printf.en.pdf) - [Français](https://github.com/ssfar/42-Subjects.pdf/blob/master/ft_printf.fr.pdf)

Grade 100/100  
Bonus 7/12 :  
:heavy_check_mark: Colors handeling | :heavy_check_mark: * flag implemented | :heavy_check_mark: Non-existing flags management: %b (binary) | :heavy_check_mark: Exhaustive tester (not in the repo)
#### Objectives :
• Parsing   
• Variadic function   

#### Skills :
• Imperative programming   
• Algorithms & AI   
• Unix   
• Rigor   

## How to use

#### Pre required : Make, GCC

To create the lib go into the project and build it :   
```  
make
```
This will create a lib called libftprintf.a that can be used in C programs.

The function works the same as the original exept for few missing flags, so I will talk only about the bonus here (read the man and the subject for more info).  
To print in color, write one of the following color between square brackets inside the first parameter (black, red, green, yellow, blue, magenta, cyan, white) :
```  
ft_printf("[red]the_text_to_color");
```
In front of thoses colors you can add "b_" to modify the color of the background :
```  
ft_printf("[b_red]the_text_to_color");
```
#### Backgrounds coloration open the possibility to display pixel art (by coloring spaces) : 
![printf_dolphin](https://user-images.githubusercontent.com/45463065/86522592-abff6200-be60-11ea-8f21-eb7baa3bcfae.png)  
You can also replace the color name by your own rgb values between 0 to 255 each seperated by a ";" like so :
```  
ft_printf("not_colored [123;0;255] colored");
```
To specify it's a background color whit rbg value, add a "b" in front of the first value :
```  
ft_printf("not_colored [b123;0;255] colored");
```
Thoses values can be replaced by the flag * to give the values via variables :
```  
ft_printf("not_colored [*;*;255] colored", ammount_of_red, rbg_struct.g);
```
Along that you can use the folowing attributes that most of the terminals handle by typing "a_" folowed by the attribute (reset, eoc, eob, bold, faint, italic, underlined, blink, reverse, hidden") :
```  
ft_printf("test [a_italic] test");
```
More info on thoses attributes [here](https://en.wikipedia.org/wiki/ANSI_escape_code#SGR_parameters).
