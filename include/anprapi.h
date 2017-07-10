#ifndef ANPRAPI_H
#define ANPRAPI_H

#include <opencv2/core/core.hpp>

class Anpr;

namespace anpr {

class Api {
public:
    Api();
    ~Api();

    bool recognize(const cv::Mat &img);

    void findPlates(const cv::Mat &img, std::vector<cv::Mat> &plates);

private:

    Anpr *d;
};
}

#endif // ANPRAPI_H
