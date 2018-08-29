# taxCalc

CS/CE 1337 (Fall-18 - Sections 505) – PROJECT 1 
Due Date: Friday, September 14, 2018 at 11:55 PM 
Submission: All programs are to be submitted in eLearning. Please submit the program’s .cpp and .exe files. These files are to be submitted simultaneously in eLearning. No credit will be given for files submitted separately. Projects can be submitted after the due date with a penalty of 2% per hour late, subject to a maximum late penalty of 50%. I encourage y’all to please avoid the late penalty! 

Problem: You have been hired by a retail outlet to write a program that will calculate the monthly taxes owed to the state and county. The program should ask the user for the month (string) and year (integer) as well as the total amount of money collected for that month (float). Please note that the input to your program is not the total sales amount, but the total-collected (i.e. sales + taxes). Given that input, your program should calculate the state taxes as well as the county taxes paid by the customers. If the user of your program has more calculation to do, your program enable them repeat the above process until they indicate that there are no more calculations. The state sales tax is 6.5% and the county sales tax is 2.75%. The amount entered by the user includes sales tax for both the state and the county. Taxes are applied at the same time to each item. If an item costs $1.00, the tax for that item would be 9.25 cents. 

Output: All dollar amounts should be rounded to 2 decimal places. The program should output the month, year, total collected, sales, county sales tax, state sales tax and total sales tax. The total collected should equal the amount of sales plus the county tax plus the state tax. Please refer to the sample output below: 

September 2018
---------------- 
Total Collected: $ 12345.67 
Sales: $ 11300.38 
County Sales Tax: $ 310.76 
State Sales Tax: $ 734.52 
Total Sales Tax: $ 1045.28

Do you want to perform another calculation? (Y/N):
