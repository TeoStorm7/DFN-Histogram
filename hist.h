#include <iostream>
#include <string>
#include <vector>

class hist
{
public:
    hist(uint32_t nBins, double xMin, double xMax) // constructor of histogram
    {
        this->nBins = nBins;
        this->xMin = xMin;
        this->xMax = xMax;
        histData = std::vector<double>(nBins, 0.0); // resize of histData to nBins
    };

    uint32_t getNBins() // return the number of bins
    {
        return nBins;
    };

    void fill(double x) // fills the histogram
    {
        if (x >= xMin && x <= xMax)
        {
            uint32_t bin = static_cast<uint32_t>((x - xMin) / (xMax - xMin) * nBins);

            if (bin < nBins)
            {
                histData[bin]++; // Add to any bin existing
            }
        }
    };

    void setBinContent(uint32_t bin, double content) // sets the bin content
    {
        if (bin < nBins)
        {
            histData[bin] = content;
        }
    };

    double getBinContent(uint32_t bin) // returns the bin content
    {
        if (bin < nBins)
        {
            return histData[bin];
        }
        return 0.0;
    }

    double getIntegral() // returns the integral, no need of return 0
    {
        double integral = 0.0;
        for (double binContent : histData)
        {
            integral += binContent;
        }
        return integral;
    };

    void clearHist() // clears the histogram
    {
        histData = std::vector<double>(nBins, 0.0);
    };

    std::vector<double> getHistData() // returns the histogram
    {
        return histData;
    };

private:
    uint32_t nBins;
    double xMin;
    double xMax;
    std::vector<double> histData;
};
