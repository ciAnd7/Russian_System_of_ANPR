#include "anprapi.h"
#include "anpr.h"

using AnprApi = anpr::Api;

AnprApi::Api() {

    d = new Anpr();
}

AnprApi::~Api() {

    delete d;
}

bool AnprApi::recognize(const cv::Mat& img) {

    return d->recognize(img);
}

void AnprApi::findPlates(const cv::Mat &img, std::vector<cv::Mat> &plates) {

    d->findPlates(img, plates);
}
