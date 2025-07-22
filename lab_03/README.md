
Exercice 1 : 

1.Command to load module insmod 
2.Command to unloead module rmmod 
![Exercise Output](./assets/output_ex01.png)


Exercice 2 : 

Since the code in the module is using pr_debug() so the log level is 7 , to disable message outputs on the console we just have to set the printk current log level using echo 7 > /proc/sys/kernel/printk 

![Exercise Output](./assets/output_ex2.png)

We can only see the debug message running the command dmesg after setting the console log level to 7 . 
![Exercice Output](./assets/dmesg_ex2.png)