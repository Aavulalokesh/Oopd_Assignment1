# Oopd_Assignment1
LTCG Tax Calculation 
Overview
This C++ program calculates the Long-Term Capital Gains (LTCG) tax on real estate investments. It uses historical inflation and price growth data from a CSV file to estimate the selling price of the property and then computes the LTCG tax based on the difference between the purchase price and the estimated selling price.

Features
Inflation and Price Growth Modeling: Reads historical inflation and price growth data from a CSV file.
Selling Price Calculation: Estimates the selling price of the property based on the inflation and growth rates between the purchase and selling years.
LTCG Tax Calculation: Computes the LTCG tax at a rate of 20% on the calculated gains.
File Structure
question1: Contains the core logic for reading data, calculating the selling price, and calculating the LTCG tax.
price-inflation.csv: A CSV file containing the historical inflation and price growth data.
Requirements
CSV File: The program requires a CSV file named as price-inflation.csv containing data in the following format:
(Year, Growth Rate, Inflation Rate
2010, 5.0, 6.0
2011, 6.0, 7.0)
Compilation and Execution
Using the Makefile
A Makefile is provided for easy compilation.
Usage
Input:

The program will prompt you for the path to the CSV file containing the historical data.
You will also need to enter the year of sale.
Output:

The program will display the estimated selling price of the property.
It will also display the calculated LTCG tax.
Our Assumptions is 
The program assumes an initial purchase price of Rs 50 lakhs.
The purchase year is hardcoded as 2010. Modify these values directly in the main.cpp file if necessary.
Notes
Ensure that the CSV file is correctly formatted and contains valid data.
The program handles up to 100 records from the CSV file.
