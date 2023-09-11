#include <iostream>
#include "hist.h"

int main()
{
    hist histogram(10, 0.0, 10.0); // constructor of histogram

    // Fill the histogram
    histogram.fill(2.5);
    histogram.fill(3.5);
    histogram.fill(3);
    histogram.fill(9);
    histogram.fill(5.5);
    histogram.fill(4);
    histogram.fill(4.5);

    // Test getNBins
    std::cout << "Number of bins: " << histogram.getNBins() << std::endl;

    // Test getBinContent
    std::cout << "Bin Contents:" << std::endl;
    for (uint32_t bin = 0; bin < histogram.getNBins(); bin++)
    {
        double binContent = histogram.getBinContent(bin);
        std::cout << "Bin " << bin << ": " << binContent << std::endl;
    }

    // Test getIntegral
    double integral = histogram.getIntegral();
    std::cout << "Integral: " << integral << std::endl;

    // Test setBinContent
    histogram.setBinContent(1, 5);  //  in bin 1, set the content to 5, initally it was 0
    histogram.setBinContent(2, 10); //  in bin 2, set the content to 10, initially it was 1

    for (uint32_t bin = 0; bin < histogram.getNBins(); bin++)
    {
        double binContent = histogram.getBinContent(bin);
        std::cout << "Bin content after setBinContent " << bin << ": " << binContent << std::endl;
    }

    // Test clearHist
    histogram.clearHist();

    // Test getHistData
    std::vector<double> histData = histogram.getHistData();
    for (double binContent : histData)
    {
        std::cout << "Bin Content after clearHist: " << binContent << std::endl;
    }

    return 0;
}
