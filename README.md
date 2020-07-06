# 42-ft_printf
printf() is a well-known function of the C standard library. The aim of this project is to recreate this function in order to use it in my future projects.  

Subject : [English](https://github.com/ssfar/42-Subjects.pdf/blob/master/ft_printf.en.pdf) - [Français](https://github.com/ssfar/42-Subjects.pdf/blob/master/ft_printf.fr.pdf)

Grade 100/100  
Bonus 7/12 :  
:heavy_check_mark: Colors handeling | :heavy_check_mark: * flag implemented | :heavy_check_mark: Non-existing flag management: %b (binary) | :heavy_check_mark: Exhaustive tester (not in the repo)
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

The function works the same as the original except for a few missing flags, so I will only talk about the bonus here (read the man and the subject for more info).  
To print in colors, write one of the following colors between square brackets inside the first parameter (black, red, green, yellow, blue, magenta, cyan, white) :
```  
ft_printf("[red]the_text_to_color");
```
#### Result :
![red](https://user-images.githubusercontent.com/45463065/86522941-86c12280-be65-11ea-9d0e-cd6ac065ebb2.png)  
In front of thoses colors you can add "b_" to modify the color of the background :
```  
ft_printf("[b_red]the_text_to_color");
```
#### Result :
![b_red](https://user-images.githubusercontent.com/45463065/86522946-98a2c580-be65-11ea-9665-32a7d230d175.png)  
#### Background coloration opens the possibility to display pixel art (by coloring spaces) : 
![printf_dolphin](https://user-images.githubusercontent.com/45463065/86522592-abff6200-be60-11ea-8f21-eb7baa3bcfae.png)  
You can also replace the color name by your own rgb values between 0 to 255 each seperated by a ";" like so :
```  
ft_printf("not_colored [123;0;255] colored");
```
#### Result :
![not](https://user-images.githubusercontent.com/45463065/86522942-87f24f80-be65-11ea-952e-202012b880b1.png)  
To specify that it is a background color with rbg value, add a "b" in front of the first value :
```  
ft_printf("not_colored [b123;0;255] colored");
```
#### Result :
![not b_](https://user-images.githubusercontent.com/45463065/86522943-8a54a980-be65-11ea-9541-aad910449651.png)  
Thoses values can be replaced by the flag * to give the values via variables :
```  
ft_printf("not_colored [*;*;255] colored", ammount_of_red, rbg_struct.g);
```
Along that you can use the following attributes that most of the terminals handle by typing "a_" followed by the attribute (reset, eoc, eob, bold, faint, italic, underlined, blink, reverse, hidden") :
```  
ft_printf("test [a_underlined]test");
```
#### Result :
![under_2](https://user-images.githubusercontent.com/45463065/86523022-9725cd00-be66-11ea-959a-313f449afd75.png)  

More info on thoses attributes [here](https://en.wikipedia.org/wiki/ANSI_escape_code#SGR_parameters).

Here is a demo of the binary format %b
```  
ft_printf("%b", 255);
```
#### Result :

![bin](https://user-images.githubusercontent.com/45463065/86523175-e4a33980-be68-11ea-9150-646022cb02c3.png)

