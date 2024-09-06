# Oopd_Assignment1
This C++ program calculates the Long-Term Capital Gains (LTCG) tax on real estate investments. The program estimates the selling price of a property based on historical price growth data and then calculates the LTCG tax based on the difference between the original purchase price and the estimated selling price.

Key Features
CSV Data Parsing: The program reads a CSV file containing historical price growth and inflation rates.
Selling Price Estimation: The program calculates the estimated selling price based on the growth rate between the purchase year and the selling year.
LTCG Tax Calculation: The program computes the LTCG tax at a rate of 12.5% on the calculated gains.
How It Works
Data Class: Stores the year, inflation rate, and growth price data for each year.
InflationRate Class: Handles reading the CSV file and storing the data in an array of Data objects.
TaxCalculator Class: Calculates the estimated selling price based on the initial purchase price and the historical data. It also calculates the LTCG tax based on the gain.
Main Function: The entry point of the program where user inputs are taken, and the selling price and LTCG tax are calculated and displayed.
File Structure
main.cpp: The main C++ file containing the program logic.
price-inflation.csv: A sample CSV file containing the historical price growth and inflation data (you need to provide this file).
Requirements
C++ Compiler: Requires C++11 or later for compilation.
CSV File: The CSV file (price-inflation.csv) should have the following format
Year,Growth Rate,Inflation Rate
2010,5.0,6.0
2011,6.0,7.0
Detailed Explanation
Class Definitions
Data Class:

Holds the data for each year, including the year, inflation rate, and growth price.
Constructors:
Default constructor initializes values to zero.
Parameterized constructor initializes the object with provided values.
InflationRate Class:

Stores an array of Data objects, assuming a maximum of 100 records.
Contains a readCSV() function to parse the CSV file and populate the array.
TaxCalculator Class:

Takes the initial purchase price, purchase year, and selling year as input.
Calculates the selling price by iterating over the relevant years and applying the growth factor.
Computes the LTCG tax at a rate of 12.5% on the gain (difference between the selling price and the initial purchase price).
Program Flow
Input:

The user is prompted to enter the path to the CSV file and the year of sale.
Data Reading:

The InflationRate class reads the CSV file and stores the data in an array.
Selling Price Calculation:

The TaxCalculator class computes the selling price by applying the growth rate for each year from the purchase year to the selling year.
LTCG Tax Calculation:

The program calculates the LTCG tax based on the gain at a 12.5% tax rate.
Output:

The estimated selling price and LTCG tax are displayed to the user.
Assumptions
Initial Price: The program assumes an initial purchase price of Rs 50 lakhs.
Purchase Year: The purchase year is hardcoded as 2010. You can modify this value directly in the main.cpp file.
Record Limit: The program can handle up to 100 records from the CSV file

------------------------------------------------------------------------
After calculating Everything We need to compare the results which method is better
-------------------------------------------------------------------------
Source :-- I used the chatgpt to get some insights for me whenever i am not able to solve the errors and i also used to write the readme file
------------------------------------------------------------------------------