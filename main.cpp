#include <iostream>

int main()
{
    hist histogram(10, 0.0, 10.0);

    histogram.setBinContent(3, 8.0);

    uint32_t bin = 3;
    std::cout << "Bin " << bin << " content: " << histogram.getBinContent(bin) << std::endl;

    std::cout << "Number of bins: " << histogram.getNBins() << std::endl;

    std::cout << "Integral: " << histogram.getIntegral() << std::endl;

    histogram.clearHist();

    return 0;
}
