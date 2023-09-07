#include <iostream>
#include <string>
#include <vector>

class hist
{
public:
    hist(uint32_t nBins, double xMin, double xMax) // constructor of the histogram
    {
        this->nBins = nBins;
        this->xMin = xMin;
        this->xMax = xMax;
    };

    uint32_t getNBins() // returns the number of bins
    {
        return nBins;
    };

    void fill(double x) // fills the histogram
        {

        };

    void setBinContent(uint32_t bin, double content) // sets the bin content
    {
        if (bin >= 0 && bin < nBins)
        {
            histData[bin] = content;
        }
    };

    uint32_t getBinContent(uint32_t bin) // returns the bin content
    {
        if (bin >= 0 && bin < nBins)
        {
            return histData[bin];
        }
    };

    uint32_t getIntegral() // returns the integral
    {
        uint32_t integral = 0;
        for (uint32_t binContent : histData)
        {
            integral += binContent;
        }
        return integral;
    };

    void clearHist() // clears the histogram
    {
        for (uint32_t &binContent : histData)
        {
            binContent = 0;
        }
    };

    std::vector<uint32_t> getHistData() // returns the histogram data
    {
        return histData;
    };

private:
    uint32_t nBins;
    double xMin;
    double xMax;
    std::vector<uint32_t> histData;
};
