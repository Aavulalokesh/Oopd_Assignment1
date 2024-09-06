#include<bits/stdc++.h>
using namespace std;

class Data {
public:
    int year;
    double in_rate;
    double growth_price;
    Data() : year(0), in_rate(0.0), growth_price(0.0) {}
    Data(int year, double in_rate, double growth_price) {
        this->year = year;
        this->in_rate = in_rate;
        this->growth_price = growth_price;
    }
};

class InflationRate {
public:
    Data rates[100]; // Assuming a maximum of 100 records
    int count;

    InflationRate() : count(0) {}

    void readCSV(string filename) {
        fstream file(filename);
        if (!file.is_open()) {
            cout << "Could not open file!" << endl;
            return;
        }
        string line;
        getline(file, line); // Skip the header
        while (getline(file, line)) {
            stringstream ss(line);
            string yearstr, in_rate_str, growth_price_Str;
            getline(ss, yearstr, ',');
            getline(ss, growth_price_Str, ',');
            getline(ss, in_rate_str, ',');
            yearstr = yearstr.substr(0, 4);
            rates[count] = Data(stoi(yearstr), stod(in_rate_str), stod(growth_price_Str));
            count++;
        }
        file.close();
    }
};

class TaxCalculator {
public:
    double initialPrice;
    int purchaseYear;
    int sellingYear;

    TaxCalculator(double price, int pYear, int sYear)
        : initialPrice(price), purchaseYear(pYear), sellingYear(sYear) {}

    double calculateSellingPrice(Data rates[], int count) {
        double sellingPrice = initialPrice;
        for (int i = 0; i < count; i++) {
            if (rates[i].year > purchaseYear && rates[i].year <= sellingYear) {
                double growthFactor = (1 + ((rates[i].growth_price ) / 100.0));
                cout << growthFactor << endl;
                sellingPrice *= growthFactor;
            }
        }
        return sellingPrice;
    }

    double calculateLTCG(double sellingPrice) {
        double gain = sellingPrice - initialPrice;
        return gain > 0 ? 0.125 * gain : 0; // 20% tax on the gain
    }
};

int main(int argc, char *argv[]) {
    string path;
    int year;
    double initialPrice = 50.0; // in lakhs
    int purchaseYear = 2010;
    int sellingYear;
    cout << "Enter your CSV data file path : ";
    cin >> path;
    cout << "Enter year : ";
    cin >> sellingYear;

    InflationRate inflationRate;
    inflationRate.readCSV(path);

    TaxCalculator taxCalculator(initialPrice, purchaseYear, sellingYear);
    double sellingPrice = taxCalculator.calculateSellingPrice(inflationRate.rates, inflationRate.count);
    double LTCG = taxCalculator.calculateLTCG(sellingPrice);

    cout << "Estimated Selling Price: Rs " << sellingPrice << " lakhs" << endl;
    cout << "Long-term Capital Gains Tax (LTCG): Rs " << LTCG << " lakhs" << endl;

    return 0;
}