
#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    std::cout << "Hello World!\n";
    cv::Mat img = cv::imread("emma.jpg");
    cv::imshow("emma", img);
    cv::waitKey(0);
}
